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
// Author: Joao Costa                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Parser.hpp"

//! Sampling OK string
#define SAMPLING_OK "OK"
//! Sampling Failed string
#define SAMPLING_FAIL "Failed"

//! Abort Cmd char
#define CMD_ABORT 'A'
//! Set nr. of total bottles in firmware Cmd char
#define CMD_SET_FW_BOT 'B'
//! Clean Cmd char
#define CMD_CLEAN 'C'
//! Get nr. of total bottles in firmware Cmd char
#define CMD_GET_FW_BOT 'G'
//! Send parameter's manual command
#define CMD_MANUAL 'M'
//! Ping firmware Cmd char
#define CMD_PING 'P'
//! Sample Cmd char
#define CMD_SAMPLE 'S'
//! Stop Cmd char
#define CMD_STOP 'T'
//! Get firmware version Cmd char
#define CMD_VERSION 'V'

//! Cmd max send tries
#define CMD_MAX_TRIES 10
//! Cmd's answer max waiting time (s)
#define ANSWER_DELAY 5

//! Firmware's ping interval
#define PING_INTERVAL 10
//! Frmware's watchdog time
#define WATCHDOG_TIME 30

namespace Actuators
{
  //! Driver for Doris' Water Sampler
  //!
  //! This task controls Doris' Water Sampler by asking it to do cleaning and sampling procedures of a desired number of bottles.
  //! It adds info about the sampling location and weather conditions to a log and sent back to neptus, as well as the status of the procedures.
  //! @author Joao Costa
  namespace DorisSampler
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_buffer = 128;

    //! Navigation states.
    enum StateMachineStates
    {
      //! Stopped State.
      SM_STOPPED = 0,
      //! Moving to a GoTo Destination.
      SM_MOVING,
      //! Asking Fw to initiate the Cleaning Maneuver.
      SM_CLEAN,
      //! Cleaning State.
      SM_CLEANING,
      //! Cleaning Done.
      SM_CLEANING_DONE,
      //! Asking Fw to initiate the Samping Maneuver.
      SM_SAMPLE,
      //! Sampling State.
      SM_SAMPLING,
      //! Sampling Done.
      SM_SAMPLING_DONE,
      //! Sampling Failed.
      SM_SAMPLING_FAILED,
      //! Maneuver Done.
      SM_MANEUVER_DONE,
      //! Sampler is full.
      SM_FULL,
      //! Initialization state.
      SM_INIT = 99
    };

    enum BoardInitStates
    {
      //! Board Init Starting Point
      BI_START,
      //! Ask FW's version
      BI_ASK_VERSION,
      //! Wait for/Get FW's version state
      BI_GET_VERSION,
      //! Ask total num of bottles in FW
      BI_ASK_BOT_NUM,
      //! Wait for/Get FW's total num of bottles
      BI_GET_BOT_NUM,
      //! Init done state
      BI_DONE
    };

    enum FwCleaningStateOptions
    {
      CLEANING_STOPPED = 0,
      CLEANING_INPUTSELECT,
      CLEANING_DISC = 2,
      CLEANING_PUMP = 3,
      CLEANING_FULL,
      CLEANING_EMPTYING,
      CLEANING_EMPTY,
      CLEANING_DONE = 7
    };

    enum FwSamplingStateOptions
    {
      SAMPLING_STOPPED = 0,
      SAMPLING_DONE = 1,
      SAMPLING_FAILED_C = 2,
      SAMPLING_FAILED_S = 3,
      SAMPLING_FULLY_LOADED = 4,
      SAMPLING_INPUTSELECT,
      SAMPLING_DISC = 6,
      SAMPLING_PUMP = 7,
      SAMPLING_SAVED = 8,
      SAMPLING_FULL,
      SAMPLING_SAVINGUP,
      SAMPLING_SAVINGLOW,
      SAMPLING_CLEANING,
      SAMPLING_CLEAN
    };

    struct Arguments
    {
      //! Entity that provides Storage Box's Internal Temperature
      std::string in_temp_eid;
      //! Entity that provides Outside Temperature
      std::string out_temp_eid;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Number of bottles to sample.
      uint8_t nr_bottles_to_sample;
      //! Total bottle count
      uint8_t total_nr_of_bottles;
      //! Type of sample.
      std::string type_of_sample;
      //! CPU Serial Command
      std::string cpu_cmd;
      //! Max number of bottles in the sampler
      uint8_t max_bottles;
      //! Expected name of the plan to consider sampling plan
      std::string plan_name;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Master name
      std::string m_master_name;

