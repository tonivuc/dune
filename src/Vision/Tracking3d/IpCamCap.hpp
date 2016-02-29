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

// ISO C++ 98 headers.
#include <queue>
#include <unistd.h>

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
    class IpCamCap: public Thread
    {
    public:
      std::string urlCam;
      std::string nameCam;
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] url of ipcam.
      //! @param[in] name od ipcam.
      IpCamCap(DUNE::Tasks::Task* task, std::string ipcamurl, std::string camname):
        m_task(task)
      {
        urlCam = ipcamurl;
        nameCam = camname;
      }

      //! Destructor.
      ~IpCamCap(void)
      {
        cvReleaseCapture(&capture);
      }

      //! Capture frame.
      //! @return frame or NULL if none is available.
      IplImage*
      capFrame(void)
      {
        if(isCapture == 1)
        {
          //isCapture = 0;
          return frame;
        }
        else
          return NULL;
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Frame capture
      IplImage* frame;
      //!Capture struct - OpenCV
      CvCapture* capture;
      //! state of capture; 
      bool isCapture;

      void
      run(void)
      {
        isCapture = 0;
        capture = cvCaptureFromFile(urlCam.c_str());
        while ( capture == 0 && !isStopping())
        {
          m_task->err(DTR("ERROR OPEN IPCAM: %s"), nameCam.c_str());
          sleep(1);
          capture = cvCaptureFromFile(urlCam.c_str());
        }

        while (!isStopping())
        {
          frame = cvQueryFrame( capture );               
          if(frame == NULL)
          {
            isCapture = 0;
            m_task->err(DTR("null frame -> url: %s  Name: %s"), urlCam.c_str(), nameCam.c_str());
          }
          else
          {
            isCapture = 1;
            //m_task->inf(DTR("frame %d: url: %s  Name: %s"), cnt, urlCam.c_str(), nameCam.c_str());
          }

        }
      }
    };
  }
}

#endif
