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

#ifndef POWER_OTPDIST_PARSER_HPP_INCLUDED_
#define POWER_OTPDIST_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Commands.hpp"
#include "../BATMANv2/Driver.hpp"

namespace Power
{
  namespace OTPDIST
  {
    using DUNE_NAMESPACES;

    class ParserOTPDIST
    {
      public:
        struct OTPDISTServorData
        {
          //! Voltage
          float voltage;
          //! Current
          float current;
          //! New data input
          bool new_data;
        };
        struct OTPDISTPowerData
        {
          //! Voltage
          float voltage;
          //! Current
          float current;
          //! New data input
          bool new_data;
          //! Struct for servos
          struct OTPDISTServorData servo_power_data[4];
        };
        struct OTPDISTData
        {
          //! Firmware version
          std::string firm_version;
          //! Leak States
          bool leak_states[4];
          //! State of Switch
          bool switch_on;
          //! Storage for power data received
          struct OTPDISTPowerData power_data[18];
        };

        ParserOTPDIST(DUNE::Tasks::Task* task):
        m_task(task)
        {
          for(int i = 0; i < 4; i++)
            m_otpdistData.leak_states[i] = false;

          for(int t = 0; t < 8; t++)
            m_batManData.state_new_data[t] = false;

          m_otpdistData.switch_on = false;
          m_new_data_leak = false;
        }

        ~ParserOTPDIST(void){}

