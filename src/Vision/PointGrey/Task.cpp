//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
#include <string>
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <stdio.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//FlyCapture headers
#include <flycapture/FlyCapture2.h>

//Exiv2 headers
#include <exiv2/exiv2.hpp>

//Local header
#include <Vision/PointGrey/SaveImage.hpp>

namespace Vision
{
  namespace PointGrey
  {
    using DUNE_NAMESPACES;

    static const int c_number_max_thread = 15;
    static const int c_number_max_fps = 5;
    static const float c_time_to_release_cached_ram = 300.0;
    static const float c_time_to_release_camera = 3.0;
    static const float c_time_to_update_cnt_info = 10.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Power channel of strobe
      std::string channel_strobe;
      //! LED scheme.
      std::string led_type;
      //! Copyright Image
      std::string copyright;
      //! Lens Model
      std::string lens_model;
      //! Lens Maker
      std::string lens_maker;
      //! Saved Image Dir
      std::string save_image_dir;
      //! Number of frames/s
      int number_fs;
      //! Split photos by folder
      bool split_photos;
      //! Number of photos to folder
      unsigned int number_photos;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters
      Arguments m_args;
      //! Camera object
      FlyCapture2::Camera m_camera;
      //! Structure of Camera object
      FlyCapture2::CameraInfo m_camInfo;
      //! The Error object of error that is returned
      FlyCapture2::Error m_error;
      //! Buffer raw image from a camera
      FlyCapture2::Image m_rawImage;
      //! Buffer for rgb;
      FlyCapture2::Image m_rgbImage;
      //!
      FlyCapture2::BusManager m_busMgr;
      //!
      FlyCapture2::PGRGuid m_guid;
      //! Latitude deg
      int m_lat_deg;
      //! Latitude min
      int m_lat_min;
      //! Latitude sec
      double m_lat_sec;
      //! Longitude deg
      int m_lon_deg;
      //! Longitude min
      int m_lon_min;
      //! Longitude sec
      double m_lon_sec;
      //! Buffer for exif timestamp
      char m_text_exif_timestamp[16];
      //! Buffer to backup epoch
      std::string m_back_epoch;
      //! Buffer to backup time
      std::string m_back_time;
      //! Buffer for path to save image
      std::string m_path_image;
      //! Buffer for backup of path to save image
      std::string m_back_path_image;
      //! Path to save image
      Path m_log_dir;
      //! Timer to control fps
      Time::Counter<float> m_cnt_fps;
      //! Timer to control the cached ram
      Time::Counter<float> m_clean_cached_ram;
      //! Timer to control the refresh of captured frames
      Time::Counter<float> m_update_cnt_frames;
      //! Id thread
      int m_thread_cnt;
      //! Number of frames captured
      long unsigned int m_frame_cnt;
      //! Number of frames lost
      long unsigned int m_frame_lost_cnt;
      //! Clase/thread to save image/exif data
      SaveImage *m_save[c_number_max_thread];
      //! Buffer for the note comment of user
      std::string m_note_comment;
      //! Number of photos in folder
      unsigned int m_cnt_photos_by_folder;
      //! Number of folder
      unsigned m_folder_number;
      //! Bufer for name log
      std::string m_log_name;
      //! Flag to control capture of image
      bool m_is_to_capture;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_log_dir(ctx.dir_log)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Power Channel - Strobe", m_args.channel_strobe)
        .description("Power Channel of Strobe.");

        param("Led Mode", m_args.led_type)
    	  .description("Led type mode.");

        param("Copyright", m_args.copyright)
        .description("Copyright of Image.");

        param("Lens Model", m_args.lens_model)
        .description("Lens Model of camera.");

        param("Lens Make", m_args.lens_maker)
        .description("Lens builder/maker.");

        param("Saved Images Dir", m_args.save_image_dir)
        .defaultValue("Photos")
        .description("Saved Images Dir.");

        param("Number Frames/s", m_args.number_fs)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("4")
        .minimumValue("1")
        .maximumValue("5")
        .description("Number Frames/s.");

        param("Split Photos", m_args.split_photos)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("true")
        .description("Split photos by folder.");

        param("Number of photos to divide", m_args.number_photos)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("1000")
        .minimumValue("500")
        .maximumValue("3000")
        .description("Split photos by folder.");

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
      }

      void
      onUpdateParameters(void)
      {
      }

