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

// ISO C++ 98 headers.
#include <queue>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>

//FlyCapture headers
#include <FlyCapture2.h>

namespace Vision
{
  namespace PointGrey
  {
    #define SOFTWARE_TRIGGER_CAMERA
    const int col_size   = 640;
    const int row_size   = 480;
    const int data_size  = row_size * col_size;

    using DUNE_NAMESPACES;
    using namespace cv;

    //! %Task arguments.
    struct Arguments
    {
      //! LED scheme.
      std::string led_type;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! HTTP camera port
      static const unsigned c_port = 80;
      //! Configuration parameters
      Arguments m_args;
      FlyCapture2::Camera cam;
      FlyCapture2::CameraInfo camInfo;
      FlyCapture2::Error error;
      FlyCapture2::BusManager busMgr;
      FlyCapture2::PGRGuid guid;
      FlyCapture2::Format7PacketInfo fmt7PacketInfo;
      FlyCapture2::Format7ImageSettings fmt7ImageSettings;
      CvMemStorage* storage = NULL;
      IplImage* img = NULL;
      IplImage* img_bw = NULL;
      FlyCapture2::TriggerMode triggerMode;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
    	param("Led Mode", m_args.led_type)
    	  .description("Led type mode.");
      }

      void
      onUpdateParameters(void)
      {
      }

      void
      onResourceAcquisition(void)
      {
      }

      void
      onResourceRelease(void)
      {
      }

      void
      onRequestActivation(void)
      {
      }

      void
      onRequestDeactivation(void)
      {
      }

      void
      onActivation(void)
      {
      }

      void
      onDeactivation(void)
      {
      }

      void
      updateStrobe(void)
      {
        if (m_args.led_type == "STROBE")
        {
          war("enabling strobe output");
          return;
        }
        else if (m_args.led_type == "ON")
        {
          war("leds always on");
          return;
        }
        else
        {
          war("leds always off");
        }
      }

      bool
      capture(void)
      {
        // Create OpenCV structs for grayscale image
        img = cvCreateImage(cvSize(col_size, row_size), IPL_DEPTH_8U, 1);
        img_bw = cvCloneImage(img);

        storage = cvCreateMemStorage(0);

        // Get Flea2 camera
        error = busMgr.GetCameraFromIndex(0, &guid);

        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Connect to the camera
        error = cam.Connect(&guid);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Get camera information
        error = cam.GetCameraInfo(&camInfo);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Get current trigger settings
        error = cam.GetTriggerMode(&triggerMode);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Set camera to trigger mode 0
        triggerMode.onOff = true;
        triggerMode.mode = 0;
        triggerMode.parameter = 0;
        // A source of 7 means software trigger
        triggerMode.source = 7;

        // Set camera triggering mode
        error = cam.SetTriggerMode(&triggerMode);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Power on the camera
        const unsigned int k_cameraPower = 0x610;
        const unsigned int k_powerVal = 0x80000000;
        error = cam.WriteRegister(k_cameraPower, k_powerVal);

        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Poll to ensure camera is ready
        bool retVal = PollForTriggerReady(&cam);
        if (!retVal)
        {
          PrintError(error);
          return false;
        }

        // Set camera configuration: region of 24 x 480 pixels
        // greyscale image mode
        fmt7ImageSettings.width = col_size;
        fmt7ImageSettings.height = row_size;
        fmt7ImageSettings.mode = FlyCapture2::MODE_0;
        fmt7ImageSettings.offsetX = 312;
        fmt7ImageSettings.offsetY = 0;
        fmt7ImageSettings.pixelFormat = FlyCapture2::PIXEL_FORMAT_MONO8;

        // Validate Format 7 settings
        bool valid;
        error = cam.ValidateFormat7Settings(&fmt7ImageSettings, &valid, &fmt7PacketInfo);
        unsigned int num_bytes = fmt7PacketInfo.recommendedBytesPerPacket;

        // Set Format 7 (partial image mode) settings
        error = cam.SetFormat7Configuration(&fmt7ImageSettings, num_bytes);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Start capturing images
        error = cam.StartCapture();
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        if (!CheckSoftwareTriggerPresence(&cam))
        {
          err("SOFT_ASYNC_TRIGGER not implemented on this camera! Stopping application\n");
          return false;
        }

        error = cam.StartCapture();

        // Warm up - necessary to get decent images.
        // See Flea2 Technical Ref.: camera will typically not
        // send first 2 images acquired after power-up
        // It may therefore take several (n) images to get
        // satisfactory image, where n is undefined
        for (int i = 0; i < 30; i++)
        {
          // Check that the trigger is ready
          PollForTriggerReady(&cam);

          // Fire software trigger
          FireSoftwareTrigger(&cam);

          FlyCapture2::Image im;

          // Retrieve image before starting main loop
          FlyCapture2::Error error2 = cam.RetrieveBuffer(&im);
          if (error2 != FlyCapture2::PGRERROR_OK)
          {
            PrintError(error2);
            return false;
          }
        }

        if (!CheckSoftwareTriggerPresence(&cam))
        {
          err("SOFT_ASYNC_TRIGGER not implemented on this camera! Stopping application\n");
          return false;
        }

        // Grab images acc. to number of hw/sw trigger events
        for (int i = 0; i < 25; i++)
        {
          GrabImages(&cam, img, img_bw, i);
        }

        // Turn trigger mode off.
        triggerMode.onOff = false;
        error = cam.SetTriggerMode(&triggerMode);
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        war("\nFinished grabbing images\n");

        // Stop capturing images error = cam.StopCapture();
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        // Disconnect the camera
        error = cam.Disconnect();
        if (error != FlyCapture2::PGRERROR_OK)
        {
          PrintError(error);
          return false;
        }

        ReleaseImage(img, img_bw, storage);
        return true;
      }

