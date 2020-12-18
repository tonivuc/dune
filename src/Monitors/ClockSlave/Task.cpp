//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves, based on task Monitors/Clock                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <ctime>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! %Clock is responsible to monitor system's hardware
  //! clock. This task uses valid GPS's UTC time and if
  //! hardware clock is out of synch for more than a
  //! configurable amount of time, the system clock
  //! is corrected once in a task lifetime at startup.
  //!
  //! This %Task is capable of controlling the following
  //! parameters:
  //!  - <em>Minimum GPS Fixes</em>: Minimum number of
  //!    GPS fixes required to compute the clock offset.
  //!  - <em>Maximum Clock Offset</em>: If the clock
  //!    offset is above this value the clock will be
  //!    synchronized.
  //!  - <em>Synchronization Timeout</em>: At boot
  //!    the system tries to synchronize clocks. It
  //!    continues unsynched after timeout.
  //!  - <em>Hardware Clock Synchronization Command</em>:
  //!    System command to execute everytime the clock
  //!    is synchronized.
  //!
  //! @author Pedro Gonçalves
  namespace ClockSlave
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      unsigned min_gps_fixes;
      double max_boot_tout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Moving average of time difference.
      MovingAverage<double> m_offs;
      //! Task arguments.
      Arguments m_args;
      //! Count of GPS fixes since last sync.
      unsigned m_gps_fixes;
      //! Synchronization deadline.
      Counter<double> m_sync_deadline;
      //! Time of last GPS fix.
      bool m_clock_synched;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_offs(5),
        m_gps_fixes(0),
        m_clock_synched(false)
      {
        param("Minimum GPS Fixes", m_args.min_gps_fixes)
        .defaultValue("10")
        .minimumValue("0")
        .description("Minimum number of GPS fixes required to compute the clock offset");

        param("Synchronization Timeout", m_args.max_boot_tout)
        .units(Units::Second)
        .defaultValue("60")
        .minimumValue("0")
        .description("At boot the system tries to synchronize clocks. It continues unsynched after timeout");

        // Initialize entity states.
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_SYNCING);

        // Register listeners.
        bind<IMC::GpsFix>(this);
      }

      void
      onResourceInitialization(void)
      {
        m_sync_deadline.setTop(m_args.max_boot_tout);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        // Return if clock is already synched.
        if (m_clock_synched)
          return;

        if (!((msg->validity & IMC::GpsFix::GFV_VALID_DATE)
              && (msg->validity & IMC::GpsFix::GFV_VALID_TIME)))
          return;

        ++m_gps_fixes;

        // System clock is corrected once in a task lifetime.
        if (m_gps_fixes == m_args.min_gps_fixes)
        {
          war(DTR("Synchronizing CPU clock."));
          int day= msg->utc_day;
          int mon = msg->utc_month - 1;
          int year = msg->utc_year;
          int hour = (int)(msg->utc_time / 3600);
          int min = (int)(((msg->utc_time / 3600.0) - hour) * 60);
          int sec = (int)Math::round(((((msg->utc_time / 3600.0) - hour) * 60.0) - min) * 60.0);
          char time_cmd_text[32];
          char date_cmd_text[32];
          std::sprintf(date_cmd_text, "date -s %d-%d-%d", year, mon, day);
          std::sprintf(time_cmd_text, "date -s %d:%d:%d", hour, min, sec);
          if (std::system(date_cmd_text) == 0 && std::system(time_cmd_text) == 0)
          {
            war(DTR("CPU clock sync to %s at %s"), time_cmd_text, date_cmd_text);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            IMC::LoggingControl lc;
            lc.op = IMC::LoggingControl::COP_REQUEST_START;
            dispatch(lc);
          }
          else
          {
            err(DTR("failed to execute clock sync command"));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NOT_SYNCHED);
          }
          m_clock_synched = true;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_sync_deadline.overflow() && getEntityState() == IMC::EntityState::ESTA_BOOT)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NOT_SYNCHED);
        }
      }
    };
  }
}

DUNE_TASK
