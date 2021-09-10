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
        m_timeout_uart = 0.01f;
        m_parser = parser;
        resetStateNewData();
      }

      ~DriverOTPDIST(void) {}

      void
      resetStateNewData(void)
      {
        //for(uint8_t t = 0; t < 8; t++)
        //  m_otpdistData.state_new_data[t] = false;
      }

      bool
      getFirmwareVersion(void)
      {
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
        u_int8_t cmd_line[8];
        cmd_line[0] = OTP_PREAMBLE;
        cmd_line[1] = OTP_RESET;
        cmd_line[2] = OTP_TERMINATOR;
        cmd_line[3] = '\0';
        m_task->debug("Driver:reset: %02x%02x%02x", cmd_line[0], cmd_line[1], cmd_line[2]);
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
      sendCommand(const u_int8_t* data)
      {
        u_int8_t bfr_uart[128];
        u_int8_t final_message[256];
        m_uart->flush();
        m_uart->writeString((char*)data);
        m_wdog_com.setTop(m_timeout_uart*2);
        m_wdog_com.reset();
        int rx_counter = 0;
        int cnt_message_part = 0;
        while (!m_wdog_com.overflow())
        {
          if (Poll::poll(*m_uart, m_timeout_uart))
          {
            int data_received = m_uart->read(bfr_uart, sizeof((char *)bfr_uart));
            //m_task->spew("rec: %d", data_received);
            //m_parser->spewArray(bfr_uart, data_received);
            cnt_message_part = 0;
            for (int i = rx_counter; i < data_received + rx_counter; i++)
            {
              final_message[i] = bfr_uart[cnt_message_part++];
            }
            rx_counter = rx_counter + data_received;
            m_wdog_com.reset();
          }
        }
        return m_parser->decodeMessage(final_message, rx_counter);
      }

      bool
      haveNewData(void)
      {
        u_int8_t bfr_uart[128];
        u_int8_t final_message[256];
        m_wdog_com.setTop(m_timeout_uart);
        m_wdog_com.reset();
        int rx_counter = 0;
        int cnt_message_part = 0;
        while (!m_wdog_com.overflow())
        {
          if (Poll::poll(*m_uart, 0.0001))
          {
            int data_received = m_uart->read(bfr_uart, sizeof((char *)bfr_uart));
            cnt_message_part = 0;
            for (int i = rx_counter; i < data_received + rx_counter; i++)
            {
              final_message[i] = bfr_uart[cnt_message_part++];
            }
            rx_counter = rx_counter + data_received;
            m_wdog_com.reset();
          }
        }
        return m_parser->decodeMessage(final_message, rx_counter);
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
      //! Timeout for new data in uart
      float m_timeout_uart;
      //! Buffer of uart
      char bfr[64];
      //! Watchdog for serial com
      Counter<double> m_wdog_com;
      //! Parser for messages received
      ParserOTPDIST* m_parser;
    };
  }
}

#endif /* POWER_OTPDIST_DRIVER_HPP_INCLUDED_ */
