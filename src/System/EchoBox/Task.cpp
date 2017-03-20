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
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                   *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace System
{
  namespace EchoBox
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Change mode of task (true - echobox, false - other system).
      bool server_mode;
      //! Path to config file of time
      std::string path_config_time;
      //! Number to skip in read of config file time.
      int skip_lines;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Path of config file DUNE
      Tasks::Context m_path_ctx;
      //! Path of config time file of echobox
      Path m_path_cfg;
      //! Path of log dir of system
      Path m_path_log;
      //! File of working time
      std::ifstream m_file_time;
      //! File to save info of working time
      std::ofstream m_file_log_time;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Server Mode", m_args.server_mode)
        .defaultValue("true")
        .description("Change mode of task, true - echobox, false - other system.");

        param("Path Config Time File", m_args.path_config_time)
        .defaultValue("hardware/echobox-time.ini")
        .description("Path of Config Time File");

        param("Number Lines to Skip CTF", m_args.skip_lines)
        .defaultValue("30")
        .minimumValue("0")
        .maximumValue("100")
        .description("Number Lines to Skip in config time file.");
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        Time::Delay::wait(1.0);
        m_path_log = m_path_ctx.dir_log / getSystemName() / "echobox_time_log.txt";
        m_path_cfg = m_path_ctx.dir_cfg / m_args.path_config_time;

        if(file_exist(m_path_cfg.c_str()))
        {
          if(file_exist(m_path_log.c_str()))
          {
            open_file(m_path_log.c_str(), false);
          }
          else
          {
            war("File log not exists, creating new, zero config");
            open_file(m_path_log.c_str(), false);
          }

          war("new time: %s", get_new_data_time().c_str());
          m_file_log_time.close();
        }
        else
        {
          err("Config File not exists");
          setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str("ERRO reading cfg time file"));
          throw RestartNeeded("Config File not exists", 10);
        }

        debug("CFG  %s", m_path_cfg.c_str());
        debug("LOG  %s", m_path_log.c_str());
        debug("ALL  %s", Time::Format::getTimeDate().c_str());
        debug("DATE %s", Time::Format::getDateSafe().c_str());
        debug("TIME %s", Time::Format::getTimeSafe().c_str());
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        try
        {
          m_file_time.close();
          m_file_log_time.close();
        }
        catch(...)
        {}
      }

      std::string
      get_new_data_time(void)
      {
        std::string new_data;
        std::string line;
        int number_lines_log = get_number_lines(m_path_log.c_str());
        int number_lines_cfg = get_number_lines(m_path_cfg.c_str()) - 30;

        open_file(m_path_cfg.c_str(), true);

        for(int i = 0; i < m_args.skip_lines ; i++)
          getline (m_file_time,line);

        if(number_lines_log == 0)
        {
          getline (m_file_time,line);
          m_file_log_time << line.c_str() << std::endl;
        }
        else if(number_lines_log < number_lines_cfg)
        {
          for(int i = 0; i <= number_lines_log; i++)
          {
            getline (m_file_time,line);
            if(i == number_lines_log)
              m_file_log_time << line.c_str() << std::endl;
          }
        }
        else
        {
          war("now new data in cfg file, adding clock info");
          m_file_log_time << Time::Format::getTimeDate().c_str() << std::endl;
          return Time::Format::getTimeDate().c_str();
        }

        m_file_log_time.close();

        return line;
      }

      int
      get_number_lines(std::string file_path)
      {
        int cnt_lines = 0;
        std::string line;

        m_file_time.open(file_path.c_str());
        if (m_file_time.is_open())
        {
          while ( getline (m_file_time,line) )
          {
            cnt_lines++;
          }
          m_file_time.close();
        }
        return cnt_lines;
      }

      bool
      open_file(std::string path_file, bool toRead)
      {
        if(toRead)
        {
          m_file_time.open(path_file.c_str());
          return m_file_time.is_open();
        }
        else
        {
          m_file_log_time.open(path_file.c_str(), std::ios_base::app);
          m_file_time.is_open();
        }

        return false;
      }

      bool
      file_exist(std::string file_path)
      {
        if (std::ifstream(file_path.c_str()))
          return true;
        else
          return false;

        return false;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          /*Time::Delay::wait(5.0);
          throw RestartNeeded("for test", 2);*/
        }
      }
    };
  }
}

DUNE_TASK
