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

// DUNE headers.
#include <DUNE/DUNE.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>
#include "../../../vendor/libraries/cvblob/cvblob.h"

// Local headers.
#include "IpCamCap.hpp"
#include "OperationCV.hpp"

namespace Vision
{
  namespace Tracking3d
  {
    using DUNE_NAMESPACES;
    using namespace cv;

    struct Arguments
    {
        // - IpCam1
        std::vector<std::string> ipcam1;
        // - IpCam2
        std::vector<std::string> ipcam2;
    };

    struct Task: public DUNE::Tasks::Task
    {

        Arguments m_args;
        IMC::GetImageCoords m_getcoord;
        IpCamCap* m_cap1;
        IpCamCap* m_cap2;
        OperationCV* m_operation1;
        OperationCV* m_operation2;
        //! Frame capture Cam1
        IplImage* m_frameCam1;
        //! Frame capture Cam2
        IplImage* m_frameCam2;
        //Variables for test tpl ( template match)
        IplImage* m_test_tpl_1;
        IplImage* m_test_tpl_2;
        IplImage* m_tpl1;
        IplImage* m_tpl2;
        bool m_flag_inic_tpl_aloc;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx) :
            DUNE::Tasks::Task(name, ctx), m_cap1(NULL), m_cap2(NULL)
        {
          param("IpCam1", m_args.ipcam1)
          //.defaultValue("localhost")
          .description("IpCam1 Addresses");

          param("IpCam2", m_args.ipcam2)
          //.defaultValue("localhost")
          .description("IpCam2 Addresses");

          bind<IMC::SetImageCoords>(this);
        }

        //! Update internal state with new parameter values.
        void onUpdateParameters(void)
        {
        }

        //! Reserve entity identifiers.
        void onEntityReservation(void)
        {
        }

        //! Resolve entity names.
        void onEntityResolution(void)
        {
        }

        //! Acquire resources.
        void onResourceAcquisition(void)
        {
        }

        //! Initialize resources.
        void onResourceInitialization(void)
        {
          //cvNamedWindow( "LEFT" , 0 );
          //cvNamedWindow( "RIGHT" , 0 );
          m_cap1 = new IpCamCap(this, m_args.ipcam1[0].c_str(), "LEFT");
          m_cap1->start();
          m_cap2 = new IpCamCap(this, m_args.ipcam2[0].c_str(), "RIGHT");
          m_cap2->start();
          m_operation1 = new OperationCV(this, "LEFT");
          m_operation2 = new OperationCV(this, "RIGHT");
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          m_flag_inic_tpl_aloc = 0;
        }

        //! Release resources.
        void onResourceRelease(void)
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
        void consume( const IMC::SetImageCoords* msg )
        {
          war("CAM: %d", msg->camid);
          war("VALUES: %d : %d", msg->x, msg->y);
          if (msg->camid == 1)
          {
            inf("COORD LEFT: x = %d, y = %d", msg->x, msg->y);
            if (m_frameCam1 != NULL)
            {
              war("DENTRO 1");
              if (m_flag_inic_tpl_aloc)
                m_operation1->MouseHandler(msg->x, msg->y, m_frameCam1, "LEFT");
            }
          }
          else
          {
            inf("COORD RIGHT: x = %d, y = %d", msg->x, msg->y);
            if (m_frameCam2 != NULL)
            {
              war("DENTRO 2");
              if (m_flag_inic_tpl_aloc)
                m_operation2->MouseHandler(msg->x, msg->y, m_frameCam2, "RIGHT");
            }
          }
        }

        void PreLoadFrame(int mtimes)
        {
          war("Cleaning buffer ffmpeg");
          int t = 0;
          while (t < mtimes && !stopping())
          {
            m_frameCam1 = m_cap1->capFrame();
            m_frameCam2 = m_cap2->capFrame();
            if (m_frameCam1 != NULL && m_frameCam2 != NULL)
              t++;
          }
        }

        //! Main loop.
        void onMain(void)
        {
          PreLoadFrame(60);

          while (!stopping())
          {
            m_frameCam1 = m_cap1->capFrame();
            m_frameCam2 = m_cap2->capFrame();
            if (m_frameCam1 != NULL && m_frameCam2 != NULL)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

              if (!m_flag_inic_tpl_aloc)
              {
                war("Test Template Match - active");
                m_flag_inic_tpl_aloc = 1;
                m_operation1->inicTplTest(m_frameCam1);
                m_operation2->inicTplTest(m_frameCam2);
              }

              cvShowImage("LEFT TEST", m_operation1->TrackObject(m_frameCam1, "Cam1"));
              cvShowImage("RIGHT TEST", m_operation2->TrackObject(m_frameCam2, "Cam2"));
              //inf("SEND");
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

              cvWaitKey(8);
            }
            else
            {
              war("NULL FRAME");
              setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("NULL Frame")));
            }

            waitForMessages(0.07);
            m_frameCam1 = NULL;
            m_frameCam2 = NULL;

          }
        }
    };
  }
}

DUNE_TASK