      //! Serial port handle.
      SerialPort *m_uart;
      //! count for fail rx uartm_args.cpu_cmd
      uint8_t m_fail_uart;
      //! Serial buffer in
      uint8_t m_bfr[128];
      //! Parser
      Parser *m_parse;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //! CSUM value
      uint8_t m_csum[c_max_csum];
      //! Message used to construct the command to be sent
      char m_msg[c_max_buffer - 28];
      //! Command to be sent via usart
      char m_cmd[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;

      //! Serial loop timer
      uint8_t serial_timer;
      //! Command send count
      uint8_t cmd_sent_count;
      //! Timer used for resend the command to firmware
      Time::Counter<double> m_cmd_timer;
      //! WASAB's Pinger.
      Time::Counter<double> m_pinger;

      //! New manual cmd available flag
      bool m_manual_cmd_FL;
      //! Set fw's total bottle number flag
      bool m_set_bot_cmd_FL;
      //! Vehicle is near the go-to flag
      bool m_NEAR_FL;
      //! Start main sampling machine flag
      bool m_START_FL;
      //! Stop sampling machines flag
      bool m_STOP_FL;
      //! Is doris sampler plan started flag
      bool m_IS_PLAN_FL;
      //! Another plan started flag
      bool m_IS_NOT_PLAN_FL;
      //! Otter in maneuver flag
      bool m_ON_MANEUVER_FL;
      //! Let maneuver end flag
      bool m_WAIT_END_FL;
      //! Doris sampler full flag
      bool m_FULL_FL;

      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Board Init state
      BoardInitStates m_bi_state;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Maneuver done flag to be sent via IMC (?)
      IMC::ManeuverDone m_done;

      //! Bottle count of the sampling procedure
      uint8_t m_bottle_count;
      //! Number of bottles to sample in that maneuver
      uint8_t m_nr_of_bottles_to_sample;
      //! Type of sample
      std::string m_type_of_sample;

      //! Samples Storage Box Internal Temperature
      uint8_t m_in_box_temp;
      //! Air Temperature
      uint8_t m_air_temp;
      //! Air Humidity
      uint8_t m_air_humidity;
      //! Outside Temperature Entity eid
      int m_out_temp_eid;
      //! Inside Temperature Entity eid
      int m_in_temp_eid;
      //! Wind Speed
      uint8_t m_wind_spd;
      //! Wind Direction
      uint16_t m_wind_dir;

      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
                                                           m_master_name("otter"),
                                                           m_uart(NULL),
                                                           cmd_sent_count(0),
                                                           m_manual_cmd_FL(false),
                                                           m_set_bot_cmd_FL(false),
                                                           m_NEAR_FL(false),
                                                           m_START_FL(false),
                                                           m_STOP_FL(false),
                                                           m_IS_PLAN_FL(false),
                                                           m_IS_NOT_PLAN_FL(false),
                                                           m_ON_MANEUVER_FL(false),
                                                           m_WAIT_END_FL(false),
                                                           m_FULL_FL(false),
                                                           m_sm_state(SM_INIT),
                                                           m_bi_state(BI_START),
                                                           m_in_box_temp(0),
                                                           m_air_temp(0),
                                                           m_air_humidity(0),
                                                           m_wind_spd(0),
                                                           m_wind_dir(0)
      {
        param("Entity Label - Outside Temperature", m_args.out_temp_eid)
            .description("Entity label of 'Outside Temperature' messages");

        param("Entity Label - Inside Temperature", m_args.in_temp_eid)
            .description("Entity label of 'Storage Box Internal Temperature' messages");

        param("Serial Port - Device", m_args.uart_dev)
            .defaultValue("/dev/ttyUSB0")
            .description("Serial port used to communicate with the firmware.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
            .defaultValue("115200")
            .description("Serial port baudrate.");

        param("Sampler - Nr. of Bottles to Sample", m_args.nr_bottles_to_sample)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_MANEUVER)
            .defaultValue("0")
            .minimumValue("0")
            .maximumValue("12")
            .description(DTR("Number of bottles to sample in each spot."));

        param("Sampler - Type of Sample", m_args.type_of_sample)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_MANEUVER)
            .values(DTR_RT("None, Disc, Pump"))
            .defaultValue("None")
            .description(DTR("Type of the required samples."));

        param("Sampler - Number of Bottles Used", m_args.total_nr_of_bottles)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("0")
            .description(DTR("Number of bottles already used by the sampler."));

        param("Sampler - Max Capacity", m_args.max_bottles)
            .defaultValue("12")
            .description(DTR("Max number of bottles that the sampler carries."));

        param("Serial Manual Command", m_args.cpu_cmd)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("P")
            .description(DTR("Command input to send manually to firmware."));

        param("Plan Name", m_args.plan_name)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("doris-plan")
            .description(DTR("Name for the DORIS sampling plan."));

        bind<IMC::PathControlState>(this);
        bind<IMC::PlanControl>(this);
        // bind<IMC::PlanControlState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::RelativeHumidity>(this);
        bind<IMC::WindSpeed>(this);
        // bind<IMC::StopManeuver>(this);
        bind<IMC::Abort>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // make sure that parameter don't change mid flight
        if (m_sm_state == SM_STOPPED && (m_IS_PLAN_FL || m_IS_NOT_PLAN_FL))
        {
          spew("onUpdateParameters: m_sm_state %d | m_IS_PLAN_FL %d | m_IS_NOT_PLAN_FL %d", m_sm_state, m_IS_PLAN_FL, m_IS_NOT_PLAN_FL);
          m_START_FL = true;
        }

        // update command to be sent manually to WASAB
        if (paramChanged(m_args.cpu_cmd))
        {
          m_manual_cmd_FL = true;
        }

        // set fw's total number of bottles
        if (paramChanged(m_args.total_nr_of_bottles))
        {
          m_set_bot_cmd_FL = true;
        }

        // update nr of bottles to sample if changed
        if (paramChanged(m_args.nr_bottles_to_sample))
        {
          m_nr_of_bottles_to_sample = m_args.nr_bottles_to_sample;
        }

        // update type of sample if changed
        if (paramChanged(m_args.type_of_sample))
        {
          m_type_of_sample = m_args.type_of_sample;
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        try
        {
          m_in_temp_eid = resolveEntity(m_args.in_temp_eid);
        }
        catch (...)
        {
          m_in_temp_eid = 0;
        }

        try
        {
          m_out_temp_eid = resolveEntity(m_args.out_temp_eid);
        }
        catch (...)
        {
          m_out_temp_eid = 0;
        }
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
          m_fail_uart = 0;
          m_poll.add(*m_uart);
        }
        catch (std::runtime_error &e)
        {
          err("Error opening serial port");
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_uart->flushInput();
        m_uart->flush();

        m_parse = new Parser(this);

        m_parse->set_wdog(WATCHDOG_TIME);
        m_pinger.setTop(PING_INTERVAL);
        m_cmd_timer.setTop(ANSWER_DELAY);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      //! Check if there's commands that need to be sent.
      void
      updateCpuCommands(void)
      {
        if (m_manual_cmd_FL)
        {
          sendCommand(CMD_MANUAL);
          m_manual_cmd_FL = false;
        }

        if (m_set_bot_cmd_FL)
        {
          sendCommand(CMD_SET_FW_BOT);
          m_set_bot_cmd_FL = false;
        }
      }

      //! Check if there's data to be read sent by WASAB.
      bool
      hasNewData(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          std::memset(&m_bfr, '\0', sizeof(m_bfr));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_bfr, sizeof(m_bfr));
          }
          catch (std::exception &e)
          {
            err(DTR("read error: %s"), e.what());
            return false;
          }

          if (rv <= 0)
          {
            err(DTR("unknown read error"));
            return false;
          }
          else
          {
            for (uint8_t i = 0; i < rv; ++i)
            {
              if (!m_parse->parse(m_bfr[i]))
                continue;
              return true;
            }
          }
        }
        return false;
      }

