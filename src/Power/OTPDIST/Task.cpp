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
    static const uint8_t c_max_power_info = 22;  //18 + 4
    static const uint8_t c_max_leak_inputs = 4;
    static const uint8_t c_max_servo_inputs = 4;
    static const uint8_t c_channel_offset_id = 0x30;
    static const std::string c_nc_channels = "NC/";
    static const std::string c_inv_channels = "INV/";
    static const float c_delay_single_frame_read = 1.0f;
    static const uint8_t c_max_values_voltage = 16;
    static const uint8_t c_max_values_current = 3;
    static const float c_delay_to_get_info_batman = 5.0f;
    static const uint8_t c_max_data_slot_batman = 8;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      float input_timeout;
      //! Delay in seconds before turn of the OTPDIST
      float delay_turn_off;
      //! Main power channel.
      std::string pwr_main;
      //! Channels names
      std::string channels_names[c_max_channels];
      //! Channels states
      bool channels_states[c_max_channels];
      //! Leaks entity labels.
      std::string leak_elabels[c_max_leak_inputs];
      //! Servor entity labels.
      std::string servo_elabels[c_max_servo_inputs];
      //! True if leak sensor is in fact a medium sensor.
      bool leak_medium[c_max_leak_inputs];
      //! Input number cell
      unsigned int number_cell;
      //! Scale conversion for A/Ah
      float scale_factor;
      //! Cell entity labels
      std::string cell_elabels[c_max_values_voltage - 1];
      //! Remaining Capacity entity label
      std::string rcap_elabel;
      //! Full Capacity entity label
      std::string fcap_elabel;
      //! State to dispatch Feul level
      bool dispatch_fuel_level;
      //! Level of battery below which a warning will be thrown.
      float war_lvl;
      //! Level of battery below which an error will be thrown.
      float err_lvl;
      //! Level of battery (VOltage) below which an error will be thrown.
      float err_volt_lvl;
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
      //! Power operation.
      IMC::PowerOperation m_pwr_op;
      //! Leak detection.
      IMC::EntityState m_leaks[c_max_leak_inputs];
      //! Watchdog for communication.
      Counter<double> m_wdog_com;
      //! Watchdog for turn off board.
      Counter<double> m_wdog_off;
      //! Watchdog for getting single read frame.
      Counter<double> m_wdog_single_read;
      //! Watchdog for getting frame of info from batman.
      Counter<double> m_wdog_batman;
      //! Power down is in progress.
      bool m_pwr_down;
      //! Flag to control message PowerDown
      bool m_send_power_down;
      //! Voltage messages
      IMC::Voltage m_volt[c_max_power_info];
      //! Current messages
      IMC::Current m_amp[c_max_power_info];
      //! Temperature message from batman
      IMC::Temperature m_tmp;
      //! Voltage message  from batman
      IMC::Voltage m_volt_batman[c_max_values_voltage];
      //! Voltage of batteries message  from batman
      IMC::Voltage m_bat_volt_batman;
      //! Current message  from batman
      IMC::Current m_amp_batman[c_max_values_current];
      //! Fuel Level message from batman
      IMC::FuelLevel m_fuel;
      //! Read timestamp.
      double m_tstamp;
      //! Buffer forEntityState
      char m_bufer_entity[128];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(0),
        m_pwr_down(false),
        m_send_power_down(false),
        m_tstamp(0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .visibility(Parameter::VISIBILITY_DEVELOPER)
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .visibility(Parameter::VISIBILITY_DEVELOPER)
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("3.0")
        .maximumValue("6.0")
        .units(Units::Second)
        .visibility(Parameter::VISIBILITY_DEVELOPER)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Delay Before Turn Off", m_args.delay_turn_off)
        .defaultValue("20")
        .minimumValue("10")
        .maximumValue("60")
        .units(Units::Second)
        .visibility(Parameter::VISIBILITY_DEVELOPER)
        .description("Amount of seconds to wait before turn off OTPDIST.");

        param("Channel Main Name", m_args.pwr_main)
        .defaultValue("System")
        .visibility(Parameter::VISIBILITY_DEVELOPER)
        .description("Name of the power channel that controls the system power");

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

        for (unsigned i = 0; i < c_max_leak_inputs; ++i)
        {
          option = String::str("Leak %u - Entity Label", i+1);
          param(option, m_args.leak_elabels[i]);
          option = String::str("Leak %u - Medium Sensor", i+1);
          param(option, m_args.leak_medium[i])
          .defaultValue("false");
        }

        for (unsigned i = 0; i < c_max_servo_inputs; ++i)
        {
          option = String::str("Servo %u - Entity Label", i+1);
          param(option, m_args.servo_elabels[i]);
        }

        param("Number of cells", m_args.number_cell)
        .defaultValue("7")
        .minimumValue("1")
        .maximumValue("15")
        .description("Number of cells to read.");

        param("Scale Factor A/Ah", m_args.scale_factor)
        .defaultValue("1")
        .description("Scale Factor A/Ah.");

        // Extract cell entity label
        for (uint8_t i = 1; i < c_max_values_voltage; ++i)
        {
          option = String::str("Cell %u - Entity Label", i);
          param(option, m_args.cell_elabels[i - 1])
          .defaultValue("")
          .description("Cell Entity Label");
        }

        param("Remaining Capacity - Entity Label", m_args.rcap_elabel)
        .defaultValue("1")
        .description("Remaining Capacity A/Ah.");

        param("Full Capacity - Entity Label", m_args.fcap_elabel)
        .defaultValue("1")
        .description("Full Capacity A/Ah.");

        param("Dispatch Fuel Level", m_args.dispatch_fuel_level)
        .defaultValue("true")
        .description("Dispatch Fuel Level.");

        param("Warning Level", m_args.war_lvl)
        .defaultValue("35.0")
        .minimumValue("20.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Level of battery below which a warning will be thrown");

        param("Error Level", m_args.err_lvl)
        .defaultValue("20.0")
        .minimumValue("1.0")
        .maximumValue("20.0")
        .units(Units::Percentage)
        .description("Level of battery below which an error will be thrown");

        param("Error Voltage Value", m_args.err_volt_lvl)
        .defaultValue("22.0")
        .minimumValue("18.0")
        .maximumValue("30.0")
        .units(Units::Volt)
        .description("Level of battery, in voltage, below which an error will be thrown");

        m_pwr_op.setDestination(getSystemId());

        // Register handler routines.
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for (uint8_t i = 0; i < c_max_channels; ++i)
        {
          if (m_args.channels_names[i].empty())
            continue;

          if (m_args.channels_names[i].find(c_inv_channels) != std::string::npos || m_args.channels_names[i].find(c_nc_channels) != std::string::npos)
          {
            char label[32];
            std::sprintf(label, "%s", m_args.channels_names[i].c_str());
            char *ptr = strtok(label, "/");
            ptr = strtok (NULL, "/");
            m_volt[i].setSourceEntity(getEid(ptr));
            m_amp[i].setSourceEntity(getEid(ptr));
          }
          else
          {
            m_volt[i].setSourceEntity(getEid(m_args.channels_names[i]));
            m_amp[i].setSourceEntity(getEid(m_args.channels_names[i]));
          }
        }

        // Initialize sensor messages.
        for (unsigned i = 0; i < c_max_servo_inputs; ++i)
        {
          m_volt[c_max_channels + i].setSourceEntity(getEid(m_args.servo_elabels[i]));
          m_amp[c_max_channels + i].setSourceEntity(getEid(m_args.servo_elabels[i]));
        }

        // Initialize leak messages.
        for (unsigned i = 0; i < c_max_leak_inputs; ++i)
        {
          m_leaks[i].state = IMC::EntityState::ESTA_NORMAL;
          m_leaks[i].description = DTR(Status::getString(Status::CODE_ACTIVE));
          m_leaks[i].setSourceEntity(reserveEntity(m_args.leak_elabels[i]));
        }

        // Initialize batman messages/values
        for (uint8_t i = 0; i < m_args.number_cell; ++i)
        {
          if (m_args.cell_elabels[i].empty())
            continue;

          m_volt_batman[i + 1].setSourceEntity(getEid(m_args.cell_elabels[i]));
        }

        m_bat_volt_batman.setSourceEntity(getEid("Batteries"));
        m_amp_batman[0].setSourceEntity(getEid("Batteries"));
        m_tmp.setSourceEntity(getEid("Batteries"));
        m_amp_batman[1].setSourceEntity(getEid(m_args.rcap_elabel));
        m_amp_batman[2].setSourceEntity(getEid(m_args.fcap_elabel));
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        if(m_driver == NULL)
          return;

        for(int i = 0; i < c_max_channels; i++)
        {
          if(paramChanged(m_args.channels_states[i]))
          {
            war("Power state id %d change to %d", i, m_args.channels_states[i]);
            uint8_t state_channel;
            if(m_args.channels_states[i])
              state_channel = OTP_TURN_ON;
            else
              state_channel = OTP_TURN_OFF;
            if (!m_driver->setPowerChannelState(i + c_channel_offset_id, state_channel))
            {
              war("Fail setting power channel state : %d", i + 1);
            }
          }
        }
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
        initBoard();
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

      //! Report leak entities.
      void
      onReportEntityState(void)
      {
        dispatch(m_leaks[0]);
        dispatch(m_leaks[1]);
        dispatch(m_leaks[2]);
        dispatch(m_leaks[3]);
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
        // Handle requests to main power channel.
        if (msg->name == m_args.pwr_main)
        {
          if (msg->getDestination() != getSystemId())
            return;

          if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          {
            war("Switching off all power - PowerChannelControl");
            m_driver->sendPowerOffCommand();
            m_pwr_down = false;
            return;
          }
        }

        for(int ch = 0; ch < c_max_channels; ch++)
        {
          if (m_args.channels_names[ch].find(msg->name) != std::string::npos)
          {
            uint8_t state_channel;
            if(msg->op == IMC::PowerChannelState::PCS_ON)
              state_channel = OTP_TURN_ON;
            else
              state_channel = OTP_TURN_OFF;

            if (!m_driver->setPowerChannelState(ch + c_channel_offset_id, state_channel))
            {
              war("Fail setting power channel state : %d", ch + 1);
            }
            else
            {
              debug("Setting state of %s | %d | %d", m_args.channels_names[ch].c_str(), ch, m_args.channels_states[ch]);
              m_args.channels_states[ch] = (bool)msg->op;
              IMC::PowerChannelState msgPo;
              msgPo.name = m_args.channels_names[ch];
              msgPo.state = msg->op;
              dispatch(msgPo);
            }
          }
        }

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
      initBoard(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("Setting up board OTPDIST")));
        if (!m_driver->getFirmwareVersion())
        {
          war(DTR("Failed to get firmware version"));
          m_driver->resetBoard();
          m_uart->flush();
          m_driver->resetStateNewData();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          inf("Firmware Version: %s", m_parser->getFirmwareVersionInfo().c_str());
        }

        if (!m_driver->setCellNumber(m_args.number_cell))
        {
          war("Fail setting cell number : %d", m_args.number_cell);
          m_driver->resetBoard();
          m_uart->flush();
          m_driver->resetStateNewData();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }

        if (!m_driver->setCFactor(m_args.scale_factor))
        {
          war("Fail setting scale factor : %f", m_args.scale_factor);
          m_driver->resetBoard();
          m_uart->flush();
          m_driver->resetStateNewData();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }

        bool all_set_channel = true;
        inf("Setting Power Channels");
        IMC::PowerChannelState msg;
        for(int i = 0; i < c_max_channels; i++)
        {
          if (m_args.channels_names[i].find(c_nc_channels) == std::string::npos)
          {
            if(m_args.channels_states[i])
            {
              debug("turn on %s", m_args.channels_names[i].c_str());
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
              debug("turn off %s", m_args.channels_names[i].c_str());
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
            debug("jumping %s - %d", m_args.channels_names[i].c_str(), i+1);
            debug("turn off %s", m_args.channels_names[i].c_str());
            if(!m_driver->setPowerChannelState(i + c_channel_offset_id, OTP_TURN_OFF))
            {
              war("Fail setting power channel state : %d", i + 1);
              all_set_channel = false;
            }
          }
        }

        if (!m_driver->sendLeakCommand(true))
        {
          war(DTR("failed sending leak command setting to board"));
          all_set_channel = false;
        }

        // Reset board if fail setting state of one power channel
        if(!all_set_channel)
        {
          m_driver->resetBoard();
          m_uart->flush();
          m_driver->resetStateNewData();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }

        inf("Init and Start OK");
        m_wdog_com.setTop(m_args.input_timeout);
        m_wdog_com.reset();
        m_wdog_single_read.setTop(c_delay_single_frame_read);
        m_wdog_single_read.reset();
        m_wdog_batman.setTop(c_delay_to_get_info_batman);
        m_wdog_batman.reset();
      }

      //! Set Leak status.
      //! @param[in] idx leak index.
      //! @param[in] leak leak status.
      void
      setLeakStatus(int idx, bool leak)
      {
        IMC::EntityState& es = m_leaks[idx];

        if (m_args.leak_medium[idx])
        {
          es.description = leak ? DTR("water") : DTR("air");
          dispatch(es);
          return;
        }

        if (leak)
        {
          if (es.state == IMC::EntityState::ESTA_NORMAL)
          {
            es.state = IMC::EntityState::ESTA_FAILURE;
            es.description = DTR("leak detected");
            dispatch(es);
          }
        }
        else if (es.state == IMC::EntityState::ESTA_FAILURE)
        {
          es.state = IMC::EntityState::ESTA_NORMAL;
          es.description = DTR("active");
          dispatch(es);
        }
      }

      void
      dispatchData(void)
      {
        float voltage, current;
        for(uint8_t i = 0; i < c_max_channels; i++)
        {
          if(i == (PO_CH8 - c_channel_offset_id))
          {
            for(uint8_t t = 0; t < c_max_servo_inputs; t++)
            {
              if(m_parser->newPowerInfoServo(t))
              {
                m_parser->getDataPowerServo(t, &voltage, &current);
                m_volt[c_max_channels + t].setTimeStamp(m_tstamp);
                m_volt[c_max_channels + t].value = voltage;
                dispatch(m_volt[c_max_channels + t], DF_KEEP_TIME);
                m_amp[c_max_channels + t].setTimeStamp(m_tstamp);
                m_amp[c_max_channels + t].value = current/1000.0f;
                dispatch(m_amp[c_max_channels + t], DF_KEEP_TIME);
                m_parser->clearNewDataServo(t);
              }
            }
          }
          else if(m_parser->newPowerInfo(i))
          {
            m_parser->getDataPower(i, &voltage, &current);
            m_volt[i].setTimeStamp(m_tstamp);
            m_volt[i].value = voltage;
            dispatch(m_volt[i], DF_KEEP_TIME);
            m_amp[i].setTimeStamp(m_tstamp);
            m_amp[i].value = current/1000.0f;
            dispatch(m_amp[i], DF_KEEP_TIME);
            m_parser->clearNewData(i);
          }
        }

        for(uint8_t i = 0; i < c_max_data_slot_batman; i++)
        {
          if(m_parser->m_batManData.state_new_data[i])
          {
            m_parser->m_batManData.state_new_data[i] = false;
            switch (i)
            {
              case 0:
                m_volt_batman[0].setTimeStamp(m_tstamp);
                m_volt_batman[0].value = m_parser->m_batManData.voltage;
                dispatch(m_volt[0], DF_KEEP_TIME);
                m_bat_volt_batman.setTimeStamp(m_tstamp);
                m_bat_volt_batman.value = m_parser->m_batManData.voltage;
                dispatch(m_bat_volt_batman, DF_KEEP_TIME);
                break;

              case 1:
                m_amp_batman[0].setTimeStamp(m_tstamp);
                m_amp_batman[0].value = m_parser->m_batManData.current;
                dispatch(m_amp_batman[0], DF_KEEP_TIME);
                break;

              case 2:
                m_tmp.setTimeStamp(m_tstamp);
                m_tmp.value = m_parser->m_batManData.temperature;
                dispatch(m_tmp, DF_KEEP_TIME);
                break;

              case 3:
                m_amp_batman[1].setTimeStamp(m_tstamp);
                m_amp_batman[1].value = m_parser->m_batManData.r_cap;
                dispatch(m_amp_batman[1], DF_KEEP_TIME);
                break;

              case 4:
                m_amp_batman[2].setTimeStamp(m_tstamp);
                m_amp_batman[2].value = m_parser->m_batManData.f_cap;
                dispatch(m_amp_batman[2], DF_KEEP_TIME);
                break;

              case 7:
                for (uint8_t id = 1; id <= m_args.number_cell; ++id)
                {
                  m_volt_batman[id].setTimeStamp(m_tstamp);
                  m_volt_batman[id].value = m_parser->m_batManData.cell_volt[id - 1];
                  dispatch(m_volt_batman[id], DF_KEEP_TIME);
                }
                break;

              default:
                break;
            }
          }
        }

        if(m_args.dispatch_fuel_level)
        {
          m_fuel.setTimeStamp(m_tstamp);
          m_fuel.value = (m_parser->m_batManData.r_cap * 100) / m_parser->m_batManData.f_cap;
          m_fuel.confidence = 100;
          dispatch(m_fuel, DF_KEEP_TIME);
        }

        if (m_fuel.value < m_args.err_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if((m_parser->m_batManData.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "fuel on reserve - ETD: %s", minutesToTime(m_parser->m_batManData.time_empty).c_str());
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_FUEL_RESERVE);
          }
        }
        else if (m_fuel.value < m_args.war_lvl)
        {
          std::memset(&m_bufer_entity, '\0', sizeof(m_bufer_entity));
          if ((m_parser->m_batManData.time_empty > 0))
          {
            std::sprintf(m_bufer_entity, "fuel running low - ETD: %s", minutesToTime(m_parser->m_batManData.time_empty).c_str());
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
          if (m_parser->m_batManData.time_full > 0)
          {
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETF: %s",
                         m_parser->m_batManData.health,
                         m_parser->m_batManData.voltage,
                         m_parser->m_batManData.r_cap,
                         minutesToTime(m_parser->m_batManData.time_full).c_str());
          }
          else if (m_parser->m_batManData.time_empty > 0)
          {
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah, ETD: %s",
                         m_parser->m_batManData.health,
                         m_parser->m_batManData.voltage,
                         m_parser->m_batManData.r_cap,
                         minutesToTime(m_parser->m_batManData.time_empty).c_str());
          }
          else
          {
            std::sprintf(m_bufer_entity,
                         "H: %d %%, Volt: %.3f V, RCap: %.3f Ah",
                         m_parser->m_batManData.health,
                         m_parser->m_batManData.voltage,
                         m_parser->m_batManData.r_cap);
          }
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
        }
      }

      std::string
      minutesToTime(int minutes)
      {
        char time_battery[32];
        int hour = minutes / 60;
        int day = hour / 24;
        hour = hour - (24 * day);
        int min = minutes % 60;
        if (day > 0)
          std::sprintf(time_battery, "%dd %dh %dm", day, hour, min);
        else if (hour > 0)
          std::sprintf(time_battery, "%dh %dm", hour, min);
        else
          std::sprintf(time_battery, "%dm", min);

        return time_battery;
      }

      void
      checkInternalSensors(void)
      {
        if(m_parser->newDataLeak())
        {
          for (int le = 0; le < c_max_leak_inputs; le++)
          {
            if (m_parser->leakDetected(le))
            {
              err("Leak detectead: %d", le + 1);
              setLeakStatus(le, true);
            }
            else
            {
              setLeakStatus(le, false);
            }
          }
        }
        if (m_parser->isSwitchOn() && !m_pwr_down)
        {
          m_pwr_down = true;
        }
        else if (!m_parser->isSwitchOn() && m_pwr_down)
        {
          m_pwr_down = false;
        }
        if (m_pwr_down && !m_send_power_down)
        {
          war("PowerOff delay %.2f seconds", m_args.delay_turn_off);
          m_wdog_off.setTop(m_args.delay_turn_off);
          m_wdog_off.reset();
          m_send_power_down = true;
          war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
          m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
          dispatch(m_pwr_op);
        }
        else if(!m_pwr_down && m_send_power_down)
        {
          m_send_power_down = false;
          war(DTR("power down sequence aborted"));
          m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
          dispatch(m_pwr_op);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);
          dispatchData();
          //! 1Sec
          if(m_wdog_single_read.overflow())
          {
            m_driver->getSingleAcquisition();
            m_wdog_single_read.reset();
          }

          // Get Batman info/data
          if(m_wdog_batman.overflow())
          {
            m_driver->getBatmanData();
            m_wdog_batman.reset();
          }

          if (m_wdog_com.overflow())
          {
            m_driver->resetBoard();
            m_uart->flush();
            setEntityState(IMC::EntityState::ESTA_ERROR, DTR("Timeout for receiving messages from board."));
            throw RestartNeeded(DTR("Timeout for receiving messages from board."), 10);
          }

          if(m_driver->haveNewData())
          {
            m_tstamp = Clock::getSinceEpoch();
            checkInternalSensors();
            m_wdog_com.reset();
          }
          if(m_pwr_down && m_wdog_off.overflow())
          {
            war("Switching off all power - Force");
            m_driver->sendPowerOffCommand();
          }
        }
      }
    };
  }
}

DUNE_TASK
