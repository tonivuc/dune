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

          m_otpdistData.switch_on = false;
          m_new_data_leak = false;
        }

        ~ParserOTPDIST(void){}

        bool
        decodeMessage(u_int8_t* data_in, u_int16_t data_in_size)
        {
          //spewArray(data_in, data_in_size);
          if(data_in_size >= 3)
          {
            //m_task->spew("data in: %d", data_in_size);
            //spewArray(data_in, data_in_size);
            if(data_in[0] == OTP_PREAMBLE)
            {
              if(data_in[1] == OTP_VERSION)
              {
                int data_payload_size = data_in[2];
                char byte_data_version[64];
                std::ostringstream firmware_version_decode;
                for(u_int8_t i = 3; i < data_payload_size + 3; i++)
                {
                  firmware_version_decode << data_in[i];
                  byte_data_version[i-3] = data_in[i];
                }
                uint8_t csum_rec = data_in[data_payload_size + 3];
                uint8_t csum_calc = calcCRC8(byte_data_version, data_payload_size);
                if(csum_calc == csum_rec)
                {
                  m_otpdistData.firm_version = firmware_version_decode.str();
                  m_task->debug("Parser:Version: %s", m_otpdistData.firm_version.c_str());
                  return true;
                }
                else
                {
                  m_task->war("Parser:Version:Wrong CSUM (rec: %02x | cal: %02x)", csum_rec, csum_calc);
                  return false;
                }
              }
              else if(data_in[1] == OTP_SET_PO_STATE)
              {
                if(data_in[4] == OTP_ACK)
                  return true;
                else
                  return false;
              }
              else if(data_in[1] == OTP_LEAK)
              {
                for(uint8_t i = 2; i < (4 + 2); i++)
                {
                  if(data_in[i] == LEAK_ON)
                    m_otpdistData.leak_states[i - 2] = true;
                  else
                    m_otpdistData.leak_states[i - 2] = false;
                }
                m_new_data_leak = true;
                return true;
              }
              else if(data_in[1] == OTP_SWITCH_ON && !m_otpdistData.switch_on)
              {
                m_otpdistData.switch_on = true;
                return true;
              }
              else if(data_in[1] == OTP_SWITCH_OFF && m_otpdistData.switch_on)
              {
                m_otpdistData.switch_on = false;
                return true;
              }
              else if(data_in[1] == OTP_POWER_DATA)
              {
                if(data_in[2] != PO_CH8)
                {
                  uint8_t csum_rec = data_in[11];
                  uint8_t csum_calc = calcCRC8((char*)data_in, 11);
                  if(csum_rec == csum_calc)
                  {
                    uint8_t channel = data_in[2];
                    uint8_t b_v[] = {data_in[3], data_in[4], data_in[5], data_in[6]};
                    uint8_t b_c[] = {data_in[7], data_in[8], data_in[9], data_in[10]};
                    float v, c;
                    std::memcpy(&v, &b_v, sizeof(v));
                    std::memcpy(&c, &b_c, sizeof(c));
                    m_task->debug("Parser:POWER: channel: %d, %f (v) | %f (mA)", channel - 0x30 + 1, v, c);
                    m_otpdistData.power_data[(channel - 0x30)].voltage = v;
                    m_otpdistData.power_data[(channel - 0x30)].current = c;
                    m_otpdistData.power_data[(channel - 0x30)].new_data = true;
                    return true;
                  }
                  else
                  {
                    m_task->debug("Parser:Power:Wrong CSUM (rec: %02x | cal: %02x)", csum_rec, csum_calc);
                    return false;
                  }
                }
                else
                {
                  uint8_t csum_rec = data_in[35];
                  uint8_t csum_calc = calcCRC8((char*)data_in, 35);
                  if(csum_rec == csum_calc)
                  {
                    uint8_t s1_v[] = {data_in[3], data_in[4], data_in[5], data_in[6]};
                    uint8_t s1_c[] = {data_in[7], data_in[8], data_in[9], data_in[10]};
                    uint8_t s2_v[] = {data_in[11], data_in[12], data_in[13], data_in[14]};
                    uint8_t s2_c[] = {data_in[15], data_in[16], data_in[17], data_in[18]};
                    uint8_t s3_v[] = {data_in[19], data_in[20], data_in[21], data_in[22]};
                    uint8_t s3_c[] = {data_in[23], data_in[24], data_in[25], data_in[26]};
                    uint8_t s4_v[] = {data_in[27], data_in[28], data_in[29], data_in[30]};
                    uint8_t s4_c[] = {data_in[31], data_in[32], data_in[33], data_in[34]};
                    float v1, c1, v2, c2, v3, c3, v4, c4;
                    std::memcpy(&v1, &s1_v, sizeof(v1));
                    std::memcpy(&c1, &s1_c, sizeof(c1));
                    std::memcpy(&v2, &s2_v, sizeof(v2));
                    std::memcpy(&c2, &s2_c, sizeof(c2));
                    std::memcpy(&v3, &s3_v, sizeof(v3));
                    std::memcpy(&c3, &s3_c, sizeof(c3));
                    std::memcpy(&v4, &s4_v, sizeof(v4));
                    std::memcpy(&c4, &s4_c, sizeof(c4));
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[0].voltage = v1;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[0].current = c1;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[0].new_data = true;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[1].voltage = v2;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[1].current = c2;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[1].new_data = true;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[2].voltage = v3;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[2].current = c3;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[2].new_data = true;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[3].voltage = v4;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[3].current = c4;
                    m_otpdistData.power_data[(PO_CH8 - 0x30)].servo_power_data[3].new_data = true;
                    m_task->debug("Parser:POWER: channel: %d : SERVO 1, %f (v) | %f (mA)", PO_CH8 - 0x30, v1, c1);
                    m_task->debug("Parser:POWER: channel: %d : SERVO 2, %f (v) | %f (mA)", PO_CH8 - 0x30, v2, c2);
                    m_task->debug("Parser:POWER: channel: %d : SERVO 3, %f (v) | %f (mA)", PO_CH8 - 0x30, v3, c3);
                    m_task->debug("Parser:POWER: channel: %d : SERVO 4, %f (v) | %f (mA)", PO_CH8 - 0x30, v4, c4);
                    return true;
                  }
                  else
                  {
                    m_task->debug("Parser:Power:Wrong CSUM (rec: %02x | cal: %02x)", csum_rec, csum_calc);
                    return false;
                  }
                }
              }
              /*else
              {
                m_task->spew("data in: %d", data_in_size);
                spewArray(data_in, data_in_size);
                return false;
              }*/
            }
          }
          return false;
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

        void
        spewArray(uint8_t* data, uint16_t data_size)
        {
          for(int i = 0; i < data_size; i++)
            m_task->spew("%02x | %c", data[i], data[i]);
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

        uint8_t
        calcCRC8(char *data_in, uint8_t data_size)
        {
          uint8_t csum = 0x00;
          uint8_t t = 0;
          while(t < data_size)
          {
            csum ^= data_in[t];
            t++;
          }
          return (csum | 0x80);
        }

        OTPDISTData m_otpdistData;

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Flag to control new leak info
        bool m_new_data_leak;

    };
  }
}

#endif /* POWER_OTPDIST_PARSER_HPP_INCLUDED_ */
