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

#define INTERVAL_COLOR            (20)

namespace Vision
{
  namespace Tracking3d
  {
    //! %Vision Stream Capture Protocol (%IpCamCap).
    class OperationCV
    {
      struct valuesRGB
      {
          int lowBlue;
          int highBlue;

          int lowGreen;
          int highGreen;

          int lowRed;
          int highRed;

          int b;
          int g;
          int r;
      };

    public:
      std::string nameCam;
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] name od ipcam.
      OperationCV(DUNE::Tasks::Task* task, std::string name):
        m_task(task)
      {
        nameCam = name;
      }

      //! Capture frame.
      //! @return frame or NULL if none is available.
      IplImage*
      FindBlob(struct valuesRGB _valuesRGB, IplImage* imgOri)
      {
        if(labelImg == NULL)
            labelImg = cvCreateImage(cvGetSize(imgOri),IPL_DEPTH_LABEL,1);//Image Variable for blobs
        //Finding the blobs
        cvLabel(FindColor(imgOri, _valuesRGB), labelImg, blobs);
        //filter blobs by size
        cvFilterByArea(blobs, 50, 500);

        int cnt = 0;
        //Calculating the current position
        for (cvb::CvBlobs::const_iterator it=blobs.begin(); it!=blobs.end(); ++it)
        {
          //m_task-> war("FIND %d", cnt+1);
          moment10 = it->second->m10;
          med_x = med_x + moment10;
          moment01 = it->second->m01;
          med_y = med_y + moment01;

          area = it->second->area;
          med_area = med_area + area;
          cnt++;

        }

        if(cnt > 0)
        {
          DashedLine(imgOri, cvPoint((med_x/cnt)/(med_area/cnt), 0), cvPoint((med_x/cnt)/(med_area/cnt), imgOri -> height), cvScalar(0, 100, 255, 0), 20, 0);
          DashedLine(imgOri, cvPoint(0, (med_y/cnt)/(med_area/cnt)), cvPoint(imgOri -> width, (med_y/cnt)/(med_area/cnt)), cvScalar(0, 100, 255, 0), 20, 1);
        }

        //cvCircle(imgOri, cvPoint( (med_x/cnt)/(med_area/cnt), (med_y/cnt)/(med_area/cnt)), 14, cvScalar( 240, 180, 55, 0 ), 2, 8, 0);
        cvReleaseImage(&imgThresholded);
        cvReleaseImage(&labelImg);

        return imgOri;
      }

      IplImage*
      FindColor(IplImage* imgOriginal, struct valuesRGB _valuesRGB)
      {
        imgThresholded = cvCreateImage( cvGetSize(imgOriginal), 8, 1);

        cvInRangeS(imgOriginal, Scalar(_valuesRGB.lowBlue, _valuesRGB.lowGreen, _valuesRGB.lowRed), Scalar(_valuesRGB.highBlue, _valuesRGB.highGreen, _valuesRGB.highRed), imgThresholded); //Threshold the image

        cvSmooth(imgThresholded, imgThresholded, CV_MEDIAN, 3);

        return imgThresholded;
      }

