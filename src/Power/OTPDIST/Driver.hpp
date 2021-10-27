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

#ifndef POWER_OTPDIST_DRIVER_HPP_INCLUDED_
#define POWER_OTPDIST_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Parser.hpp"
#include "Commands.hpp"

namespace Power
{
  namespace OTPDIST
  {
    using DUNE_NAMESPACES;

    class DriverOTPDIST
    {
    public:
      //! Serial port
      SerialPort *m_uart;
      //! Interrupt/Poll for serial port
      Poll m_poll;

      DriverOTPDIST(DUNE::Tasks::Task* task, SerialPort* uart, Poll poll, ParserOTPDIST* parser):
      m_task(task)
      {
        m_uart = uart;
        m_poll = poll;
        m_parser = parser;
        resetStateNewData();
      }

      ~DriverOTPDIST(void) {}

      void
      resetStateNewData(void)
      {
        m_counter_data_rx = 0;
        std::memset(&m_bfr_data_rx, '\0', sizeof(m_bfr_data_rx));
      }

      bool
      getFirmwareVersion(void)
      {
        Delay::waitMsec(200);
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_VERSION;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->debug("Driver:getFirmwareVersion: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
        return sendCommand(cmd_line);
      }

      void
      resetBoard(void)
      {
        Delay::waitMsec(200);
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_RESET;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->war("Driver:reset: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
        sendCommand(cmd_line);
      }

      bool
      initOTPDIST(void)
      {
        /*char textCmd[32];
            std::sprintf(textCmd, "@CELL,%d,*", cellNumber);
            if(sendCommand(textCmd, "$RSP,ACK,,*"))
            {
              std::memset(&textCmd, '\0', sizeof(textCmd));
              std::sprintf(textCmd, "@SCALE,%.2f,*", scale);
              if(sendCommand(textCmd, "$RSP,ACK,,*"))
                return true;
            }*/

        return false;
      }

      bool
      setCellNumber(uint8_t number_cells)
      {
        Delay::waitMsec(200);
        if(number_cells > 15)
          number_cells = 15;
        else if(number_cells < 1)
          number_cells = 1;
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_BATMAN_DATA;
        cmd_line[2] = OTP_CELL_NUMBER;
        cmd_line[3] = number_cells;
        cmd_line[4] = OTP_TERMINATOR;
        cmd_line[5] = '\0';
        m_task->debug("Driver:setCellNumber: %02x%02x%02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2], cmd_line[3], cmd_line[4]);
        return sendCommand(cmd_line);
      }

      bool
      sendLeakCommand(void)
      {
        Delay::waitMsec(200);
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_LEAK;
        cmd_line[2] = LEAK_SEND_ON;
        cmd_line[3] = OTP_TERMINATOR;
        cmd_line[4] = '\0';
        m_task->debug("Driver:sendLeakCommand: %02x%02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2], cmd_line[3]);
        return sendCommand(cmd_line);
      }

      bool
      startAcquisition(void)
      {
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_START_ACQUISITION;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->debug("Driver:startAcquisition: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
        return sendCommand(cmd_line);
      }

      bool
      getSingleAcquisition(void)
      {
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_SINGLE_ACQUISITION;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->debug("Driver:getSingleAcquisition: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
        return sendCommand(cmd_line);
      }

      bool
      stopAcquisition(void)
      {
        Delay::waitMsec(200);
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_STOP_ACQUISITION;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->debug("Driver:stopAcquisition: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
        return sendCommand(cmd_line);
      }

      bool
      setPowerChannelState(uint8_t channel, uint8_t state)
      {
        Delay::waitMsec(200);
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_SET_PO_STATE;
        cmd_line[2] = channel;
        cmd_line[3] = state;
        cmd_line[4] = OTP_TERMINATOR;
        cmd_line[5] = '\0';
        m_task->debug("Driver:setPowerChannelState: %02x%02x%02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2], cmd_line[3], cmd_line[4]);
        return sendCommand(cmd_line);
      }

      bool
      sendCommand(u_int8_t* data)
      {
        m_uart->flush();
        resetStateNewData();
        m_uart->writeString((char*)data);
        Counter<double> m_wdog_com;
        m_wdog_com.setTop(0.5);
        bool cmd_ok = false;
        while (!m_wdog_com.overflow() && !cmd_ok)
        {
          cmd_ok = haveNewData();
        }
        if(cmd_ok)
          return true;
        else
          return false;
      }

      bool
      haveNewData(void)
      {
        uint8_t bfr_uart[64];
        if (Poll::poll(*m_uart, 0.01))
        {
          int data_received_size = m_uart->read(bfr_uart, sizeof((char *)bfr_uart));
          if(data_received_size > 0)
          {
            for(int i = 0; i < data_received_size; i++)
            {
              m_bfr_data_rx[m_counter_data_rx++] = bfr_uart[i];
            }
          }
        }
        else
        {
          if(m_counter_data_rx > 0)
          {
            bool state_parser = m_parser->decodeMessage(m_bfr_data_rx, m_counter_data_rx);
            resetStateNewData();
            return state_parser;
          }
        }
        return false;
      }

      void
      sendPowerOffCommand(void)
      {
        u_int8_t cmd_line[16];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_SET_PO_STATE;
        cmd_line[2] = 0x42;
        cmd_line[3] = OTP_TURN_OFF;
        cmd_line[4] = OTP_TERMINATOR;
        cmd_line[5] = '\0';
        m_task->debug("Driver:Turn off: %02x%02x%02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2], cmd_line[3], cmd_line[4]);
        sendCommand(cmd_line);
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Buffer of data rx of uart
      uint8_t m_bfr_data_rx[1024];
      //! Counter of data inside of m_bfr_data_rx
      uint16_t m_counter_data_rx;
      //! Parser for messages received
      ParserOTPDIST* m_parser;
    };
  }
}

#endif /* POWER_OTPDIST_DRIVER_HPP_INCLUDED_ */
