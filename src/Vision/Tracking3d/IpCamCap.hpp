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
// Author: PGonçalves                                                       *
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
        //! Name of camera
        std::string m_urlCam;
        //! Intrinsic values of IPCam 2.
        std::vector<double> m_intrinsicCam;
        //! Distortion values of IPCam 1.
        std::vector<double> m_distortionCam;
        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] url of ipcam.
        //! @param[in] name od ipcam.
        IpCamCap(DUNE::Tasks::Task* task, std::string ipcamurl, std::vector<double> intrinsicCam, std::vector<double> distortionCam) :
          m_task(task)
        {
          m_urlCam = ipcamurl;
          m_intrinsicCam = intrinsicCam;
          m_distortionCam = distortionCam;
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
            return undistortMap(m_frame);
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

        void
        loadIntrinsicParameters(void)
        {
          CvMat *intrinsic = cvCreateMat(3, 3, CV_32FC1);
          CvMat *distortion = cvCreateMat(1, 5, CV_32FC1);

          unsigned int c = 0;
          while (c < 9)
          {
            intrinsic->data.fl[c] = m_intrinsicCam[c];
            if (c < 5)
              distortion->data.fl[c] = m_distortionCam[c];
            c++;
          }

          m_mapX = cvCreateImage(cvSize(320, 180), IPL_DEPTH_32F, 1);
          m_mapY = cvCreateImage(cvSize(320, 180), IPL_DEPTH_32F, 1);
          cvInitUndistortMap(intrinsic, distortion, m_mapX, m_mapY);

          m_finalRemap = cvCreateImage(cvSize(320, 180), IPL_DEPTH_8U, 3);
        }

        IplImage*
        undistortMap(IplImage* image)
        {
          cvRemap(image, m_finalRemap, m_mapX, m_mapY);

          return m_finalRemap;
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Frame capture
        IplImage* m_frame;
        //! Capture struct OpenCV
        CvCapture* m_capture;
        //! state of capture;
        bool m_isCapture;
        //! state of connection to ipcam
        bool m_stateComIpCam;
        //! Undistort map for x
        IplImage* m_mapX;
        //! Undistort map for y
        IplImage* m_mapY;
        //! Final image Undistort
        IplImage *m_finalRemap;

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

          loadIntrinsicParameters();

          while (!isStopping())
          {
            m_frame = cvQueryFrame(m_capture);
            if (m_frame == NULL)
              m_isCapture = false;
            else
              m_isCapture = true;

            Delay::waitUsec(500);

          }
        }
    };
  }
}

#endif
