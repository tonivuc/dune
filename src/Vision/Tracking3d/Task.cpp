//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro_Gonçalves                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>

// Local headers.
#include "IpCamCap.hpp"
#include "OperationCV.hpp"

namespace Vision
{
  namespace Tracking3d
  {
    using DUNE_NAMESPACES;
    using namespace cv;

    static const unsigned int c_sleep_time = 1500;

    struct Arguments
    {
      //! IpCam1 URL
      std::string url_ipcam1;
      //! IpCam2 URL
      std::string url_ipcam2;
      //! IpCam1 Name
      std::string name_ipcam1;
      //! IpCam2 Name
      std::string name_ipcam2;
      //! Size of Tpl match
      int tpl_size;
      //! Windows search size
      int window_search_size;
      //! Frames to Refresh
      int frames_to_refresh;
      //! Path to sysfs temperature.
      std::string temp_path;
      //! Entity label of temperature sensor.
      std::string elabel_temp;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Temperature messages.
      Arguments m_args;
      IMC::Temperature m_temp;
      IMC::GetImageCoords m_getcoord;
      IMC::GetWorldCoordinates m_getworldcoord;
      IpCamCap* m_cap1;
      IpCamCap* m_cap2;
      OperationCV* m_operation1;
      OperationCV* m_operation2;
      //! buffer for frame of Cam1
      IplImage* m_frameCam1;
      //! buffer for frame of Cam2
      IplImage* m_frameCam2;
      //! Init tpl values
      bool m_initValuesTpl;
      //! State of tracking Cam1
      bool m_isTrackingCam1;
      //! State of tracking Cam2
      bool m_isTrackingCam2;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx), m_cap1(NULL), m_cap2(NULL)
      {
        param("IpCam1 - URL", m_args.url_ipcam1)
        .description("IpCam1 Addresses");

        param("IpCam2 - URL", m_args.url_ipcam2)
        .description("IpCam2 Addresses");

        param("IpCam1 - Name", m_args.name_ipcam1)
        .defaultValue("Cam1")
        .description("IpCam1 Name");

        param("IpCam2 - Name", m_args.name_ipcam2)
        .defaultValue("Cma2")
        .description("IpCam2 Name");

        param("Tpl Size", m_args.tpl_size)
        .defaultValue("50")
        .description("Size of TPL match");

        param("Window Search Size", m_args.window_search_size)
        .defaultValue("90")
        .description("Size of Window Search Size");

        param("Frames to Refresh", m_args.frames_to_refresh)
        .defaultValue("30")
        .description("Number of frames necessary to auto refresh TPL");

        param("Path", m_args.temp_path)
        .defaultValue("/opt/vc/bin/vcgencmd measure_temp")
        .description("Path to the sysfs file");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("Mainboard (Core)")
        .description("Entity label of temperature sensor");

        bind<IMC::SetImageCoords>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        //TODO
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_temp.setSourceEntity(reserveEntity(m_args.elabel_temp));
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_cap1 = new IpCamCap(this, m_args.url_ipcam1);
        m_cap1->start();
        Delay::waitMsec(c_sleep_time);
        m_cap2 = new IpCamCap(this, m_args.url_ipcam2);
        m_cap2->start();
        m_operation1 = new OperationCV(this, m_args.url_ipcam1, m_args.tpl_size, m_args.window_search_size, m_args.frames_to_refresh);
        m_operation2 = new OperationCV(this, m_args.url_ipcam2, m_args.tpl_size, m_args.window_search_size, m_args.frames_to_refresh);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_initValuesTpl = false;
        m_isTrackingCam1 = false;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_cap1 != NULL)
        {
          m_cap1->stopAndJoin();
          delete m_cap1;
          m_cap1 = NULL;
        }
        if (m_cap2 != NULL)
        {
          m_cap2->stopAndJoin();
          delete m_cap2;
          m_cap2 = NULL;
        }
      }

      //! Consume Message
      void
      consume(const IMC::SetImageCoords* msg)
      {
        if (msg->camid == 1)
        {
          if (m_frameCam1 != NULL)
          {
            if (m_initValuesTpl)
              m_operation1->setNewTPL(msg->x, msg->y, m_frameCam1, m_args.name_ipcam1);
          }
        }
        else
        {
          if (m_frameCam2 != NULL)
          {
            if (m_initValuesTpl)
              m_operation2->setNewTPL(msg->x, msg->y, m_frameCam2, m_args.name_ipcam2);
          }
        }
      }

      void
      preLoadFrame(int mtimes)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("Cleaning buffer")));
        int t = 0;
        while (t < mtimes && !stopping())
        {
          m_frameCam1 = m_cap1->capFrame();
          m_frameCam2 = m_cap2->capFrame();
          if (!m_cap1->isConnected() || !m_cap2->isConnected())
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("Link to IPCam")));
          if (m_frameCam1 != NULL && m_frameCam2 != NULL)
            t++;
        }
      }

      float
      getTemperatureCPU(const char* cmd)
      {
        float temp = 0;
        char buffer[64];
        std::string result = "";
        FILE* pipe = popen(cmd, "r");
        if (!pipe)
        {
          err("popen() failed!");
        }
        else
        {
          try
          {
            while (!feof(pipe))
            {
              if (fgets(buffer, 64, pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            pclose(pipe);
            throw;
          }
          pclose(pipe);
          std::sscanf(buffer, "temp=%f'C", &temp);
        }
        return temp;
      }

      //! Main loop.
      void
      onMain(void)
      {
        preLoadFrame(60);

        m_operation1->inicTplTest(m_frameCam1);
        m_operation2->inicTplTest(m_frameCam2);
        m_initValuesTpl = true;

        while (!stopping())
        {
          m_frameCam1 = m_cap1->capFrame();
          m_frameCam2 = m_cap2->capFrame();
          if (m_frameCam1 != NULL && m_frameCam2 != NULL)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            m_isTrackingCam1 = m_operation1->trackObject(m_frameCam1);
            m_isTrackingCam2 = m_operation2->trackObject(m_frameCam2);

            m_getcoord.setSourceEntity(getEntityId());
            m_getcoord.camid = 1;
            m_getcoord.x = m_operation1->m_coordImage.x;
            m_getcoord.y = m_operation1->m_coordImage.y;
            dispatch(m_getcoord);

            m_getcoord.setSourceEntity(getEntityId());
            m_getcoord.camid = 2;
            m_getcoord.x = m_operation2->m_coordImage.x;
            m_getcoord.y = m_operation2->m_coordImage.y;
            dispatch(m_getcoord);

            if (m_isTrackingCam1 && m_isTrackingCam2)
            {
              m_getworldcoord.setSourceEntity(getEntityId());
              m_getworldcoord.tracking = true;
              m_getworldcoord.x = 1.27;
              m_getworldcoord.y = 2.46;
              m_getworldcoord.z = 3.45;
              dispatch(m_getworldcoord);
            }
            else
            {
              m_getworldcoord.setSourceEntity(getEntityId());
              m_getworldcoord.tracking = false;
              dispatch(m_getworldcoord);
            }

            try
            {
              m_temp.value = getTemperatureCPU(m_args.temp_path.c_str());
              //m_temp.value = 32.7;
              dispatch(m_temp);
            }
            catch (...)
            {}
          }
          else
          {
            war("NULL FRAME");
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IO_ERROR);
          }

          waitForMessages(0.01);
          m_frameCam1 = NULL;
          m_frameCam2 = NULL;

        }
      }
    };
  }
}

DUNE_TASK
