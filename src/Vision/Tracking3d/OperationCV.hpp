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

        /* track object in frame image */
        bool
        trackObject(IplImage *frame, std::string name)
        {
          try
          {
            if (m_is_tracking)
            {
              // setup position of search window
              m_win_x = m_object_x - ((m_window_search_width - m_tpl_width) / 2);
              m_win_y = m_object_y - ((m_window_search_height - m_tpl_height) / 2);

              // Window margins of tracking
              if ((m_win_x + (m_window_search_width / 2) - (m_window_search_width / 2)) <= 1)
                m_flag_track = false;
              else if ((m_win_x + m_window_search_width) >= m_frame_width)
                m_flag_track = false;
              else if ((m_win_y + (m_window_search_height / 2)) - (m_window_search_height / 2) <= 1)
                m_flag_track = false;
              else if ((m_win_y + m_window_search_height) >= m_frame_height)
                m_flag_track = false;
              else
                m_flag_track = true;

              // search object in search window
              if (m_flag_track)
              {
                cvReleaseImage(&m_tm);
                m_tm = cvCreateImage(cvSize(m_window_search_width - m_tpl_width + 1, m_window_search_height - m_tpl_height + 1), IPL_DEPTH_32F, 1);
                cvSetImageROI(frame, cvRect(m_win_x, m_win_y, m_window_search_width, m_window_search_height));
                cvMatchTemplate(frame, m_tpl, m_tm, CV_TM_CCOEFF_NORMED);
                cvErode(m_tm, m_tm, 0, 1);
                cvMinMaxLoc(m_tm, &m_minval, &m_maxval, &m_minloc, &m_maxloc, 0);
                cvResetImageROI(frame);
              }

              // if object found
              if (m_flag_track && m_maxval >= m_threshold)
              {
                // save object's current location
                m_object_x = m_win_x + m_maxloc.x;
                m_object_y = m_win_y + m_maxloc.y;

                m_coordImage.x = (m_object_x + m_tpl_width / 2);
                m_coordImage.y = (m_object_y + m_tpl_height / 2);

                // Refresh TPL
                m_cnt_refresh++;
                if (m_cnt_refresh > m_rep_tpl && m_rep_tpl != 0)
                {
                  cvSetImageROI( frame, cvRect(m_object_x, m_object_y, m_tpl_width, m_tpl_height));
                  cvReleaseImage(&m_tpl);
                  cvReleaseImage(&m_tm);
                  m_tm = cvCreateImage(cvSize(m_window_search_width - m_tpl_width + 1, m_window_search_height - m_tpl_height + 1), IPL_DEPTH_32F, 1);
                  m_tpl = cvCreateImage(cvSize(m_tpl_width, m_tpl_height), frame->depth, frame->nChannels);
                  cvCopy(frame, m_tpl);
                  cvResetImageROI(frame);
                  m_cnt_refresh = 0;
                }
                return true;
              }
              else
              {
                cvReleaseImage(&m_tm);
                m_tm = cvCreateImage( cvSize(m_frame_width - m_tpl_width + 1, m_frame_height - m_tpl_height + 1), IPL_DEPTH_32F, 1);
                cvMatchTemplate(frame, m_tpl, m_tm, CV_TM_CCOEFF_NORMED);
                cvErode(m_tm, m_tm, 0, 1);
                cvMinMaxLoc(m_tm, &m_minval, &m_maxval, &m_minloc, &m_maxloc, 0);
                if (m_maxval >= m_threshold)
                {
                  // save object's current location
                  m_object_x = m_maxloc.x;
                  m_object_y = m_maxloc.y;
                  // setup position of search window
                  m_win_x = m_object_x - ((m_window_search_width - m_tpl_width) / 2);
                  m_win_y = m_object_y - ((m_window_search_height - m_tpl_height) / 2);
                  m_flag_track = true;
                  return true;
                }
              }
            }
            return false;
          }
          catch ( ... )
          {
            m_task->war("ERROR: %s", name.c_str());
            return false;
          }
        }

        /* setNewTPL */
        void
        setNewTPL(int x, int y, IplImage *allFrame, std::string name)
        {
          cvReleaseImage(&m_tpl);
          m_tpl = cvCreateImage(cvSize(m_tpl_width, m_tpl_height), allFrame->depth, allFrame->nChannels);
          cvReleaseImage(&m_tm);
          m_tm = cvCreateImage( cvSize(m_window_search_width - m_tpl_width + 1, m_window_search_height - m_tpl_height + 1), IPL_DEPTH_32F, 1);
          m_mouse_x = x;
          m_mouse_y = y;
          m_object_x = m_mouse_x - (m_tpl_width / 2);
          m_object_y = m_mouse_y - (m_tpl_height / 2);

          if ((m_tpl_width / 2) + m_mouse_x > m_frame_width || (m_tpl_height / 2) + m_mouse_y > m_frame_height
              || m_mouse_x - (m_tpl_width / 2) < 0 || m_mouse_y - (m_tpl_height / 2) < 0)
          {
            m_is_tracking = false;
            m_task->war("Small space");
          }
          else
          {
            m_task->inf("Setting new TPL - %s", name.c_str());
            cvSetImageROI(allFrame, cvRect(m_object_x, m_object_y, m_tpl_width, m_tpl_height));
            cvCopy(allFrame, m_tpl, NULL);
            cvResetImageROI(allFrame);
            m_is_tracking = true;
            m_cnt_refresh = 0;
            m_flag_track = false;
          }
        }

        void
        inicTplTest(IplImage *frame)
        {
          m_tpl_width = m_tpl_size;
          m_tpl_height = m_tpl_size;
          m_window_search_width = m_window_search_size;
          m_window_search_height = m_window_search_size;
          m_threshold = 0.3;
          m_flag_track = false;
          m_rep_tpl = m_frame_refresh;
          m_frame_width = frame->width;
          m_frame_height = frame->height;
          m_object_x = m_frame_width / 2;
          m_object_y = m_frame_height / 2;
          m_mouse_x = m_frame_width / 2;
          m_mouse_y = m_frame_height / 2;
          // create template image
          m_tpl = cvCreateImage(cvSize(m_tpl_width, m_tpl_height), frame->depth, frame->nChannels);
          // create image for template matching result
          m_tm = cvCreateImage(cvSize(m_window_search_width - m_tpl_width + 1, m_window_search_height - m_tpl_height + 1), IPL_DEPTH_32F, 1);
          m_is_tracking = false;
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
        IplImage* m_tpl;
        //IplImage of results
        IplImage* m_tm;
        //Main frame width
        int m_frame_width;
        //Main frame height
        int m_frame_height;
        // template width
        int m_tpl_width;
        //template height
        int m_tpl_height;
        //search window width
        int m_window_search_width;
        //search window height
        int m_window_search_height;
        //sensibility of detection of tpl
        double m_threshold;
        //counter refresh TPL
        int m_cnt_refresh;
        //Position of 1º Pixel of TPL in width
        int m_object_x;
        //Position of 1º Pixel of TPL in height
        int m_object_y;
        //coordinate x of mouse
        int m_mouse_x;
        //coordinate y of mouse
        int m_mouse_y;
        //coordinate of 1º Pixel Window - X
        int m_win_x;
        //coordinate of 1º Pixel Window - Y
        int m_win_y;
        //Flag track
        bool m_flag_track;
        //Flag tracking
        bool m_is_tracking;
        //minimum value - match
        double m_minval;
        //maximum value - match
        double m_maxval;
        //number of repetitions before the tpl refresh
        int m_rep_tpl;
    };
  }
}

#endif