      //!Draw a dashed line
      void
      DashedLine( IplImage* image, CvPoint p1, CvPoint p2, CvScalar color, int interval, bool axis)
      {
        int cnt = 0;
        //Vertical
        if (!axis)
        {
          while (cnt < p2.y)
          {
            cvLine(image, cvPoint(p1.x, p1.y + cnt), cvPoint(p2.x, cnt + interval), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
        //Horizontal
        else
        {
          while (cnt < p2.x)
          {
            cvLine(image, cvPoint(p1.x + cnt, p1.y), cvPoint(cnt + interval, p2.y), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
      }

      void
      SelectColorPixel(int xCoord, int yCoord, IplImage* imageColor)
      {
        cor_r_cam = 0, cor_g_cam = 0, cor_b_cam = 0;
        int step  = imageColor->widthStep;
        uchar* data = (uchar*) imageColor->imageData;
        int channels= imageColor->nChannels;
        int i = 0;
        for(int y_m = (yCoord - 4); y_m < (yCoord + 4); y_m++)
          for(int x_m = (xCoord - 4); x_m < (xCoord + 4); x_m++)
          {
            color_cam[i][0] = data[y_m*step + x_m*channels+0];    ///b
            color_cam[i][1] = data[y_m*step + x_m*channels+1];    ///g
            color_cam[i][2] = data[y_m*step + x_m*channels+2];    ///r
            i++;
          }

        for(int t = 0; t<i; t++)
        {
            cor_b_cam = (cor_b_cam + color_cam[t][0]);
            cor_g_cam = (cor_g_cam + color_cam[t][1]);
            cor_r_cam = (cor_r_cam + color_cam[t][2]);
        }

        m_valuesRGB.b = cor_b_cam/i;
        m_valuesRGB.g = cor_g_cam/i;
        m_valuesRGB.r = cor_r_cam/i;

        SetColorRGB(cor_b_cam/i, cor_g_cam/i, cor_r_cam/i);
      }

      void
      SetColorRGB( int blueColor, int greenColor, int redColor)
      {
        m_valuesRGB.lowBlue = blueColor - INTERVAL_COLOR;
        m_valuesRGB.highBlue = blueColor + INTERVAL_COLOR;
        if(m_valuesRGB.lowBlue < 0)
          m_valuesRGB.lowBlue = 0;
        if(m_valuesRGB.highBlue > 255)
          m_valuesRGB.highBlue = 255;

        m_valuesRGB.lowGreen = greenColor - INTERVAL_COLOR;
        m_valuesRGB.highGreen = greenColor + INTERVAL_COLOR;
        if(m_valuesRGB.lowGreen < 0)
          m_valuesRGB.lowGreen = 0;
        if(m_valuesRGB.highGreen > 255)
          m_valuesRGB.highGreen = 255;

        m_valuesRGB.lowRed = redColor - INTERVAL_COLOR;
        m_valuesRGB.highRed = redColor + INTERVAL_COLOR;
        if(m_valuesRGB.lowRed < 0)
          m_valuesRGB.lowRed = 0;
        if(m_valuesRGB.highRed > 255)
          m_valuesRGB.highRed = 255;
      }

      /* track object in frame image */
      IplImage*
      TrackObject(IplImage *frame)
      {
        if(is_tracking)
        {
          /*clone Image for debud */
          if(back == NULL)
            back = cvCreateImage( cvGetSize(frame), 8, 3);

          back = frame;
          /* setup position of search window */
          win_x = object_x - ( (window_search_width  - tpl_width) / 2 );
          win_y = object_y - ( (window_search_height - tpl_height) / 2 );

          /****************************** Window margins of tracking *******************************/

          if ( (win_x+(window_search_width/2) - (window_search_width/2)) <= 1)
            flag_track = 1;
          else if ( (win_x + window_search_width) >= frame_width)
            flag_track = 2;
          else if ( (win_y + (window_search_height/2)) - (window_search_height/2) <= 1)
            flag_track = 3;
          else if ( (win_y + window_search_height) >= frame_height)
            flag_track = 4;
          else
            flag_track = 0;

          //printf("flag_track: %d\n\r", flag_track);
          /***************************************************************************/
          /* search object in search window */
          if (flag_track == 0)
          {
            //printf("AQUI 1\r\n");
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
            cvSetImageROI( frame, cvRect( win_x, win_y, window_search_width, window_search_height ) );
            cvMatchTemplate( frame, tpl, tm, CV_TM_CCOEFF_NORMED );
            cvErode(tm, tm, 0, 1);
            cvMinMaxLoc( tm, &minval, &maxval, &m_minloc, &m_maxloc, 0 );
            cvResetImageROI( frame );
            //printf("AQUI 2\r\n");
          }
          /* if object found... */
          if (flag_track == 0 && maxval >= threshold)
          {
            //printf("AQUI 3\r\n");
            /* save object's current location */
            object_x = win_x + m_maxloc.x;
            object_y = win_y + m_maxloc.y;

            /* draw a box there */
            cvRectangle( back, cvPoint( object_x, object_y ), cvPoint( object_x + tpl_width, object_y + tpl_height ), cvScalar( 0, 255, 0,
  0 ), 2, 0, 0 );
            cvRectangle( back, cvPoint( win_x, win_y ), cvPoint( win_x + window_search_width, win_y + window_search_height ), cvScalar(
            255, 0, 0, 0 ), 2, 0, 0 );
            cvCircle(back, cvPoint( object_x + tpl_width/2, object_y + tpl_height/2 ),3,cvScalar( 0, 255, 0, 0 ), 1, 8, 0);

            /*Refresh TPL*/
            cnt_refresh++;
            if (cnt_refresh > rep_tpl && rep_tpl != 0)
            {
              cvSetImageROI( frame, cvRect( object_x, object_y, tpl_width, tpl_height) );
              cvReleaseImage( &tpl );
              cvReleaseImage( &tm );
              tm = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
              tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
              cvCopy( frame, tpl);
              cvResetImageROI( frame );
              cnt_refresh=0;
            }
            //printf("AQUI 4\r\n");
          }
          else
          {
            //printf("AQUI 5\r\n");
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( frame_width - tpl_width + 1, frame_height - tpl_height + 1 ), IPL_DEPTH_32F, 1);
            cvMatchTemplate( frame, tpl, tm, CV_TM_CCOEFF_NORMED );
            cvErode(tm, tm, 0, 1);
            cvMinMaxLoc( tm, &minval, &maxval, &m_minloc, &m_maxloc, 0 );
            if (maxval >= threshold)
            {
              /* save object's current location */
              object_x = m_maxloc.x;
              object_y = m_maxloc.y;
              /* setup position of search window */
              win_x = object_x - ( (window_search_width  - tpl_width) / 2 );
              win_y = object_y - ( (window_search_height - tpl_height) / 2 );
              flag_track = 0;
            }
            //printf("AQUI 6\r\n");
          }
          return back;
        }

        return frame;

      }

      /* mouse handler */
      void
      MouseHandler(int x, int y, IplImage *allFrame, char* name)
      {
        cvReleaseImage( &tpl );
        tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), allFrame->depth, allFrame->nChannels );
        cvReleaseImage( &tm );
        tm = cvCreateImage( cvSize( window_search_width - tpl_width + 1, window_search_height - tpl_height + 1 ), IPL_DEPTH_32F, 1);
        x_mouse=x;
        y_mouse=y;
        object_x = x_mouse - ( tpl_width  / 2 );
        object_y = y_mouse - ( tpl_height / 2 );

        if ( (tpl_width  / 2) + x_mouse > frame_width || (tpl_height / 2) + y_mouse > frame_height || x_mouse - (tpl_width / 2) < 0
            || y_mouse - (tpl_height / 2) < 0)
        {
          is_tracking = 0;
          printf("\nSmall space\n");
        }
        else
        {
          cvSetImageROI( allFrame, cvRect( object_x, object_y, tpl_width, tpl_height) );
          cvCopy( allFrame, tpl, NULL );
          cvResetImageROI( allFrame );
          is_tracking = 1;
          //cvShowImage(name, tpl);
        }
      }

      void
      inicTplTest(IplImage *frame)
      {
        tpl_width = 60;
        tpl_height = 60;
        window_search_width = 110;
        window_search_height = 110;
        window_search_size = 110;
        tpl_size = 60;
        threshold = 0.3;
        flag_track = 0;
        rep_tpl = 10;
        //Size of Image capture
        frame_width = frame -> width;
        frame_height = frame -> height;

        object_x = frame_width/2;
        object_y = frame_height/2;
        x_mouse = frame_width/2;
        y_mouse = frame_height/2;
        window_search_size = 110;
        tpl_size = 60;

        /* create template image */
        tpl = cvCreateImage( cvSize( tpl_width, tpl_height), frame->depth, frame->nChannels );
        /* create image for template matching result */
        tm = cvCreateImage( cvSize( window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1 );

      }


      valuesRGB m_valuesRGB;

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //Structure to hold blobs
      cvb::CvBlobs blobs;
      //
      IplImage* imgThresholded;
      //
      IplImage* labelImg;

      //Struct for mass centers
      CvMoments* moments;
      //X parameter of CvMoments
      double moment10;
      //Y parameter of CvMoments
      double moment01;
      //Med X coor
      double med_x;
      //Med Y coor
      double med_y;
      //Med area
      double med_area;
      //Area of mass
      double area;
      //Matrix for color
      int color_cam[512][3];
      //Final color RGB
      int cor_r_cam;
      int cor_g_cam;
      int cor_b_cam;
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
      //width Inic
      int inic_width;
      //height Inic
      int inic_height;
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
      //Flag track(0=off,1=on)
      int flag_track;
      //Flag tracking(0=false,1=true)
      bool is_tracking;
      //minimum value - match
      double minval;
      //maximum value - match
      double maxval;
      //window search size
      int window_search_size;
      //template size
      int tpl_size;
      //number of repetitions before the tpl refresh
      int rep_tpl;
      //IplImage Backup of main for debug
      IplImage* back;
    };
  }
}

#endif