      // Print error trace
      void PrintError( FlyCapture2::Error error2 )
      {
          error2.PrintErrorTrace();
      }

      // Check for the presence of software trigger
      bool CheckSoftwareTriggerPresence( FlyCapture2::Camera* pCam )
      {
          const unsigned int k_triggerInq = 0x530;
          FlyCapture2::Error error2;
          unsigned int regVal = 0;
          error2 = pCam->ReadRegister( k_triggerInq, &regVal );
          if ( error2 != FlyCapture2::PGRERROR_OK )
          {
              // TODO
          }

          if( ( regVal & 0x10000 ) != 0x10000 )
          {
              return false;
          }

          return true;
      }

      // Start polling for trigger ready
      bool PollForTriggerReady( FlyCapture2::Camera* pCam )
      {
          unsigned int k_softwareTrigger = 0x62C;
          FlyCapture2::Error error2;
          unsigned int regVal = 0;

          do
          {
              error2 = pCam->ReadRegister( k_softwareTrigger, &regVal );

              if ( error2!= FlyCapture2::PGRERROR_OK )
              {
                  // TODO
              }
          } while ( (regVal >> 31) != 0 );

          return true;
      }

      // Launch the software trigger event
      bool FireSoftwareTrigger( FlyCapture2::Camera* pCam )
      {
          const unsigned int k_softwareTrigger = 0x62C;
          const unsigned int k_fireVal = 0x80000000;
          FlyCapture2::Error error2;

          error2 = pCam->WriteRegister( k_softwareTrigger, k_fireVal );

          if ( error2 != FlyCapture2::PGRERROR_OK )
          {
              // TODO
          }

          return true;
      }

      // Tidy up memory allocated for images etc
      void ReleaseImage( IplImage* pimg, IplImage* pimg_bw, CvMemStorage* pstorage )
      {
          cvReleaseImage( &pimg );
          cvReleaseImage( &pimg_bw );
          cvClearMemStorage( pstorage );
      }

      // Grab camera grayscale image and convert into
      // an OpenCV image
      void GrabImages( FlyCapture2::Camera* pcam, IplImage* pimg, IplImage* pimg_bw, int cnt )
      {
        FlyCapture2::Image image;

          #ifdef SOFTWARE_TRIGGER_CAMERA

          // Check that the trigger is ready
          PollForTriggerReady( pcam );

          printf( "Press Enter to initiate software trigger.\n" );

          getchar();

          // Fire software trigger
          bool retVal = FireSoftwareTrigger( pcam );

          if ( !retVal )
          {
              // TODO.
          }

          #endif

          // Retrieve image before starting main loop
          FlyCapture2::Error error2 = pcam->RetrieveBuffer( &image );

          if ( error2 != FlyCapture2::PGRERROR_OK )
          {
              // TODO.
          }

          // Copy FlyCapture2 image into OpenCV struct
          memcpy( pimg->imageData,
          image.GetData(),
          data_size );

          char buffer[ 20 ];
          sprintf( buffer, "%d", cnt );


          std::string mess_ori = "original_";
          mess_ori.append( buffer );
          mess_ori.append( ".bmp" );
          // Save the bitmap to file
          cvSaveImage( mess_ori.c_str() , pimg );


          // Threshold to convert image into binary (B&W)
          cvThreshold( pimg,    // source image
                       pimg_bw, // destination image
                       145,     // threhold val.
                       255,     // max. val
                       CV_THRESH_BINARY ); // binary type );

          // Save the bitmap to file
          std::string mess = "B_W_";
          mess.append( buffer );
          mess.append( ".bmp" );
          cvSaveImage( mess.c_str(), pimg_bw );
      }

      void
      onMain(void)
      {
        Delay::wait(4);
        setEntityState(IMC::EntityState::ESTA_NORMAL, "LED MODE: "+m_args.led_type);
        updateStrobe();
        try
        {
          if(!capture())
            err("erro software");
        }
        catch(...)
        {
          err("ERRO dump");
        }
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
