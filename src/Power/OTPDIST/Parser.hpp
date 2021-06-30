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
        struct OTPDISTData
        {
          //! Firmware version
          std::string firm_version;
          //! Leak States
          bool leak_states[4];
          //! State of Switch
          bool switch_on;
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
            if(data_in[0] == OTP_PREAMBLE)
            {
              if(data_in[1] == OTP_VERSION)
              {
                int data_payload_size = data_in[2];
                std::ostringstream firmware_version_decode;
                for(u_int8_t i = 3; i < data_payload_size + 3; i++)
                {
                  firmware_version_decode << data_in[i];
                }
                m_otpdistData.firm_version = firmware_version_decode.str();
                m_task->debug("Parser:Version: %s", m_otpdistData.firm_version.c_str());
                return true;
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
                uint8_t channel = data_in[2];
                uint8_t b_v[] = {data_in[3], data_in[4], data_in[5], data_in[6]};
                uint8_t b_c[] = {data_in[7], data_in[8], data_in[9], data_in[10]};
                float v, c;
                std::memcpy(&v, &b_v, sizeof(v));
                std::memcpy(&c, &b_c, sizeof(c));
                m_task->spew("POWER: channel: %d, %f (v) | %f (mA)", channel - 0x30, v, c);
                return true;
              }
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
