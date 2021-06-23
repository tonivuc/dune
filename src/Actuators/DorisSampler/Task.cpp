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
//! Ping firmware Cmd char
#define CMD_PING 'P'
//! Sample Cmd char
#define CMD_SAMPLE 'S'
//! Get firmware version Cmd char
#define CMD_VERSION 'V'

//! Cmd max send tries
#define CMD_MAX_TRIES 5
//! Cmd's answer max waiting time (s)
#define ANSWER_DELAY 2

//! Firmware's ping interval
#define PING_INTERVAL 5
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
    static const unsigned int c_max_buffer = 64;

    //! Navigation states.
    enum StateMachineStates
    {
      //! Stopped State.
      SM_STOP = 0,
      //! Moving to a GoTo Destination.
      SM_MOVING = 1,
      //! Asking Fw to initiate the Cleaning Maneuver.
      SM_CLEAN = 2,
      //! Cleaning State.
      SM_CLEANING = 3,
      //! Cleaning Done.
      SM_CLEANING_DONE = 4,
      //! Asking Fw to initiate the Samping Maneuver.
      SM_SAMPLE = 5,
      //! Sampling State.
      SM_SAMPLING = 6,
      //! Sampling Done.
      SM_SAMPLING_DONE = 7,
      //! Sampling Failed.
      SM_SAMPLING_FAILED = 8,
      //! Maneuver Done.
      SM_MANEUVER_DONE = 9,
      //! Sampler is full.
      SM_FULL = 10,
      //! Initialization state.
      SM_INIT = 99
    };

    enum BoardInitStates
    {
      //! Board Init Starting Point
      BI_START,
      //! Ask FW's version
      BI_ASK_VERSION,
      //! Get for FW's version state
      BI_GET_VERSION,
      //! Ask total num of bottles in FW
      BI_ASK_BOT_NUM,
      //! Get FW's total num of bottles
      BI_GET_BOT_NUM,
      //! Init done state
      BI_DONE,
      //! No response from FW error/stopped state
      BI_ERROR
    };

    enum FwCleaningStateOptions
    {
      CLEANING_STOP,
      CLEANING_INPUTSELECT,
      CLEANING_DISC,
      CLEANING_PUMP,
      CLEANING_FULL,
      CLEANING_EMPTYING,
      CLEANING_EMPTY,
      CLEANING_EMPTY_FAILED,
      CLEANING_DONE,
      CLEANING_FAILED
    };

    enum FwSamplingStateOptions
    {
      SAMPLING_STOP,
      SAMPLING_DONE,
      SAMPLING_FAILED,
      SAMPLING_FULLY_LOADED,
      SAMPLING_INPUTSELECT,
      SAMPLING_DISC,
      SAMPLING_PUMP,
      SAMPLING_FULL,
      SAMPLING_SAVINGUP,
      SAMPLING_SAVINGLOW,
      SAMPLING_SAVED,
      SAMPLING_CLEANING,
      SAMPLING_CLEAN,
      SAMPLING_CLEAN_FAILED
    };

    struct Arguments
    {
      //! Master Name.
      std::string master_name;
      //! Slave Cam Name.
      std::string slave_name;
      //! Load task in mode master
      bool is_master_mode;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Number of bottles to sample.
      uint8_t nr_bottles_to_sample;
      //! Type of sample.
      std::string type_of_sample;
      //! CPU Serial Command
      std::string cpu_cmd;
      //! Max number of bottles in the sampler
      uint8_t max_bottles;
    };

    struct Task : public DUNE::Tasks::Task
    {
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
      char m_msg[c_max_buffer];
      //! Command to be sent via usart
      char m_cmd[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;
      //! Serial loop timer
      uint8_t serial_timer;
      //! Send new cmd flag
      //bool m_update_cmd_FL;
      //! PathController coordinate flag
      bool m_NEAR_FL;
      //! PathController coordinate flag
      bool m_START_FL;
      //! Doris sampler full flag
      bool m_FULL_FL;
      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Board Init state
      BoardInitStates m_bi_state;
      //! Bottle count of the sampling procedure
      uint8_t m_bottle_count;
      //! Number of bottles to sample in that maneuver
      uint8_t m_nr_of_bottles_to_sample;
      //! Total bottle count
      uint8_t m_total_nr_of_bottles;
      //! Type of sample
      std::string m_type_of_sample;
      //! Command send count
      uint8_t cmd_sent_count;
      //! Run once flag
      bool m_RUN_FL;
      //! Maneuver done flag to be sent via IMC (?)
      IMC::ManeuverDone m_done;
      //! Timer used for resend the command to firmware
      Time::Counter<double> m_cmd_timer;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! WASAB's Pinger.
      Time::Counter<double> m_pinger;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : 
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        //update_cmd_FL(false),
        m_FULL_FL(false),
        m_sm_state(SM_STOP),
        m_total_nr_of_bottles(0),
        cmd_sent_count(0),
        m_RUN_FL(false)
      {
        param("Master Name", m_args.master_name)
            .description("Master Name.");

        param("Master Mode", m_args.is_master_mode)
            .description("Load task in master mode.");

        param("Slave Name", m_args.slave_name)
            .description("Slave Name.");

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
            .description("Number of bottles to sample in each spot.");

        param("Sampler - Type of Sample", m_args.type_of_sample)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_MANEUVER)
            .values(DTR_RT("None, Disc, Pump"))
            .defaultValue("None")
            .description(DTR("Type of the required samples."));

        param("Sampler - Max bottle capacity", m_args.max_bottles)
            .defaultValue("12")
            .description(DTR("Max number of bottles that the sampler carries."));

        param("Serial Manual Command", m_args.cpu_cmd)
            .defaultValue("A")
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .description("Parameter input to manually test the firmware.");

        bind<IMC::PathControlState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        //bind<IMC::LogBookEntry>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (!m_args.is_master_mode)
        {
          if (m_sm_state == SM_STOP) //To make sure params don't change mid flight
          {
            m_START_FL = true;
          }

          /*if (paramChanged(m_args.cpu_cmd))
          {
            m_update_cmd_FL = true;
            war("cpu cmd %s", m_args.cpu_cmd.c_str());
          }*/

          //update nr of bottles to sample if changed
          if (paramChanged(m_args.nr_bottles_to_sample))
          {
            m_nr_of_bottles_to_sample = m_args.nr_bottles_to_sample;
          }

          //update type of sample if changed
          if (paramChanged(m_args.type_of_sample))
          {
            m_type_of_sample = m_args.type_of_sample;
          }
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
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        if (!m_args.is_master_mode)
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
            throw RestartNeeded(e.what(), 10);
          }
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (!m_args.is_master_mode)
        {
          m_uart->flushInput();
          m_uart->flush();

          m_parse = new Parser(this);

          m_parse->set_wdog(WATCHDOG_TIME);
          m_pinger.setTop(PING_INTERVAL);
          m_cmd_timer.setTop(ANSWER_DELAY);
        }
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

      //! Send manual command if available in neptus.
      /*void
      updateCpuCommand(void)
      {
        if (m_update_cmd_FL)
        {
          std::memset(&m_msg, '\0', sizeof(m_msg));
          std::sprintf(m_msg, "$%s*", (char *)m_args.cpu_cmd.c_str());
          m_csum[0] = Algorithms::XORChecksum::compute((uint8_t *)m_msg, strlen(m_msg) - 1, 0);
          //war("%s | 0x%02x", m_msg, m_csum[0]);
          char fw_cmd[128];
          sprintf(fw_cmd, "%s%c\r\n", m_msg, m_csum[0]);
          m_uart->writeString(fw_cmd);

          m_update_cmd_FL = false;
        }
      }*/

      //! Read data sent by Doris Sampler.
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
      consume(const IMC::PathControlState *pcs)
      {
        if (!m_args.is_master_mode)
        {
          if (pcs->flags & IMC::PathControlState::FL_NEAR)
          {
            m_NEAR_FL = true;
          }
        }
      }

      void
      consume(const IMC::EstimatedState *msg)
      {
        if (!m_args.is_master_mode)
        {
          if (m_args.master_name.compare(resolveSystemId(msg->getSource())) != 0)
            return;

          m_estate = *msg;
        }
      }

      void
      consume(const IMC::VehicleState *msg)
      {
        if (!m_args.is_master_mode)
        {
          if (msg->op_mode != IMC::VehicleState::VS_MANEUVER && m_sm_state != SM_STOP && m_sm_state != SM_INIT)
          {
            if (!m_RUN_FL)
            {
              m_RUN_FL = true;
              m_sm_state = SM_STOP;
              //war("Maneuver stopped\nSend abort command");
            }
          }
        }
      }

      //! Dispatch sample info
      void
      dispatchBottleInfo(int bottleNum, std::string log_bottleStatus)
      {
        //Get coordinates in degrees from the estimated estate
        double lat = Angles::degrees(m_estate.lat);
        double lon = Angles::degrees(m_estate.lon);
        war("lat: %f | lon: %f", lat, lon);

        IMC::LogBookEntry log_entry;
        // log book entry's type
        log_entry.type = IMC::LogBookEntry::LBET_INFO;
        // log book entry's htime
        log_entry.htime = Time::Clock::getSinceEpoch();
        // log book entry's context
        std::ostringstream log_context;
        log_context << "Bottle " << bottleNum << " info.";
        log_entry.context = log_context.str();

        //Turn waterinput (type of sample) info into readable content !!THIS IS REDUNDANT, NOT SURE IF NECESSARY!!
        std::ostringstream log_sampleType;
        if (m_parse->m_dorisState.bottles->sampleType > 0)
        {
          log_sampleType << "Surface";
        }
        else if (m_parse->m_dorisState.bottles->sampleType <= 0)
        {
          log_sampleType << "Deep";
        }

        // log book entry's text
        std::ostringstream log_text;
        log_text << "Status: " << log_bottleStatus << "\n Type of Sample: " << log_sampleType.str() << "\n Latitude: " << lat << "\n Longitude: " << lon << "\n Water Temperature: " << m_parse->m_dorisState.bottles->temp << "\n Wind Speed: " << 12.3 << "\n Wind Direction: " << 45.6;
        log_entry.text = log_text.str();

        // war("%s", log_entry.text);

        Delay::wait(0.2);

        dispatch(log_entry, DF_LOOP_BACK);
      }

      void
      sendCommand(char cmd)
      {
        // prepare message string
        std::memset(&m_msg, '\0', sizeof(m_msg));
        switch (cmd)
        {
        case CMD_ABORT:
          std::sprintf(m_msg, "%c", cmd);
          break;
        case CMD_SET_FW_BOT:
          std::sprintf(m_msg, "%c,%d", cmd, m_total_nr_of_bottles);
          break;
        case CMD_CLEAN:
          std::sprintf(m_msg, "%c", cmd);
          break;
        case CMD_GET_FW_BOT:
          std::sprintf(m_msg, "%c", cmd);
          break;
        case CMD_PING:
          std::sprintf(m_msg, "%c", cmd);
          break;
        case CMD_SAMPLE:
          int type_aux;
          if (std::strcmp(m_args.type_of_sample.c_str(), "Disc") == 0)
          {
            type_aux = 0;
          }
          else if (std::strcmp(m_args.type_of_sample.c_str(), "Pump") == 0)
          {
            type_aux = 1;
          }
          else
          {
            type_aux = 0;
          }
          std::sprintf(m_msg, "%c,%d", cmd, type_aux);
          break;
        case CMD_VERSION:
          std::sprintf(m_msg, "%c", cmd);
          break;
        }

        std::sprintf(m_msg, "%s*", m_msg);
        m_csum[0] = Algorithms::XORChecksum::compute((uint8_t *)m_msg, strlen(m_msg) - 1, 0);
        sprintf(m_cmd, "$%s%c\r\n", m_msg, m_csum[0]);
        m_parse->m_msg_receipt = 0;
        m_uart->writeString(m_cmd);
      }

      bool
      initBoard()
      {
        switch (m_bi_state)
        {
        case BI_START:
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_SYNCING);
          m_bi_state = BI_ASK_VERSION;
          break;

        case BI_ASK_VERSION:
          sendCommand(CMD_VERSION);
          m_cmd_timer.reset();
          m_parse->m_msg_receipt = 0;
          cmd_sent_count++;
          m_bi_state = BI_GET_VERSION;
          break;

        case BI_GET_VERSION:
          //if msg with fw's version received
          if (m_parse->m_msg_receipt == 1 && m_parse->m_dorisState.fwVersion != 0.0)
          {
            //reset vars, dispatch fw, move state
            m_parse->m_msg_receipt = 0;
            cmd_sent_count = 0;
            inf("WASAB fw v%.1f", m_parse->m_dorisState.fwVersion);
            m_bi_state = BI_ASK_BOT_NUM;
          }
          else if (m_cmd_timer.overflow()) //check if time to answer passed
          {
            war("WASAB not answered DUNE's command.");
            //if less than 5 tries
            if (cmd_sent_count < 5)
            {
              //resend command
              m_bi_state = BI_ASK_VERSION;
            }
            else //if tried 5 times give error and go to error state
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
              //m_bi_state = BI_ERROR;
              return true;
            }
          }
          break;
        case BI_ASK_BOT_NUM:
          sendCommand(CMD_GET_FW_BOT);
          m_cmd_timer.reset();
          m_parse->m_msg_receipt = 0;
          cmd_sent_count++;
          m_bi_state = BI_GET_BOT_NUM;
          break;
        case BI_GET_BOT_NUM:
          //if msg received
          if (m_parse->m_msg_receipt == 1)
          {
            m_parse->m_msg_receipt = 0;
            cmd_sent_count = 0;
            m_total_nr_of_bottles = m_parse->m_dorisState.totalNumberOfBottles;
            war("FW's nr of bottles = %d", m_parse->m_dorisState.totalNumberOfBottles);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            m_bi_state = BI_DONE;
          }
          else if (m_cmd_timer.overflow()) //check if time to answer passed
          {
            war("WASAB not returned number of bottles.");
            //if less than 5 tries
            if (cmd_sent_count < 5)
            {
              //resend command
              m_bi_state = BI_ASK_BOT_NUM;
            }
            else //if tried 5 times give error and go to error state
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
              m_bi_state = BI_ERROR;
              return true;
            }
            break;
          case BI_DONE:
            m_sm_state = SM_STOP;
            break;
          }
        }
        return false;
      }

      //! Main state machine
      void
      updateStateMachine(void)
      {
        switch (m_sm_state)
        {
        case SM_INIT:
          if (m_bi_state == BI_DONE)
          {
            m_sm_state = SM_STOP;
          }
          break;
        case SM_STOP:
          if (m_START_FL)
          {
            m_sm_state = SM_MOVING;
            war("SM: Moving");
            m_START_FL = false;
            m_RUN_FL = false;
            m_bottle_count = 0;
          }
          break;

        case SM_MOVING:
          if (m_NEAR_FL)
          {
            if (m_nr_of_bottles_to_sample > 0 && std::strcmp(m_type_of_sample.c_str(), "None") != 0 && !m_FULL_FL) //check if it still goes to the next point or stops completely...
            {
              sendCommand(CMD_CLEAN);
              war("CMD SENT = Clean");
              m_cmd_timer.reset();
              m_sm_state = SM_CLEAN;
            }
            else
            {
              m_sm_state = SM_MANEUVER_DONE;
            }
            m_NEAR_FL = false;
          }
          break;

        case SM_CLEAN:
          if (m_parse->m_dorisState.cleanState == CLEANING_DISC || m_parse->m_dorisState.cleanState == CLEANING_PUMP)
          {
            war("SM: Cleaning");
            //temporary
            m_args.cpu_cmd = "";
            m_sm_state = SM_CLEANING;
            cmd_sent_count = 0;
            //m_parse->m_dorisState.msg_receipt = 0;
          }
          else if (/*m_parse->m_dorisState.msg_receipt == 0 &&*/ m_cmd_timer.overflow())
          {
            if (cmd_sent_count < 5)
            {
              sendCommand(CMD_CLEAN);
              cmd_sent_count++;
              m_cmd_timer.reset();
            }
            else
            {
              war("TIMEOUT! DO SOMETHING!");
              cmd_sent_count = 0;
              m_sm_state = SM_STOP;
            }
          }
          break;

        case SM_CLEANING:
          if (m_parse->m_dorisState.cleanState == CLEANING_DONE)
          {
            war("SM: Cleaning done.");
            //temporary
            m_args.cpu_cmd = "";
            m_sm_state = SM_CLEANING_DONE;
          } /*else if (m_parse->m_dorisState.cleanState == CLEANING_FAILED){
            m_sm_state = SM_CLEANING_FAILED;
          }*/
          break;

        case SM_CLEANING_DONE:
          war("CMD SENT = Sample");
          sendCommand(CMD_SAMPLE);
          m_cmd_timer.reset();
          m_sm_state = SM_SAMPLE;
          break;

        case SM_SAMPLE:
          if (m_parse->m_dorisState.sampleState == SAMPLING_PUMP || m_parse->m_dorisState.sampleState == SAMPLING_DISC)
          {
            //temporary
            m_args.cpu_cmd = "";
            war("sampling");
            m_sm_state = SM_SAMPLING;
            cmd_sent_count = 0;
            //m_parse->m_dorisState.msg_receipt = 0;
          }
          else if (m_cmd_timer.overflow())
          {
            if (cmd_sent_count < 5)
            {
              sendCommand(CMD_SAMPLE);
              cmd_sent_count++;
              m_cmd_timer.reset();
            }
            else
            {
              war("TIMEOUT! DO SOMETHING!");
              cmd_sent_count = 0;
              m_sm_state = SM_STOP;
            }
          }
          break;

        case SM_SAMPLING:
          if (m_parse->m_dorisState.sampleState == SAMPLING_DONE)
          {
            war("SM: Sample done");
            //temporary
            m_args.cpu_cmd = "";

            m_sm_state = SM_SAMPLING_DONE;
            m_bottle_count++;
            m_total_nr_of_bottles++;
          }
          else if (m_parse->m_dorisState.sampleState == SAMPLING_FAILED)
          {
            war("SM: Sample failed");
            //temporary
            m_args.cpu_cmd = "";
            m_sm_state = SM_SAMPLING_FAILED;
            m_total_nr_of_bottles++;
          }
          break;

        case SM_SAMPLING_DONE:
          //update logBook with sampled bottle info
          dispatchBottleInfo(m_total_nr_of_bottles, SAMPLING_OK);
          war("bottle_count: %d | nr_bottles_to_sample: %d\ntotal_nr_of_bottles: %d | max_bottles: %d", m_bottle_count, m_args.nr_bottles_to_sample, m_total_nr_of_bottles, m_args.max_bottles);
          // check what to do next
          if (m_total_nr_of_bottles > m_args.max_bottles)
          {
            m_sm_state = SM_FULL;
          }
          if (m_bottle_count < m_args.nr_bottles_to_sample)
          {
            m_sm_state = SM_SAMPLE;
            war("SM: Sample another bottle");
          }
          else if (m_bottle_count >= m_args.nr_bottles_to_sample)
          {
            m_sm_state = SM_MANEUVER_DONE;
          }
          break;

        case SM_SAMPLING_FAILED:
          // update logBook with failed sample info
          dispatchBottleInfo(m_total_nr_of_bottles, SAMPLING_FAIL);
          // check what to do next
          if (m_total_nr_of_bottles >= m_args.max_bottles)
          {
            m_sm_state = SM_FULL;
          }
          else
          {
            m_sm_state = SM_SAMPLE;
            war("retry sample");
          }
          break;

        case SM_MANEUVER_DONE:
          m_START_FL = false;
          dispatch(m_done);
          //war("dispatch: maneuver done");
          m_sm_state = SM_STOP;
          break;

        case SM_FULL:
          war("FULL");
          dispatch(m_done);
          m_sm_state = SM_STOP;
          m_FULL_FL = true;
          break;
        }
      }

      //! Continuously check for new data
      void
      checkNewBottleData(void)
      {
        if (m_parse->m_dorisState.bottles->newData)
        {
          dispatchBottleInfo(m_total_nr_of_bottles, "OK");
          m_parse->clear_flags();
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!m_args.is_master_mode)
          {
            if (m_sm_state == SM_INIT)
            {
              if (initBoard())
              {
                m_bi_state = BI_START;
                setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
                throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
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
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
            }
            else if (m_pinger.overflow())
            {
              sendCommand(CMD_PING);
              m_pinger.reset();
            }

            //Check if new manual command is available.
            //updateCpuCommand();

            //Update state machines.
            //updateStateMachine();
          }

          waitForMessages(1.0);
        }
      }
    }; //struct task
  }    // namespace DorisSampler
} // namespace Actuators

DUNE_TASK