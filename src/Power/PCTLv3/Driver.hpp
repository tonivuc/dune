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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef POWER_PCTLv3_DRIVER_HPP_INCLUDED_
#define POWER_PCTLv3_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Power
{
  namespace PCTLv3
    {
      using DUNE_NAMESPACES;

      class DriverPCTLv3
      {
        public:

          enum
          {
              LED_GREEN     = 0,
              LED_RED       = 1,
              LED_WHITE_B   = 2,
              LED_WHITE_T   = 3
          };

          enum
          {
              CHANNEL1      = 1,
              CHANNEL2      = 2,
              CHANNEL3      = 3,
              CHANNEL4      = 4,
              CHANNEL5      = 5,
              CHANNEL6      = 6,
              CHANNEL7      = 7,
              CHANNEL8      = 8,
              CHANNEL9      = 9,
              CHANNEL10     = 10,
              CHANNEL11     = 11,
              CHANNEL12     = 12,
              CHANNEL13     = 13,
              CHANNEL14     = 14,
              CHANNEL15     = 15,
              CHANNEL16     = 16,
              CHANNEL17     = 17,
              CHANNEL18     = 18,
              CHANNEL19     = 19,
              CHANNEL20     = 20,
              CHANNEL21     = 21,
              CHANNEL22     = 22,
              CHANNEL23     = 23,
              CHANNEL24     = 24,
              CHANNEL25     = 25,
              CHANNEL26     = 26,
              CHANNEL27     = 27,
              CHANNEL28     = 28
          };

          struct PCTLv3Data
          {
            //! Firmware version
            std::string firmVersion;
            //! Voltage
            float voltage;
            //! Current
            float current;
            //! Temperature
            float temperature;
            //! Remaining capacity
            float r_cap;
            //! Full Charge Capacity
            float f_cap;
            //! Design Capacity
            float d_cap;
            //! Health
            int health;
            //! Cell Voltage
            float cell_volt[16];
            //! State of new data received
            bool state_new_data[8];
          };

          //! Serial port
          SerialPort* m_uart;
          //! Interrupt/Poll for serial port
          Poll m_poll;
          //! number of cell to read
          int m_numberCell;


          DriverPCTLv3(DUNE::Tasks::Task* task, SerialPort* uart, Poll poll, int numberCell):
            m_task(task)
          {
            m_uart = uart;
            m_poll = poll;
            m_timeout_uart = 2.0f;
            m_numberCell = numberCell;
            resetStateNewData();
            m_last_state_led = 0;
            m_state_led = 0;
            c_delay = 10.0f;
          }

          ~DriverPCTLv3(void){}

          void
          resetStateNewData(void)
          {
            for(uint8_t t = 0; t < 8; t++)
              m_pctlData.state_new_data[t] = false;
          }

          bool
          getVersionFirmware(void)
          {
            if(sendCommand("@VERS,*", "$VERS,"))
              return true;

            return false;
          }

          bool
          initPCTLv3(int cellNumber, float scale, float samples)
          {
            char textCmd[32];
            bool result = true;

            std::sprintf(textCmd, "@CELL,%d,*", cellNumber);
            if(sendCommand(textCmd, "$RSP,ACK,,*"))
            {
              std::memset(&textCmd, '\0', sizeof(textCmd));
              std::sprintf(textCmd, "@SCALE,%.2f,*", scale);
              if(!sendCommand(textCmd, "$RSP,ACK,,*"))
                result = false;
            }

            std::sprintf(textCmd, "@SAMP,%.0f,*", samples*1000);
            if (!sendCommand(textCmd, "$RSP,ACK,,*"))
                result = false;

            return result;
          }

          bool
          startAcquisition(void)
          {
            if(sendCommand("@START,*", "$RSP,ACK,,*"))
              return true;

            return false;
          }

          bool
          stopAcquisition(void)
          {
            if (sendCommand("@STOP,*", ""))
              return true;

            return false;
          }

          bool
          sendCommand(const char* cmd, const char* reply)
          {
            char cmdText[32];
            char cmdReplyText[32];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            std::sprintf(cmdReplyText, "%s%c\n", reply, (Algorithms::XORChecksum::compute((uint8_t*)reply, strlen(reply) - 1) | 0x80));
            char bfrUart[128];
            m_task->spew("Command: %s", cmdText);
            m_uart->writeString(cmdText);

            if (Poll::poll(*m_uart, m_timeout_uart))
            {
              m_uart->readString(bfrUart, sizeof(bfrUart));
              m_task->spew("Reply: %s", bfrUart);
              if (std::strcmp(bfrUart, cmdReplyText) == 0)
              {
                Delay::waitMsec(c_delay);
                return true;
              }
              else if(std::strcmp(reply, "$VERS,") == 0)
              {
                char* vrs = std::strtok(bfrUart, ",");
                vrs = std::strtok(NULL, ",");
                m_pctlData.firmVersion = vrs;
                Delay::waitMsec(c_delay);
                return true;
              }
            }

            Delay::waitMsec(c_delay);
            return false;
          }

          void
          sendCommandNoRsp(const char* cmd)
          {
            char cmdText[32];
            std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
            m_task->spew("Command (no rsp): %s", cmdText);
            m_uart->writeString(cmdText);
            //Delay::waitMsec(c_delay);
          }

          void
          turnOffAllLed(void)
          {
            char cmd[32];
            std::sprintf(cmd, "@ALED,0,*");
            sendCommandNoRsp(cmd);
          }

          void
          turnOnChannel(uint8_t channel)
          {
            char cmd[32];
            std::sprintf(cmd, "@CHAN,%d,1,*", channel);
            sendCommandNoRsp(cmd);
          }

          void
          turnOffChannel(uint8_t channel)
          {
            char cmd[32];
            std::sprintf(cmd, "@CHAN,%d,0,*", channel);
            sendCommandNoRsp(cmd);
          }

          void
          updateBufferLed(uint8_t led, bool value)
          {
            if (value)
              m_state_led |= 1 << led;
            else
              m_state_led &= ~(1 << led);
          }

          void
          updateLedState(void)
          {
            char cmd[32];
            if (m_last_state_led != m_state_led)
            {
              std::sprintf(cmd, "@SLED,%d,*", m_state_led);
              m_last_state_led = m_state_led;
              //m_task->war("LED STATE - %d", m_state_led);
              sendCommandNoRsp(cmd);
            }
          }

          bool
          haveNewData(void)
          {
            std::size_t rv = m_uart->readString(m_bfr, sizeof(m_bfr));

            if (rv <= 0)
            {
              m_task->err(DTR("I/O error"));
              return false;
            }

            try
            {
              m_bfr[strlen(m_bfr) - 3] = '\0';

              char* parameter = std::strtok(m_bfr, ",");
              if(std::strcmp(parameter, "$VOLT") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.voltage);
                m_task->debug("Volt: %.3f V", m_pctlData.voltage);
                m_pctlData.state_new_data[0] = true;
              }
              else if(std::strcmp(parameter, "$AMPE") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.current);
                m_task->debug("Ampe: %.3f A", m_pctlData.current);
                m_pctlData.state_new_data[1] = true;
              }
              else if(std::strcmp(parameter, "$TEMP") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.temperature);
                m_task->debug("Temp: %.3f C", m_pctlData.temperature);
                m_pctlData.state_new_data[2] = true;
              }
              else if(std::strcmp(parameter, "$RCAP") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.r_cap);
                m_task->debug("RCap: %.3f Ah", m_pctlData.r_cap);
                m_pctlData.state_new_data[3] = true;
              }
              else if(std::strcmp(parameter, "$FCAP") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.f_cap);
                m_task->debug("FCap: %.3f Ah", m_pctlData.f_cap);
                m_pctlData.state_new_data[4] = true;
              }
              else if(std::strcmp(parameter, "$DCAP") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%f", &m_pctlData.d_cap);
                m_task->debug("DCap: %.3f Ah", m_pctlData.d_cap);
                m_pctlData.state_new_data[5] = true;
              }
              else if (std::strcmp(parameter, "$HEAL") == 0)
              {
                parameter = std::strtok(NULL, ",");
                std::sscanf(parameter, "%d", &m_pctlData.health);
                m_task->debug("Health: %d %%", m_pctlData.health);
                m_pctlData.state_new_data[6] = true;
              }
              else if (std::strcmp(parameter, "$CELL") == 0)
              {
                parameter = std::strtok(NULL, ",");
                for(int i = 0; i < m_numberCell; i++)
                {
                  parameter = std::strtok(NULL, ",");
                  std::sscanf(parameter, "%f", &m_pctlData.cell_volt[i]);
                  m_task->debug("Cell %d: %.3f V", i+1, m_pctlData.cell_volt[i]);
                }
                m_pctlData.state_new_data[7] = true;
                m_task->debug(" ");
              }

            }
            catch(...)
            {
              m_task->err("catch error");
              return false;
            }

            bool result = true;
            for(uint8_t t = 0; t < 8; t++)
            {
              if(m_pctlData.state_new_data[t] == false)
                result = false;
            }

            return result;
          }

          std::string
          getFirmwareVersion(void)
          {
            return m_pctlData.firmVersion;
          }

          PCTLv3Data m_pctlData;

        private:

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Timeout for new data in uart
          float m_timeout_uart;
          //! Buffer of uart
          char m_bfr[64];
          //! Backup last state of leds
          int m_last_state_led;
          //! State of leds
          int m_state_led;
          //! Delay
          float c_delay;
      };
    }
}

#endif /* POWER_PCTLv3_DRIVER_HPP_INCLUDED_ */