      void
      onResourceInitialization(void)
      {
        set_cpu_governor();

        if(m_args.number_fs > 0 && m_args.number_fs <= c_number_max_fps)
          m_cnt_fps.setTop((1.0/m_args.number_fs));
        else
          m_cnt_fps.setTop(0.25);

        if(m_args.number_photos < 500 && m_args.split_photos)
        {
          war("Number of photos by folder is to small (mim: 500)");
          war("Setting Number of photos by folder to default (1000)");
          m_args.number_photos = 1000;
        }
        else if(m_args.number_photos > 3000 && m_args.split_photos)
        {
          war("Number of photos by folder is to high (max: 3000)");
          war("Setting Number of photos by folder to default (1000)");
          m_args.number_photos = 1000;
        }

        m_thread_cnt = 0;
        m_frame_cnt = 0;
        m_frame_lost_cnt = 0;
        m_cnt_photos_by_folder = 0;
        m_folder_number = 0;
        m_is_to_capture = false;

        char text[8];
        for(int i = 0; i < c_number_max_thread; i++)
        {
          sprintf(text, "thr%d", i);
          m_save[i] = new SaveImage(this, text);
          m_save[i]->start();
        }

        m_clean_cached_ram.setTop(c_time_to_release_cached_ram);
        m_update_cnt_frames.setTop(c_time_to_update_cnt_info);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceRelease(void)
      {
        m_is_to_capture = false;
        Delay::wait(c_time_to_release_camera);

        for(int i = 0; i < c_number_max_thread; i++)
        {
          if (m_save[i] != NULL)
          {
            m_save[i]->stopAndJoin();
            delete m_save[i];
            m_save[i] = NULL;
          }
        }

        if(m_camera.IsConnected())
        {
          m_error = m_camera.StopCapture();
          if ( m_error != FlyCapture2::PGRERROR_OK )
            inf("Erro stopping camera capture: %s , already stop?", m_save[m_thread_cnt]->getNameError(m_error).c_str());

          m_error = m_camera.Disconnect();
          if ( m_error != FlyCapture2::PGRERROR_OK )
            inf("Erro disconnecting camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {
          m_frame_cnt = 0;
          m_frame_lost_cnt = 0;
          m_cnt_photos_by_folder = 0;
          m_folder_number = 0;
          if(m_args.split_photos)
            m_log_dir = m_ctx.dir_log / msg->name / m_args.save_image_dir / String::str("%06u", m_folder_number);
          else
            m_log_dir = m_ctx.dir_log / msg->name / m_args.save_image_dir;

          m_back_path_image = m_log_dir.c_str();
          m_log_dir.create();
          m_log_name = msg->name;
        }
      }

      //! Consume message IMC::GpsFix
      void
      consume(const IMC::EstimatedState* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        Angles::convertDecimalToDMS(Angles::degrees(msg->lat), m_lat_deg, m_lat_min, m_lat_sec);
        Angles::convertDecimalToDMS(Angles::degrees(msg->lon), m_lon_deg, m_lon_min, m_lon_sec);
        m_note_comment = "Depth: "+to_string(msg->depth)+" m # Altitude: "+to_string(msg->alt)+" m";
      }

      void
      onRequestActivation(void)
      {
        inf("received activation request");
        activate();
      }

      void
      onRequestDeactivation(void)
      {
        inf("received deactivation request");
        deactivate();
      }

      void
      onActivation(void)
      {
        inf("on Activation");
        m_frame_cnt = 0;
        m_frame_lost_cnt = 0;
        m_cnt_photos_by_folder = 0;
        m_folder_number = 0;
        std::system("sync");
        releaseRamCached();
        updateStrobe();
        try
        {
          if(!setUpCamera())
          {
            onRequestDeactivation();
            throw RestartNeeded("Cannot detect camera", 10);
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL, "Led Mode - "+m_args.led_type+" # Fps: "+to_string(m_args.number_fs));
          m_thread_cnt = 0;
          m_cnt_fps.reset();
        }
        catch(...)
        {
          onRequestDeactivation();
          throw RestartNeeded("Erro Flycapture API", 10);
        }
        m_is_to_capture = true;
        inf("Starting Capture.");
      }

      void
      onDeactivation(void)
      {
        inf("on Deactivation");
        std::system("sync");
        m_is_to_capture = false;
        m_error = m_camera.StopCapture();
        if ( m_error != FlyCapture2::PGRERROR_OK )
          war("Erro stopping camera capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      int
      set_cpu_governor(void)
      {
        char buffer[16];
        char governor[16];
        std::string result = "";
        FILE* pipe = popen("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", "r");
        if (!pipe)
        {
          war("popen() failed!");
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
        else
        {
          std::memset(&buffer, '\0', sizeof(buffer));
          try
          {
            while (!feof(pipe))
            {
              if (fgets(buffer, sizeof(buffer), pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            pclose(pipe);
            throw;
          }
          pclose(pipe);
          std::sscanf(buffer, "%s", governor);
          if( std::strcmp(governor, "ondemand") == 0)
          {
            inf("CPU governor is already ondemand");
          }
          else
          {
            war("CPU governor is not in ondemand, setting to ondemand");
            return std::system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
          }
        }

        return -1;
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

      // Check for the presence of feature
      bool
      checkValueOfCamera( FlyCapture2::Camera* pCam , unsigned int feature, bool isFeature)
      {
        FlyCapture2::Error error2;
        unsigned int regVal = 0;
        error2 = pCam->ReadRegister( feature, &regVal );
        if ( error2 != FlyCapture2::PGRERROR_OK )
        {
          war("erro reading feature: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        if(isFeature)
        {
          if( ( regVal & 0x10000 ) != 0x10000 )
          {
            war("Feature not present.");
            inf("Value: %u", regVal);
            return false;
          }
          else
          {
            war("Feature present.");
            inf("Value: %u", regVal);
          }
        }
        else
        {
          inf("Value: %u", regVal);
        }

        return true;
      }

      void
      getInfoCamera(void)
      {
        debug("Vendor Name: %s", m_camInfo.vendorName);
        debug("Model Name: %s", m_camInfo.modelName);
        debug("Serial Number: %d", m_camInfo.serialNumber);
        debug("Sensor Info: %s", m_camInfo.sensorInfo);
        debug("Sensor Resolution: %s", m_camInfo.sensorResolution);
        debug("Firmware Version: %s", m_camInfo.firmwareVersion);
        debug("copyright: %s", m_args.copyright.c_str());
        debug("Lens Model: %s", m_args.lens_model.c_str());
        debug("Lens Maker: %s", m_args.lens_maker.c_str());
      }

      bool
      setUpCamera(void)
      {
        inf("Initialization of Camera");
        // Get Flea2 camera
        m_error = m_busMgr.GetCameraFromIndex( 0, &m_guid );

        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to get camera index: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }
        // Connect the camera
        m_error = m_camera.Connect( &m_guid );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to connect to camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        // Get the camera info and print it out
        m_error = m_camera.GetCameraInfo( &m_camInfo );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to get camera info from camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        m_error = m_camera.StartCapture();
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to start image capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        //const unsigned int k_triggerInq = 0x530;
        //checkValueOfCamera(&camera, 0x530, true);

        //set IO1 (4) Output
        /*error = camera.WriteRegister( 0x1110, 0x80080001 );
                if ( error != FlyCapture2::PGRERROR_OK )
                  err("erro writing");*/
        /*m_error = m_camera.WriteRegister( 0x1120, 0x80080001 );
        if ( m_error != FlyCapture2::PGRERROR_OK )
          err("erro writing");*/

        //current gpio config
        /*checkValueOfCamera(&camera, 0x1110, false);
                checkValueOfCamera(&camera, 0x1120, false);
                checkValueOfCamera(&camera, 0x11F8, false);*/

        getInfoCamera();
        inf("Camera ready.");
        return true;
      }

      bool
      getImage(void)
      {
        bool result = false;
        saveInfoExif();
        try
        {
          m_error = m_camera.RetrieveBuffer( &m_rawImage );
        }
        catch (...)
        {
          war("erro RetrieveBuffer");
          return false;
        }
        if ( m_error != FlyCapture2::PGRERROR_OK)
        {
          if(m_is_to_capture)
            war("capture error: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

          return false;
        }

        // convert to rgb
        try
        {
          m_error = m_rawImage.Convert( FlyCapture2::PIXEL_FORMAT_BGR, &m_rgbImage );
        }
        catch(...)
        {
          war("erro Convert");
          return false;
        }
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          war("convert error: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        m_path_image = m_back_path_image.c_str();
        m_path_image.append("/");
        m_path_image.append(m_back_epoch);
        m_path_image.append(".jpg");

        debug("Size Image Capture: %u x %u", m_rgbImage.GetCols(), m_rgbImage.GetRows());
        debug("Path: %s", m_path_image.c_str());

        m_thread_cnt = send_image_thread(m_thread_cnt);
        result = true;

        if(m_thread_cnt >= c_number_max_thread)
          m_thread_cnt = 0;

        m_rgbImage.ReleaseBuffer();
        m_rawImage.ReleaseBuffer();

        return result;
      }

      int
      send_image_thread(int cnt_thread)
      {
        int pointer_cnt_thread = cnt_thread;
        bool jump_over = false;
        bool result_thread;
        while(!jump_over && !stopping())
        {
          try
          {
            result_thread = m_save[pointer_cnt_thread]->saveNewImage(m_rgbImage, m_path_image);
          }
          catch(...)
          {
            war("erro thread");
          }

          if(result_thread)
          {
            pointer_cnt_thread++;
            jump_over = true;
            m_frame_cnt++;
            return pointer_cnt_thread;
          }
          else
          {
            debug("thread %d is working, jump to other", pointer_cnt_thread);
            pointer_cnt_thread++;
            if(pointer_cnt_thread >= c_number_max_thread)
              pointer_cnt_thread = 0;

            if(cnt_thread == pointer_cnt_thread)
            {
              pointer_cnt_thread++;
              inf("Erro saving image, all thread working");
              m_frame_lost_cnt++;
              jump_over = true;
              return pointer_cnt_thread;
            }
          }
        }

        return pointer_cnt_thread;
      }

      int
      releaseRamCached(void)
      {
        debug("Releasing cache ram.");
        return std::system("echo 1 > /proc/sys/vm/drop_caches");
      }

      void
      saveInfoExif(void)
      {
        std::memset(&m_text_exif_timestamp, '\0', sizeof(m_text_exif_timestamp));
        std::sprintf(m_text_exif_timestamp, "%0.4f", Clock::getSinceEpoch());
        m_back_epoch = m_text_exif_timestamp;

        m_save[m_thread_cnt]->m_exif_data.lat_deg = m_lat_deg;
        m_save[m_thread_cnt]->m_exif_data.lat_min = m_lat_min;
        m_save[m_thread_cnt]->m_exif_data.lat_sec = m_lat_sec;
        m_save[m_thread_cnt]->m_exif_data.lon_deg = m_lon_deg;
        m_save[m_thread_cnt]->m_exif_data.lon_min = m_lon_min;
        m_save[m_thread_cnt]->m_exif_data.lon_sec = m_lon_sec;
        m_save[m_thread_cnt]->m_exif_data.date_time_original = Time::Format::getTimeDate().c_str();
        m_save[m_thread_cnt]->m_exif_data.date_time_digitized = m_back_epoch.c_str();
        m_save[m_thread_cnt]->m_exif_data.make = m_camInfo.vendorName;
        m_save[m_thread_cnt]->m_exif_data.model = m_camInfo.modelName;
        m_save[m_thread_cnt]->m_exif_data.lens_make = m_args.lens_maker.c_str();
        m_save[m_thread_cnt]->m_exif_data.lens_model = m_args.lens_model.c_str();
        m_save[m_thread_cnt]->m_exif_data.copyright = m_args.copyright.c_str();
        m_save[m_thread_cnt]->m_exif_data.artist = getSystemName();
        m_save[m_thread_cnt]->m_exif_data.notes = m_note_comment.c_str();
      }

      template <class T>
      inline std::string to_string (const T& t)
      {
          std::stringstream ss;
          ss << t;
          return ss.str();
      }

      void
      triger_frame(void)
      {
        if(!getImage() && m_is_to_capture)
        {
          war("Restarting camera...");
          if(m_camera.IsConnected())
          {
            m_error = m_camera.StopCapture();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              war("Erro stopping camera capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

            m_error = m_camera.Disconnect();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              war("Erro disconnecting camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          }
          if (isActive())
            setUpCamera();
        }
        else
        {
          if(m_args.split_photos)
          {
            m_cnt_photos_by_folder++;
            if(m_cnt_photos_by_folder >= m_args.number_photos)
            {
              m_cnt_photos_by_folder = 0;
              m_folder_number++;
              m_log_dir = m_ctx.dir_log / m_log_name / m_args.save_image_dir / String::str("%06u", m_folder_number);
              m_back_path_image = m_log_dir.c_str();
              m_log_dir.create();
            }
          }
        }

        debug("Capture: thr %d", m_thread_cnt);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            consumeMessages();
            if(m_cnt_fps.overflow())
            {
              m_cnt_fps.reset();
              triger_frame();

            }
            else if(m_clean_cached_ram.overflow())
            {
              m_clean_cached_ram.reset();
              releaseRamCached();
            }
            else if(m_update_cnt_frames.overflow())
            {
              m_update_cnt_frames.reset();
              setEntityState(IMC::EntityState::ESTA_NORMAL, m_args.led_type+" # Fps: "+to_string(m_args.number_fs)+" # "+to_string(m_frame_cnt)+" - "+to_string(m_frame_lost_cnt));
            }
          }
          else
          {
            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
