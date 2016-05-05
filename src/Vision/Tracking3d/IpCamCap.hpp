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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef VISION_TRACKING3D_IPCAMCAP_HPP_INCLUDED_
#define VISION_TRACKING3D_IPCAMCAP_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;
using namespace cv;

namespace Vision
{
  namespace Tracking3d
  {
    //! %Vision Stream Capture Protocol (%IpCamCap).
    class IpCamCap : public Thread
    {
      public:
        std::string m_urlCam;
        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] url of ipcam.
        //! @param[in] name od ipcam.
        IpCamCap(DUNE::Tasks::Task* task, std::string ipcamurl) :
          m_task(task)
        {
          m_urlCam = ipcamurl;
        }

        //! Destructor.
        ~IpCamCap(void)
        {
          cvReleaseCapture(&m_capture);
        }

        //! Capture frame.
        //! @return frame or NULL if none is available.
        IplImage*
        capFrame(void)
        {
          if (m_isCapture)
            return m_frame;
          else
            return NULL;
        }

        //! check state of connection to ipcam
        //! @return true if connected to ipcam.
        bool
        isConnected(void)
        {
          if (m_stateComIpCam)
            return true;
          else
            return false;
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Frame capture
        IplImage* m_frame;
        //! Capture struct - OpenCV
        CvCapture* m_capture;
        //! state of capture;
        bool m_isCapture;
        //! state of connection to ipcam
        bool m_stateComIpCam;

        void
        run(void)
        {
          m_isCapture = false;
          m_stateComIpCam = false;
          m_capture = cvCaptureFromFile(m_urlCam.c_str());
          while (m_capture == 0 && !isStopping())
          {
            Delay::waitMsec(1000);
            m_capture = cvCaptureFromFile(m_urlCam.c_str());
          }

          while (!isStopping())
          {
            m_frame = cvQueryFrame(m_capture);
            if (m_frame == NULL)
              m_isCapture = false;
            else
              m_isCapture = true;

          }
        }
    };
  }
}

#endif
