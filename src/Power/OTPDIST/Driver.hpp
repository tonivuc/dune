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
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c", OTP_PREAMBLE, OTP_VERSION, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:getFirmwareVersion: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      resetBoard(void)
      {
        Delay::waitMsec(200);
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c", OTP_PREAMBLE, OTP_RESET, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:reset: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      setCellNumber(uint8_t number_cells)
      {
        Delay::waitMsec(200);
        if(number_cells > 15)
          number_cells = 15;
        else if(number_cells < 1)
          number_cells = 1;

        char cmd_line[32];
        char cmd_to_send[64];
        std::sprintf(cmd_line, "%c,%c,%c,%d,%c,%c", OTP_PREAMBLE, OTP_BATMAN_DATA, OTP_CELL_NUMBER, number_cells, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:setCellNumber: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      setCFactor(float c_factor)
      {
        Delay::waitMsec(200);
        if(c_factor <= 0)
          c_factor = 1;

        char cmd_line[32];
        char cmd_to_send[64];
        std::sprintf(cmd_line, "%c,%c,%c,%f,%c,%c", OTP_PREAMBLE, OTP_BATMAN_DATA, OTP_C_FACTOR, c_factor, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:setCFactor: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      sendLeakCommand(bool start_sending_msg_leak)
      {
        Delay::waitMsec(200);
        char cmd_line[16];
        char cmd_to_send[32];
        if(start_sending_msg_leak)
          std::sprintf(cmd_line, "%c,%c,%c,%c,%c", OTP_PREAMBLE, OTP_LEAK, LEAK_SEND_ON, OTP_TERMINATOR, '\0');
        else
          std::sprintf(cmd_line, "%c,%c,%c,%c,%c", OTP_PREAMBLE, OTP_LEAK, LEAK_SEND_OFF, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:sendLeakCommand: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      getSingleAcquisition(void)
      {
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c", OTP_PREAMBLE, OTP_SINGLE_ACQUISITION, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:getSingleAcquisition: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      stopAcquisition(void)
      {
        Delay::waitMsec(200);
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c", OTP_PREAMBLE, OTP_STOP_ACQUISITION, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:stopAcquisition: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      setPowerChannelState(uint8_t channel, uint8_t state)
      {
        Delay::waitMsec(200);
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c,%c,%c", OTP_PREAMBLE, OTP_SET_PO_STATE, channel, state, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:setPowerChannelState: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      getBatmanData(void)
      {
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c,%c", OTP_PREAMBLE, OTP_BATMAN_DATA, OTP_SEND_BATMAN_DATA, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->debug("Driver:getBatmanData: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      bool
      sendCommand(char* data)
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
        char bfr_uart[64];
        if (Poll::poll(*m_uart, 0.001))
        {
          int data_received_size = m_uart->read(bfr_uart, sizeof(bfr_uart));
          if(data_received_size > 0)
          {
            for(int i = 0; i < data_received_size; i++)
            {
              if(bfr_uart[i] == OTP_PREAMBLE)
              {
                m_counter_data_rx = 0;
                m_bfr_data_rx[m_counter_data_rx++] = bfr_uart[i];
              }
              else if(bfr_uart[i] == '\n')
              {
                bool state_parser = m_parser->decodeMessage(m_bfr_data_rx, m_counter_data_rx);
                resetStateNewData();
                return state_parser;
              }
              else
              {
                m_bfr_data_rx[m_counter_data_rx++] = bfr_uart[i];
              }
            }
          }
        }
        return false;
      }

      bool
      sendPowerOffCommand(void)
      {
        char cmd_line[16];
        char cmd_to_send[32];
        std::sprintf(cmd_line, "%c,%c,%c,%c", OTP_PREAMBLE, OTP_POWER_OFF_BOARD, OTP_TERMINATOR, '\0');
        char csum = calcCRC8(cmd_line, std::strlen(cmd_line));
        std::sprintf(cmd_to_send, "%s%c\n%c", cmd_line, csum, '\0');
        m_task->war("Driver:Turn off: %s", cmd_to_send);
        return sendCommand(cmd_to_send);
      }

      char
      calcCRC8(char *data_in, uint8_t data_size)
      {
        char csum = 0x00;
        uint8_t t = 0;
        while (t < data_size)
        {
          csum ^= data_in[t];
          t++;
        }
        return (csum | 0x80);
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Buffer of data rx of uart
      char m_bfr_data_rx[1024];
      //! Counter of data inside of m_bfr_data_rx
      uint16_t m_counter_data_rx;
      //! Parser for messages received
      ParserOTPDIST* m_parser;
    };
  }
}

#endif /* POWER_OTPDIST_DRIVER_HPP_INCLUDED_ */