      void
      consume(const IMC::PathControlState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        if (msg->flags & IMC::PathControlState::FL_NEAR)
        {
          m_NEAR_FL = true;
        }
      }

      /*void
      consume(const IMC::PlanControlState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        if (msg->plan_progress == IMC::PlanControlState::LPO_SUCCESS)
        {
          debug("NEPTUS: plan done!");
          m_IS_PLAN_FL = false;
          m_IS_NOT_PLAN_FL = false;
          m_START_FL = false;
          m_sm_state = SM_STOPPED;
          trace(">>>>> SM State = READY");
        }
      }*/

      void
      consume(const IMC::PlanControl *msg)
      {
        if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_START)
        {
          if (msg->plan_id.compare(m_args.plan_name) == 0)
          {
            m_IS_PLAN_FL = true;
            m_IS_NOT_PLAN_FL = false;
            debug("PlanControl: Start sampling plan!");
            spew("PlanControl: m_IS_PLAN_FL = true | m_IS_NOT_PLAN_FL = false");
          }
          else
          {
            m_IS_PLAN_FL = false;
            m_IS_NOT_PLAN_FL = true;
            debug("PlanControl: Started another plan!");
            spew("PlanControl: m_IS_PLAN_FL = false | m_IS_NOT_PLAN_FL = true");
          }
          m_START_FL = true;
          spew("PlanControl: m_START_FL = true");
        }
        else if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_STOP)
        {
          sendCommand(CMD_STOP);
          sendCommand(CMD_STOP);
          spew("STOP sent to WASAB.");

          if (msg->plan_id.compare(m_args.plan_name) == 0)
          {
            m_START_FL = false;
            debug("PlanControl: Stop plan!");
            spew("PlanControl: m_START_FL = false");
          }
        }
      }

      void
      consume(const IMC::EstimatedState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::VehicleState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        // detect falling edge of maneuver mode
        if (msg->op_mode != IMC::VehicleState::VS_MANEUVER && m_ON_MANEUVER_FL)
        {
          // If otter is doing something
          // if (m_sm_state != SM_STOPPED)
          // {
          // In the sampling plan
          if (m_IS_PLAN_FL)
          {
            spew("VehicleState: IS_PLAN_FL then m_STOP_FL = true;");
            sendCommand(CMD_STOP);
            spew("STOP sent to WASAB.");
            m_STOP_FL = true;
          }
          // in another plan
          else if (m_IS_NOT_PLAN_FL)
          {
            spew("VehicleState: IS_NOT_PLAN then m_sm_state = SM_STOPPED");
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = READY");
            m_NEAR_FL = false;
          }
          spew("VehicleState: IS_*_PLAN = false");
          m_IS_PLAN_FL = false;
          m_IS_NOT_PLAN_FL = false;
          // }
          // else
          // {
          //   debug("StopManeuver: DORIS was already stopped!!");
          // }

          /*spew("VehicleState: IS_*_PLAN = false");
          m_IS_PLAN_FL = false;
          m_IS_NOT_PLAN_FL = false;
          spew("VehicleState: Left Maneuver Mode");
          m_sm_state = SM_STOPPED;
          trace(">>>>> SM State = READY");*/
        }

        // detect rising edge of maneuver mode
        /*if (msg->op_mode == IMC::VehicleState::VS_MANEUVER && !m_ON_MANEUVER_FL)
        {
          
        }*/

        if (msg->op_mode == IMC::VehicleState::VS_MANEUVER)
        {
          m_ON_MANEUVER_FL = true;
        }
        else
        {
          m_ON_MANEUVER_FL = false;
        }
      }

      void
      consume(const IMC::Temperature *msg)
      {
        if (msg->getSourceEntity() == m_in_temp_eid)
        {
          m_in_box_temp = msg->value;
          if (msg->value >= 30)
            err("Temperature too high! Previous samples are invalid.");
        }

        if (msg->getSourceEntity() == m_out_temp_eid)
        {
          m_air_temp = msg->value;
        }
      }

      void
      consume(const IMC::WindSpeed *msg)
      {
        if (msg->getSourceEntity() == m_out_temp_eid)
        {
          m_wind_dir = msg->direction;
          m_wind_spd = msg->speed;
        }
      }

      void
      consume(const IMC::RelativeHumidity *msg)
      {
        if (msg->getSourceEntity() == m_out_temp_eid)
        {
          m_air_humidity = msg->value;
        }
      }

      /*void
      consume(const IMC::StopManeuver *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        // If otter is doing something
        if (m_sm_state != SM_STOPPED)
        {
          // In the sampling plan
          if (m_IS_PLAN_FL)
          {
            spew("StopManeuver: IS_PLAN_FL then m_STOP_FL = true;");
            m_STOP_FL = true;
          }
          // in another plan
          else if (m_IS_NOT_PLAN_FL)
          {
            spew("StopManeuver: IS_NOT_PLAN then m_sm_state = SM_STOPPED");
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = READY");
            m_NEAR_FL = false;
          }
          spew("StopManeuver: IS_*_PLAN = false");
          m_IS_PLAN_FL = false;
          m_IS_NOT_PLAN_FL = false;
        }
        else
        {
          debug("StopManeuver: DORIS was already stopped!!");
        }
        }*/

      void
      consume(const IMC::Abort *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getDestination())) != 0)
          return;

        war("Abort Requested");

        sendCommand(CMD_STOP);
        sendCommand(CMD_STOP);
        spew("STOP (Abort) sent to WASAB.");

        m_sm_state = SM_STOPPED;
        trace(">>>>> SM State = READY");

        m_NEAR_FL = false;
        m_START_FL = false;
        m_STOP_FL = false;
        m_IS_PLAN_FL = false;
        m_IS_NOT_PLAN_FL = false;
        m_ON_MANEUVER_FL = false;

        spew("All variables reseted.");
      }

      //! Dispatch Sample Information
      void
      dispatchBottleInfo(int bottleNum, std::string bottleStatus)
      {
        //Get coordinates in degrees from the estimated estate
        double lat = Angles::degrees(m_estate.lat);
        double lon = Angles::degrees(m_estate.lon);

        IMC::LogBookEntry log_entry;
        log_entry.type = IMC::LogBookEntry::LBET_INFO;

        std::ostringstream context;
        context << "Bottle: " << bottleNum << " info.";
        log_entry.context = context.str();

        std::ostringstream text;
        text << "Status: " << bottleStatus << "\n" << "\nType of Sample: " << m_type_of_sample.c_str() << "\nLatitude: " << lat << "\nLongitude: " << lon << "\nWind Speed: " << m_wind_spd << "\nWind Direction: " << m_wind_dir << "\nAir Temperature: " << m_air_temp << "\nAir Humidity: " << m_air_humidity << "\n";
        log_entry.text = text.str();

        Delay::wait(0.2);

        dispatch(log_entry, DF_LOOP_BACK);
      }

      //! Send Commands to Serial Port
      void
      sendCommand(char cmd)
      {
        std::memset(&m_msg, '\0', sizeof(m_msg));
        switch (cmd)
        {
        case CMD_ABORT:
          std::sprintf(m_msg, "A");
          spew("ABORT sent to WASAB.");
          break;
        case CMD_SET_FW_BOT:
          std::sprintf(m_msg, "B,%d", m_args.total_nr_of_bottles);
          spew("SET_FW_BOT (%d) sent to WASAB.", m_args.total_nr_of_bottles);
          break;
        case CMD_CLEAN:
          std::sprintf(m_msg, "C");
          spew("CLEAN sent to WASAB.");
          break;
        case CMD_GET_FW_BOT:
          std::sprintf(m_msg, "G");
          spew("GET_FW_BOT sent to WASAB.");
          break;
        case CMD_PING:
          std::sprintf(m_msg, "P");
          spew("PING sent to WASAB.");
          break;
        case CMD_SAMPLE:
          if (std::strcmp(m_type_of_sample.c_str(), "Disc") == 0)
          {
            std::sprintf(m_msg, "S,0");
            spew("SAMPLE DISC sent to WASAB.");
          }
          else if (std::strcmp(m_type_of_sample.c_str(), "Pump") == 0)
          {
            std::sprintf(m_msg, "S,1");
            spew("SAMPLE PUMP sent to WASAB.");
          }
          break;
        case CMD_STOP:
          std::sprintf(m_msg, "T");
          spew("STOP sent to WASAB.");
          break;
        case CMD_VERSION:
          std::sprintf(m_msg, "V");
          spew("VERSION sent to WASAB.");
          break;
        case CMD_MANUAL:
          std::sprintf(m_msg, "%s", m_args.cpu_cmd.c_str());
          spew("%s* (M) sent to WASAB.", m_msg);
          break;
        }
        std::sprintf(m_msg, "%s*", m_msg);
        m_csum[0] = Algorithms::XORChecksum::compute((uint8_t *)m_msg, strlen(m_msg) - 1, 0);
        sprintf(m_cmd, "$%s%c\r\n", m_msg, m_csum[0]);
        m_parse->m_msg_receipt = 0;
        m_uart->writeString(m_cmd);
        spew("SendCommand: %s", m_cmd);
      }

      //! Board Initiation State Machine
      bool
      initBoard()
      {
        switch (m_bi_state)
        {
        // Initiation starting point
        case BI_START:
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_SYNCING);
          m_bi_state = BI_ASK_VERSION;
          trace(">>>>> BI State = ASKING VERSION");
          break;

        // Ask WASAB's firmware version
        case BI_ASK_VERSION:
          sendCommand(CMD_VERSION);
          m_cmd_timer.reset();
          m_parse->m_dorisState.cleanState = 0;
          cmd_sent_count++;
          m_bi_state = BI_GET_VERSION;
          trace(">>>>> BI State = WAITING VERSION");
          break;

        // Wait until get WASAB's fw version
        case BI_GET_VERSION:
          //if msg with fw's version is received
          if (m_parse->m_msg_receipt == 1 && m_parse->m_dorisState.fwVersion != 0.0)
          {
            //reset vars, dispatch fw, move state
            m_parse->m_msg_receipt = 0;
            cmd_sent_count = 0;
            trace(">>>>> BI State = GOT VERSION");
            inf("WASAB fw v%.1f", m_parse->m_dorisState.fwVersion);
            m_bi_state = BI_ASK_BOT_NUM;
            trace(">>>>> BI State = ASKING BOTTLE NUMBER");
          }
          else if (m_cmd_timer.overflow()) //check if time to answer passed
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              war("WASAB not answered version command: %d.", cmd_sent_count);
              m_bi_state = BI_ASK_VERSION;
              trace(">>>>> BI State = ASKING VERSION");
            }
            else
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR("WASAB don't answer DUNE"), 10);
              return true;
            }
          }
          break;
        // Ask WASAB's number of bottles used
        case BI_ASK_BOT_NUM:
          sendCommand(CMD_GET_FW_BOT);
          m_cmd_timer.reset();
          m_parse->m_msg_receipt = 0;
          cmd_sent_count++;
          m_bi_state = BI_GET_BOT_NUM;
          trace(">>>>> BI State = WAITING BOTTLE NUMBER");
          break;
        // Wait until get WASAB's number of bottles used
        case BI_GET_BOT_NUM:
          //if msg with total number of bottles is received
          if (m_parse->m_msg_receipt == 1 && m_parse->m_dorisState.totalNumberOfBottles != -1)
          {
            m_parse->m_msg_receipt = 0;
            cmd_sent_count = 0;
            m_args.total_nr_of_bottles = m_parse->m_dorisState.totalNumberOfBottles;
            inf("FW's nr of bottles = %d", m_parse->m_dorisState.totalNumberOfBottles);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            m_bi_state = BI_DONE;
            trace(">>>>> BI State = DONE");
          }
          else if (m_cmd_timer.overflow()) //check if time to answer passed
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              war("WASAB not returned number of bottles: %d.", cmd_sent_count);
              //resend command
              m_bi_state = BI_ASK_BOT_NUM;
              trace(">>>>> BI State = ASKING BOTTLE NUMBER");
            }
            else //if tried x times give error and go to error state
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR("WASAB don't answer DUNE"), 10);
              return true;
            }
            break;
          // Board Initialized. State machine is now, ready to operate.
          case BI_DONE:
            break;
          }
        }
        return false;
      }

      //! Main State Machine
      void
      updateStateMachine(void)
      {
        if (m_STOP_FL)
        {
          if (m_sm_state == SM_MOVING || m_sm_state == SM_CLEAN || m_sm_state == SM_CLEANING_DONE || m_sm_state == SM_SAMPLE)
          {
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = STOPPED");
          }
          else if (m_sm_state == SM_SAMPLING)
          {
            m_WAIT_END_FL = true;
            debug("Waiting for WASABs stop confirmation.");
          }
          m_STOP_FL = false;
        }

        switch (m_sm_state)
        {
        // Waits for Board Initialization
        case SM_INIT:
          if (m_bi_state == BI_DONE)
          {
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = READY");
          }
          break;
        // Ready to operate, waiting to start
        case SM_STOPPED:
          if (m_START_FL)
          {
            m_sm_state = SM_MOVING;
            trace(">>>>> SM State = VEHICLE IN MOVEMENT");
            m_START_FL = false;
            m_NEAR_FL = false;
            m_bottle_count = 0;
          }
          break;

        case SM_MOVING:
          if (m_NEAR_FL)
          {
            if ((m_nr_of_bottles_to_sample > 0 && std::strcmp(m_type_of_sample.c_str(), "None") != 0 && !m_FULL_FL) && m_IS_PLAN_FL) //check if it still goes to the next point or stops completely...
            {
              inf("Way Point Info: Sample %d bottles from %s", m_nr_of_bottles_to_sample, m_type_of_sample.c_str());
              sendCommand(CMD_CLEAN);
              debug("Asked for cleaning maneuver.");
              m_cmd_timer.reset();
              m_sm_state = SM_CLEAN;
              trace(">>>>> SM State = WAITING CLEANING TO START");
            }
            else
            {
              inf("Way Point Info: No sampling here.");
              m_sm_state = SM_MANEUVER_DONE;
              trace(">>>>> SM State = MANEUVER DONE");
            }
            m_NEAR_FL = false;
          }
          break;

        case SM_CLEAN:
          if (m_parse->m_dorisState.cleanState == CLEANING_DISC || m_parse->m_dorisState.cleanState == CLEANING_PUMP)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_CLEANING;
            debug("Cleaning initiated.");
            trace(">>>>> SM State = CLEANING");
            cmd_sent_count = 0;
            m_parse->m_msg_receipt = 0;
          }
          else if (m_parse->m_msg_receipt == 0 && m_cmd_timer.overflow())
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              war("WASAB not answered %d CLEANING commands.", cmd_sent_count);
              sendCommand(CMD_CLEAN);
              cmd_sent_count++;
              m_cmd_timer.reset();
            }
            else
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR); // O QUE FAZER AQUI? SM_INIT?
              cmd_sent_count = 0;
              m_sm_state = SM_STOPPED;
            }
          }
          break;

        case SM_CLEANING:
          if (m_parse->m_dorisState.cleanState == CLEANING_DONE)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_CLEANING_DONE;
            debug("Cleaning done.");
            trace(">>>>> SM State = CLEANING DONE");
          }
          break;

        case SM_CLEANING_DONE:
          sendCommand(CMD_SAMPLE);
          m_cmd_timer.reset();
          m_sm_state = SM_SAMPLE;
          debug("Asked for sampling maneuver.");
          trace(">>>>> SM State = WAITING SAMPLING TO START");
          break;

        case SM_SAMPLE:
          if (m_parse->m_dorisState.sampleState == SAMPLING_PUMP || m_parse->m_dorisState.sampleState == SAMPLING_DISC)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_SAMPLING;
            debug("Sampling initiated.");
            trace(">>>>> SM State = SAMPLING");
            cmd_sent_count = 0;
            m_parse->m_msg_receipt = 0;
          }
          else if (m_parse->m_msg_receipt == 0 && m_cmd_timer.overflow())
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              war("WASAB not answered %d SAMPLING commands.", cmd_sent_count);
              sendCommand(CMD_SAMPLE);
              cmd_sent_count++;
              m_cmd_timer.reset();
            }
            else
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR); // O QUE FAZER AQUI? SM_INIT?
              cmd_sent_count = 0;
              m_sm_state = SM_STOPPED;
            }
          }
          break;

        case SM_SAMPLING:
          if (m_parse->m_dorisState.sampleState == SAMPLING_DONE)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_SAMPLING_DONE;
            debug("Sampling done.");
            trace(">>>>> SM State = SAMPLING DONE");
            m_bottle_count++;
            m_args.total_nr_of_bottles++;
          }
          else if (m_parse->m_dorisState.sampleState == SAMPLING_FAILED_C)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_SAMPLING_FAILED;
            err("Sampling Failed while collecting the water!");
            trace(">>>>> SM State = SAMPLING FAILED");
          }
          else if (m_parse->m_dorisState.sampleState == SAMPLING_FAILED_S)
          {
            m_args.cpu_cmd = "";
            m_sm_state = SM_SAMPLING_FAILED;
            err("Sampling Failed while saving the water!");
            trace(">>>>> SM State = SAMPLING FAILED");
            m_args.total_nr_of_bottles++;
          }
          break;

        case SM_SAMPLING_DONE:
          //update logBook with sampled bottle info
          dispatchBottleInfo(m_args.total_nr_of_bottles, SAMPLING_OK);
          inf("Bottle %d/%d of this maneuver (%d in total): %s", m_bottle_count, m_args.nr_bottles_to_sample, m_args.total_nr_of_bottles, SAMPLING_OK);

          // check what to do next
          // notify user that vehicle got into full state
          if (m_args.total_nr_of_bottles > m_args.max_bottles)
          {
            m_sm_state = SM_FULL;
            war("DORIS' sampler is full!");
            trace(">>>>> SM State = SAMPLER FULL");
          }
          else if (m_WAIT_END_FL)
          {
            debug("Sampling done after stop comamnd.");
            dispatch(m_done);
            debug("Maneuver done.");
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = STOPPED");
            m_WAIT_END_FL = false;
          }
          else if (m_bottle_count >= m_args.nr_bottles_to_sample)
          {
            m_sm_state = SM_MANEUVER_DONE;
            debug("Maneuver done.");
            trace(">>>>> SM State = MANEUVER DONE");
          }
          else if (m_bottle_count < m_args.nr_bottles_to_sample)
          {
            sendCommand(CMD_SAMPLE);
            m_cmd_timer.reset();
            m_sm_state = SM_SAMPLE;
            debug(" ''Another one'' - Dj Khaled");
            debug("Ask for sampling maneuver.");
            trace(">>>>> SM State = WAITING SAMPLING TO START");
          }
          break;

        case SM_SAMPLING_FAILED:
          // update logBook with failed sample info
          dispatchBottleInfo(m_args.total_nr_of_bottles, SAMPLING_FAIL);
          inf("Bottle %d/%d of this maneuver (%d in total): %s", m_bottle_count, m_args.nr_bottles_to_sample, m_args.total_nr_of_bottles, SAMPLING_FAIL);

          // check what to do next
          // notify user that vehicle got into full state
          if (m_args.total_nr_of_bottles >= m_args.max_bottles)
          {
            m_sm_state = SM_FULL;
            war("DORIS' sampler is full.");
            trace(">>>>> SM State = SAMPLER IS FULL");
            cmd_sent_count = 0;
          }
          else if (m_WAIT_END_FL)
          {
            debug("Failed after stop comamnd.");
            dispatch(m_done);
            debug("Maneuver done.");
            m_sm_state = SM_STOPPED;
            trace(">>>>> SM State = STOPPED");
            m_WAIT_END_FL = false;
          }
          else
          {
            sendCommand(CMD_SAMPLE);
            m_cmd_timer.reset();
            m_sm_state = SM_SAMPLE;
            debug(" ''Trying It Again'' - Smokey Robinson");
            debug("Ask for sampling maneuver.");
            trace(">>>>> SM State = WAITING SAMPLING TO START");
          }
          break;

        case SM_MANEUVER_DONE:
          dispatch(m_done);
          debug("Maneuver done.");
          m_sm_state = SM_STOPPED;
          trace(">>>>> SM State = STOPPED");
          m_START_FL = false;
          break;

        case SM_FULL:
          dispatch(m_done);
          debug("Maneuver done.");
          m_sm_state = SM_STOPPED;
          trace(">>>>> SM State = STOPPED");
          m_FULL_FL = true;
          m_START_FL = false;
          break;
        }
      }

      //! Main Loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_sm_state == SM_INIT)
          {
            if (initBoard())
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR("WASAB's initiation failed!"), 10);
            }
          }

          //Check for serial commands and parse them.
          if (m_poll.poll(0.2))
          {
            if (hasNewData())
            {
              m_parse->translate();
            }
          }

          //Check if firmware pinged back.
          if (m_parse->m_fw_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("WASAB's watchdog triggered!"), 10);
          }
          else if (m_pinger.overflow())
          {
            sendCommand(CMD_PING);
            m_pinger.reset();
          }

          //Check if there's any flags tocommand to be sent.
          updateCpuCommands();

          //Update state machines.
          updateStateMachine();

          waitForMessages(1.0);
        }
      }
    }; //struct task
  }    // namespace DorisSampler
} // namespace Actuators

DUNE_TASK