        bool
        decodeMessage(char* data_in, u_int16_t data_in_size)
        {
          if(data_in_size >= 3)
          {
            if(checkCSUMOfMessage(data_in))
            {
              char execute_cmd;
              float voltage, current;
              char channel;
              int servo_id;
              char batman_command;
              std::sscanf(data_in, "$,%c,", &execute_cmd);
              switch (execute_cmd)
              {
                case OTP_ACK:
                  m_task->debug("Received ACK");
                  return true;
                  break;

                case OTP_NACK:
                  m_task->debug("Received NACK");
                  return false;
                  break;

                case OTP_VERSION:
                  m_otpdistData.firm_version = getTextBlockBySplit(data_in, ',', 2);
                  m_task->debug("Parser:Version: %s", m_otpdistData.firm_version.c_str());
                  return true;
                  break;

                case OTP_LEAK:
                  for(uint8_t i = 2; i < 6; i++)
                  {
                    char state_leak[8];
                    std::sprintf(state_leak, "%s", getTextBlockBySplit(data_in, ',', i).c_str());
                    if(state_leak[0] == LEAK_ON)
                      m_otpdistData.leak_states[i - 2] = true;
                    else
                      m_otpdistData.leak_states[i - 2] = false;
                  }
                  m_new_data_leak = true;
                  return true;
                  break;

                case OTP_POWER_DATA:
                  std::sscanf(data_in, "$,P,%c,%f,%f,#,", &channel, &voltage, &current);
                  m_task->debug("Parser:POWER: channel: %d, %f (v) | %f (mA)", channel - 0x30 + 1, voltage, current);
                  m_otpdistData.power_data[(channel - 0x30)].voltage = voltage;
                  m_otpdistData.power_data[(channel - 0x30)].current = current;
                  m_otpdistData.power_data[(channel - 0x30)].new_data = true;
                  return true;
                  break;

                case OTP_POWER_DATA_SERVO:
                  std::sscanf(data_in, "$,p,%d,%f,%f,#,", &servo_id, &voltage, &current);
                  m_task->debug("Parser:POWER SERVO: channel: %d, %f (v) | %f (mA)", servo_id, voltage, current);
                  m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo_id - 1].voltage = voltage;
                  m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo_id - 1].current = current;
                  m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo_id - 1].new_data = true;
                  return true;
                  break;

                case OTP_SWITCH_ON:
                  if(!m_otpdistData.switch_on)
                    m_otpdistData.switch_on = true;

                  return true;
                  break;

                case OTP_SWITCH_OFF:
                  if(m_otpdistData.switch_on)
                    m_otpdistData.switch_on = false;

                  return true;
                  break;

                case OTP_BATMAN_DATA:
                  std::sscanf(data_in, "$,B,%c,", &batman_command);
                  char batman_parameter;
                  int number_info_cells;
                  switch (batman_command)
                  {
                    case OTP_BATMAN_DATA_VALUES:
                      std::sscanf(data_in, "$,B,v,%c,", &batman_parameter);
                      switch (batman_parameter)
                      {
                        case 'V':
                          std::sscanf(data_in, "$,B,v,V,%f,#", &m_batManData.voltage);
                          m_task->debug("Volt: %.3f V", m_batManData.voltage);
                          m_batManData.state_new_data[0] = true;
                          return true;
                          break;

                        case 'A':
                          std::sscanf(data_in, "$,B,v,A,%f,#", &m_batManData.current);
                          m_task->debug("Ampe: %.3f A", m_batManData.current);
                          m_batManData.state_new_data[1] = true;
                          return true;
                          break;

                        case 'T':
                          std::sscanf(data_in, "$,B,v,T,%f,#", &m_batManData.temperature);
                          m_task->debug("Temp: %.3f C", m_batManData.temperature);
                          m_batManData.state_new_data[2] = true;
                          return true;
                          break;

                        case 'R':
                          std::sscanf(data_in, "$,B,v,R,%f,#", &m_batManData.r_cap);
                          m_task->debug("RCap: %.3f Ah", m_batManData.r_cap);
                          m_batManData.state_new_data[3] = true;
                          return true;
                          break;

                        case 'F':
                          std::sscanf(data_in, "$,B,v,F,%f,#", &m_batManData.f_cap);
                          m_task->debug("FCap: %.3f Ah", m_batManData.f_cap);
                          m_batManData.state_new_data[4] = true;
                          return true;
                          break;

                        case 'D':
                          std::sscanf(data_in, "$,B,v,D,%f,#", &m_batManData.d_cap);
                          m_task->debug("DCap: %.3f Ah", m_batManData.d_cap);
                          m_batManData.state_new_data[5] = true;
                          return true;
                          break;

                        case 'H':
                          std::sscanf(data_in, "$,B,v,H,%d,#", &m_batManData.health);
                          m_task->debug("Health: %d %%", m_batManData.health);
                          m_batManData.state_new_data[6] = true;
                          return true;
                          break;

                        case 'B':
                          std::sscanf(data_in, "$,B,v,B,%f,%f,#", &m_batManData.time_empty, &m_batManData.time_full);
                          if (m_batManData.time_empty == 65535)
                            m_batManData.time_empty = -1;
                          if (m_batManData.time_full == 65535)
                            m_batManData.time_full = -1;
                          m_task->debug("Average Time to Empty: %.0f min", m_batManData.time_empty);
                          m_task->debug("Average Time to Full: %.0f min", m_batManData.time_full);
                          m_batManData.state_new_data[8] = true;
                          return true;
                          break;

                        default:
                          m_task->debug("Parser:New message %s",  data_in);
                          break;
                      }
                      break;

                    case OTP_CELL_DATA:
                      std::sscanf(data_in, "$,B,D,%d,", &number_info_cells);
                      for(int i = 0; i < number_info_cells; i++)
                      {
                        m_batManData.cell_volt[i] = std::atof(getTextBlockBySplit(data_in, ',', i + 4).c_str());
                        m_task->debug("Cell %d: %.3f V", i+1, m_batManData.cell_volt[i]);
                      }
                      m_batManData.state_new_data[7] = true;
                      return true;
                      break;

                    default:
                      m_task->debug("Parser:New message %s",  data_in);
                      break;
                  }
                  break;

                default:
                  m_task->debug("Parser:New message %s",  data_in);
                  break;
              }
            }
          }
          return false;
        }

        std::string
        getTextBlockBySplit(char *input, char split_c, uint8_t block_id)
        {
          std::ostringstream firmware_version_decode;
          char version[64][256];
          uint8_t counter_c = 0;
          uint8_t counter_l = 0;
          for(uint16_t i = 0; i < std::strlen(input); i++)
          {
            if(input[i] != split_c)
            {
              version[counter_l][counter_c++] = input[i];
            }
            else
            {
              version[counter_l][counter_c] = '\0';
              counter_l++;
              counter_c = 0;
            }
          }
          for(uint16_t t = 0; t < std::strlen(version[block_id]); t++)
          {
            firmware_version_decode << version[block_id][t];
          }
          return firmware_version_decode.str();
        }

        bool
        checkCSUMOfMessage(char *input_data)
        {
          uint8_t size_rc = strlen(input_data);;
          char csum = calcCRC8(input_data, size_rc - 1);
          bool csum_ok = false;
          csum_ok = (csum == input_data[size_rc - 1]);
          m_task->debug("Parser:New message CSUM %s (%s | %d) (R:%c | C:%c)", csum_ok? "OK" : "FAIL", input_data, size_rc, csum, input_data[size_rc - 1]);
          if(!csum_ok)
            m_task->debug("Parser: Wrong CSUM");
          return csum_ok;
        }

        uint8_t
        leakDetected(uint8_t leak_id)
        {
          if(m_otpdistData.leak_states[leak_id])
          {
            m_otpdistData.leak_states[leak_id] = false;
            return true;
          }
          return false;
        }

        bool
        isSwitchOn(void)
        {
          return m_otpdistData.switch_on;
        }

        std::string
        getFirmwareVersionInfo(void)
        {
          return m_otpdistData.firm_version;
        }

        bool
        newDataLeak(void)
        {
          if(m_new_data_leak)
          {
            m_new_data_leak = false;
            return true;
          }
          return false;
        }

        void
        clearNewData(uint8_t channel)
        {
          m_otpdistData.power_data[channel].new_data = false;
        }

        void
        clearNewDataServo(uint8_t servo)
        {
          m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo].new_data = false;
        }

        bool
        newPowerInfo(uint8_t channel)
        {
          return m_otpdistData.power_data[channel].new_data;
        }

        bool
        newPowerInfoServo(uint8_t servo)
        {
          return m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo].new_data;
        }

        void
        getDataPower(uint8_t channel, float* voltage, float* current)
        {
          voltage[0] = m_otpdistData.power_data[channel].voltage;
          current[0] = m_otpdistData.power_data[channel].current;
        }

        void
        getDataPowerServo(uint8_t servo, float* voltage, float* current)
        {
          voltage[0] = m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo].voltage;
          current[0] = m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[servo].current;
        }

        char
        calcCRC8(char *data_in, uint8_t data_size)
        {
          char csum = 0x00;
          uint8_t t = 0;
          while(t < data_size)
          {
            csum ^= data_in[t];
            t++;
          }
          return (csum | 0x80);
        }

        OTPDISTData m_otpdistData;
        BATMANv2::DriverBatMan::BatManData m_batManData;

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Flag to control new leak info
        bool m_new_data_leak;

    };
  }
}

#endif /* POWER_OTPDIST_PARSER_HPP_INCLUDED_ */
