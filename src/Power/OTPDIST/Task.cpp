//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Driver.hpp"
#include "Parser.hpp"
#include "Commands.hpp"

namespace Power
{
  namespace OTPDIST
  {
    using DUNE_NAMESPACES;

    static const float c_delay_startup = 4.0f;
    static const uint8_t c_max_channels = 18;
    static const uint8_t c_channel_offset_id = 0x30;
    static const std::string c_nc_channels = "NC/";
    static const std::string c_inv_channels = "INV/";

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      //! Number of attempts before error
      int number_attempts;
      //! Channels names
      std::string channels_names[c_max_channels];
      //! Channels states
      bool channels_states[c_max_channels];
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Task arguments
      Arguments m_args;
      //! Driver of OTPDIST
      DriverOTPDIST* m_driver;
      //! Parser for messages received
      ParserOTPDIST* m_parser;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Count for attempts
      int m_count_attempts;
      //! Flag to control reset of board
      bool m_is_first_reset;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .maximumValue("4.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Number of attempts before error", m_args.number_attempts)
        .defaultValue("5")
        .minimumValue("1")
        .maximumValue("10")
        .description("Number of attempts before error.");

        // Extract name and state of channels
        std::string option;
        for (uint8_t i = 1; i <= c_max_channels; ++i)
        {
          option = String::str("Channel %u Name", i);
          param(option, m_args.channels_names[i - 1])
          .defaultValue("")
          .description("Channel Name");

          option = String::str("Channel %u Activate", i);
          param(option, m_args.channels_states[i - 1])
          .defaultValue("")
          .description("Activate Channel");
        }

        // Register handler routines.
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        /*for (uint8_t i = 0; i < m_args.number_cell; ++i)
        {

          if (m_args.cell_elabels[i].empty())
            continue;

          m_volt[i + 1].setSourceEntity(getEid(m_args.cell_elabels[i]));
        }

        m_bat_volt.setSourceEntity(getEid("Batteries"));
        m_amp[1].setSourceEntity(getEid(m_args.rcap_elabel));
        m_amp[2].setSourceEntity(getEid(m_args.fcap_elabel));*/
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }

