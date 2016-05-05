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

#ifndef VISION_TRACKING3D_OPERATIONCV_HPP_INCLUDED_
#define VISION_TRACKING3D_OPERATIONCV_HPP_INCLUDED_

// ISO C++ 98 headers.
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
    class OperationCV
    {
      struct coordImage
      {
        int x;
        int y;
      };

      public:
        // Name of ipcam
        std::string m_nameCam;
        // template size
        int m_tpl_size;
        // window search size
        int m_window_search_size;
        // number of frames before refresh tpl
        int m_frame_refresh;
        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] name od ipcam.
        OperationCV(DUNE::Tasks::Task* task, std::string name, int tpl_size, int window_size, int frame_refresh) :
          m_task(task)
        {
          m_nameCam = name;
          m_tpl_size = tpl_size;
          m_window_search_size = window_size;
          m_frame_refresh = frame_refresh;
        }

        //!Draw a dashed line
        void
        dashedLine(IplImage* image, CvPoint p1, CvPoint p2, CvScalar color, int interval, bool axis)
        {
          int cnt = 0;
          //Vertical
          if (!axis)
          {
            while (cnt < p2.y)
            {
              cvLine(image, cvPoint(p1.x, p1.y + cnt), cvPoint(p2.x, cnt + interval), color, 1, 8, 0);
              cnt = cnt + interval * 2;
            }
          }
          //Horizontal
          else
          {
            while (cnt < p2.x)
            {
              cvLine(image, cvPoint(p1.x + cnt, p1.y), cvPoint(cnt + interval, p2.y), color, 1, 8, 0);
              cnt = cnt + interval * 2;
            }
          }
        }

        /* track object in frame image */
        IplImage*
        trackObject(IplImage *frame)
        {
          if (is_tracking)
          {
            // setup position of search window
            win_x = object_x - ((window_search_width - tpl_width) / 2);
            win_y = object_y - ((window_search_height - tpl_height) / 2);

            // Window margins of tracking

            if ((win_x + (window_search_width / 2) - (window_search_width / 2)) <= 1)
              flag_track = 1;
            else if ((win_x + window_search_width) >= frame_width)
              flag_track = 2;
            else if ((win_y + (window_search_height / 2)) - (window_search_height / 2) <= 1)
              flag_track = 3;
            else if ((win_y + window_search_height) >= frame_height)
              flag_track = 4;
            else
              flag_track = 0;

            // search object in search window
            if (flag_track == 0)
            {
              cvReleaseImage(&tm);
              tm = cvCreateImage(cvSize(window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
              cvSetImageROI(frame, cvRect(win_x, win_y, window_search_width, window_search_height));
              cvMatchTemplate(frame, tpl, tm, CV_TM_CCOEFF_NORMED);
              cvErode(tm, tm, 0, 1);
              cvMinMaxLoc(tm, &minval, &maxval, &m_minloc, &m_maxloc, 0);
              cvResetImageROI(frame);
            }

            // if object found
            if (flag_track == 0 && maxval >= threshold)
            {
              // save object's current location
              object_x = win_x + m_maxloc.x;
              object_y = win_y + m_maxloc.y;

              m_coordImage.x = (object_x + tpl_width / 2);
              m_coordImage.y = (object_y + tpl_height / 2);

              // Refresh TPL
              cnt_refresh++;
              if (cnt_refresh > rep_tpl && rep_tpl != 0)
              {
                //printf("REFRESH TPL: %s\n\r", name);
                cvSetImageROI( frame, cvRect(object_x, object_y, tpl_width, tpl_height));
                cvReleaseImage(&tpl);
                cvReleaseImage(&tm);
                tm = cvCreateImage( cvSize(window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
                tpl = cvCreateImage(cvSize(tpl_width, tpl_height), frame->depth, frame->nChannels);
                cvCopy(frame, tpl);
                cvResetImageROI(frame);
                cnt_refresh = 0;
              }
            }
            else
            {
              cvReleaseImage(&tm);
              tm = cvCreateImage( cvSize(frame_width - tpl_width + 1, frame_height - tpl_height + 1), IPL_DEPTH_32F, 1);
              cvMatchTemplate(frame, tpl, tm, CV_TM_CCOEFF_NORMED);
              cvErode(tm, tm, 0, 1);
              cvMinMaxLoc(tm, &minval, &maxval, &m_minloc, &m_maxloc, 0);
              if (maxval >= threshold)
              {
                // save object's current location
                object_x = m_maxloc.x;
                object_y = m_maxloc.y;
                // setup position of search window
                win_x = object_x - ((window_search_width - tpl_width) / 2);
                win_y = object_y - ((window_search_height - tpl_height) / 2);
                flag_track = 0;
              }
            }
            return frame;
          }
          return frame;
        }

        /* mouse handler */
        void
        setNewTPL(int x, int y, IplImage *allFrame, std::string name)
        {
          cvReleaseImage(&tpl);
          tpl = cvCreateImage(cvSize(tpl_width, tpl_height), allFrame->depth, allFrame->nChannels);
          cvReleaseImage(&tm);
          tm = cvCreateImage( cvSize(window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
          x_mouse = x;
          y_mouse = y;
          object_x = x_mouse - (tpl_width / 2);
          object_y = y_mouse - (tpl_height / 2);

          if ((tpl_width / 2) + x_mouse > frame_width || (tpl_height / 2) + y_mouse > frame_height
              || x_mouse - (tpl_width / 2) < 0 || y_mouse - (tpl_height / 2) < 0)
          {
            is_tracking = false;
            m_task->war("Small space");
          }
          else
          {
            m_task->inf("Setting new TPL - %s", name.c_str());
            cvSetImageROI(allFrame, cvRect(object_x, object_y, tpl_width, tpl_height));
            cvCopy(allFrame, tpl, NULL);
            cvResetImageROI(allFrame);
            is_tracking = true;
            cnt_refresh = 0;
            flag_track = 1;
            //TODO
            /*cvShowImage(name.c_str(), tpl);
            cvWaitKey(8);*/
          }
        }

        void
        inicTplTest(IplImage *frame)
        {
          tpl_width = m_tpl_size;
          tpl_height = m_tpl_size;
          window_search_width = m_window_search_size;
          window_search_height = m_window_search_size;
          threshold = 0.3;
          flag_track = 0;
          rep_tpl = m_frame_refresh;
          //Size of Image capture
          frame_width = frame->width;
          frame_height = frame->height;

          object_x = frame_width / 2;
          object_y = frame_height / 2;
          x_mouse = frame_width / 2;
          y_mouse = frame_height / 2;

          // create template image
          tpl = cvCreateImage(cvSize(tpl_width, tpl_height), frame->depth, frame->nChannels);
          // create image for template matching result
          tm = cvCreateImage(cvSize(window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);

          is_tracking = false;
        }

        coordImage m_coordImage;

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //minimum shift of TPL Track
        CvPoint m_minloc;
        //maximum shift of TPL Track
        CvPoint m_maxloc;
        //IplImage template match
        IplImage* tpl;
        //IplImage of results
        IplImage* tm;
        //Main frame width
        int frame_width;
        //Main frame height
        int frame_height;
        // template width
        int tpl_width;
        //template height
        int tpl_height;
        //search window width
        int window_search_width;
        //search window height
        int window_search_height;
        //sensibility of detection of tpl
        double threshold;
        //counter refresh TPL
        int cnt_refresh;
        //Position of 1º Pixel of TPL in width
        int object_x;
        //Position of 1º Pixel of TPL in height
        int object_y;
        //coordinate x of mouse
        int x_mouse;
        //coordinate y of mouse
        int y_mouse;
        //coordinate of 1º Pixel Window - X
        int win_x;
        //coordinate of 1º Pixel Window - Y
        int win_y;
        //Flag track
        int flag_track;
        //Flag tracking
        bool is_tracking;
        //minimum value - match
        double minval;
        //maximum value - match
        double maxval;
        //number of repetitions before the tpl refresh
        int rep_tpl;
    };
  }
}

#endif