        return eid;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
          m_poll.add(*m_uart);
          m_parser = new ParserOTPDIST(this);
          m_driver = new DriverOTPDIST(this, m_uart, m_poll, m_parser);
          m_count_attempts = 0;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_driver->stopAcquisition();
        m_uart->flush();
        Delay::wait(c_delay_startup);
        initBoard(false);
        m_is_first_reset = true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_driver);
          Memory::clear(m_uart);
        }
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        dispatchPowerChannelStates();
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        spew("name: %s", msg->name.c_str());
        spew("op %d", msg->op);
        spew("time: %f", msg->sched_time);
      }

      void
      dispatchPowerChannelStates(void)
      {
        IMC::PowerChannelState msg;
        for(int i = 0; i < c_max_channels; i++)
        {
          if (m_args.channels_names[i].find(c_nc_channels) == std::string::npos)
          {
            if(m_args.channels_states[i])
            {
              msg.name = m_args.channels_names[i];
              msg.state = IMC::PowerChannelState::PCS_ON;
              if (m_args.channels_names[i].find(c_inv_channels) == std::string::npos)
                dispatch(msg);
            }
            else
            {
              msg.name = m_args.channels_names[i];
              msg.state = IMC::PowerChannelState::PCS_OFF;
              if (m_args.channels_names[i].find(c_inv_channels) == std::string::npos)
                dispatch(msg);
            }
          }
        }
      }

      void
      initBoard(bool noRestart)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
        if (!m_driver->getFirmwareVersion())
        {
          war(DTR("failed to get firmware version"));
          m_driver->resetBoard();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          inf("Firmware Version: %s", m_parser->getFirmwareVersionInfo().c_str());
        }

        bool all_set_channel = true;
        IMC::PowerChannelState msg;
        for(int i = 0; i < c_max_channels; i++)
        {
          if (m_args.channels_names[i].find(c_nc_channels) == std::string::npos)
          {
            if(m_args.channels_states[i])
            {
              spew("turn on %s", m_args.channels_names[i].c_str());
              if(!m_driver->setPowerChannelState(i + c_channel_offset_id, OTP_TURN_ON))
              {
                war("Fail setting power channel state : %d", i + 1);
                all_set_channel = false;
              }
              else
              {
                msg.name = m_args.channels_names[i];
                msg.state = IMC::PowerChannelState::PCS_ON;
                if (m_args.channels_names[i].find(c_inv_channels) == std::string::npos)
                  dispatch(msg);
              }
            }
            else
            {
              spew("turn off %s", m_args.channels_names[i].c_str());
              if(!m_driver->setPowerChannelState(i + c_channel_offset_id, OTP_TURN_OFF))
              {
                war("Fail setting power channel state : %d", i + 1);
                all_set_channel = false;
              }
              else
              {
                msg.name = m_args.channels_names[i];
                msg.state = IMC::PowerChannelState::PCS_OFF;
                if (m_args.channels_names[i].find(c_inv_channels) == std::string::npos)
                  dispatch(msg);
              }
            }
          }
          else
          {
            spew("jumping %s - %d", m_args.channels_names[i].c_str(), i+1);
            spew("turn off %s", m_args.channels_names[i].c_str());
            if(!m_driver->setPowerChannelState(i + c_channel_offset_id, OTP_TURN_OFF))
            {
              war("Fail setting power channel state : %d", i + 1);
              all_set_channel = false;
            }
          }
        }

        // Reset board if fail setting state of one power channel
        if(!all_set_channel)
        {
          m_driver->resetBoard();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }

        debug("Init and Start OK");
        m_wdog.setTop(m_args.input_timeout);
        m_wdog.reset();
      }

      void
      dispatchData(void)
      {
        /*m_driver->resetStateNewData();

        m_volt[0].setTimeStamp(m_tstamp);
        m_volt[0].value = m_driver->m_batManData.voltage;
        dispatch(m_volt[0], DF_KEEP_TIME);

        m_bat_volt.setTimeStamp(m_tstamp);
        m_bat_volt.value = m_driver->m_batManData.voltage;
        dispatch(m_bat_volt, DF_KEEP_TIME);

        m_amp[0].setTimeStamp(m_tstamp);
        m_amp[0].value = m_driver->m_batManData.current;
        dispatch(m_amp[0], DF_KEEP_TIME);

        for (uint8_t id = 1; id <= m_args.number_cell; ++id)
        {
          m_volt[id].setTimeStamp(m_tstamp);
          m_volt[id].value = m_driver->m_batManData.cell_volt[id - 1];
          dispatch(m_volt[id], DF_KEEP_TIME);
        }

        m_tmp.setTimeStamp(m_tstamp);
        m_tmp.value = m_driver->m_batManData.temperature;
        dispatch(m_tmp, DF_KEEP_TIME);

        m_amp[1].setTimeStamp(m_tstamp);
        m_amp[1].value = m_driver->m_batManData.r_cap;
        dispatch(m_amp[1], DF_KEEP_TIME);

        m_amp[2].setTimeStamp(m_tstamp);
        m_amp[2].value = m_driver->m_batManData.f_cap;
        dispatch(m_amp[2], DF_KEEP_TIME);

        if(m_args.dispatch_fuel_level)
        {
          m_fuel.setTimeStamp(m_tstamp);
          m_fuel.value = (m_driver->m_batManData.r_cap * 100) / m_driver->m_batManData.f_cap;
          m_fuel.confidence = 100;
          dispatch(m_fuel, DF_KEEP_TIME);
        }

        if (m_fuel.value < m_args.err_lvl && m_driver->m_batManData.voltage < m_args.err_volt_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "fuel reserve - ETF: %s", minutesToTime(m_driver->m_batManData.time_full).c_str());
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(m_bufer_entity)));
          }
          else if((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "fuel reserve - ETD: %s", minutesToTime(m_driver->m_batManData.time_empty).c_str());
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_FUEL_RESERVE);
          }
        }
        else if (m_fuel.value < m_args.err_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "fuel warming - ETF: %s", minutesToTime(m_driver->m_batManData.time_full).c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else if((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "fuel warming - ETD: %s", minutesToTime(m_driver->m_batManData.time_empty).c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_RESERVE);
          }
        }
        else if (m_fuel.value < m_args.war_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if (m_driver->m_batManData.time_full > 0)
          {
            std::sprintf(m_bufer_entity, "fuel running low - ETF: %s", minutesToTime(m_driver->m_batManData.time_full).c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else if ((m_driver->m_batManData.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "fuel running low - ETD: %s", minutesToTime(m_driver->m_batManData.time_empty).c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_LOW);
          }
        }
        else
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));

          if (m_driver->m_batManData.time_full > 0)
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETF: %s",
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap,
                         minutesToTime(m_driver->m_batManData.time_full).c_str());
          else if (m_driver->m_batManData.time_empty > 0)
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETD: %s",
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap,
                         minutesToTime(m_driver->m_batManData.time_empty).c_str());
          else
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah",
                         m_driver->m_batManData.health,
                         m_driver->m_batManData.voltage,
                         m_driver->m_batManData.r_cap);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
        }*/
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);

          if (m_wdog.overflow())
          {
            if (m_count_attempts >= m_args.number_attempts)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
            }

            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
            war(DTR("trying connecting to board"));
            m_count_attempts++;
            if (m_is_first_reset)
            {
              //m_driver->sendCommandNoRsp("@RESET,*");
              m_is_first_reset = false;
            }
            m_uart->flush();
            initBoard(true);
          }

          //if (!Poll::poll(*m_uart, m_args.input_timeout))
          //  continue;

          if(m_driver->haveNewData())
          {
            //m_tstamp = Clock::getSinceEpoch();
            dispatchData();
            m_count_attempts = 0;
            m_is_first_reset = true;
            m_wdog.reset();
          }
        }
        debug("Sending stop to OTPDIST");
        m_driver->stopAcquisition();
      }
    };
  }
}

DUNE_TASK
