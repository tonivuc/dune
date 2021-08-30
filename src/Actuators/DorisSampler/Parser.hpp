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

#ifndef ACTUATORS_DORISSAMPLER_PARSER_HPP_INCLUDED_
#define ACTUATORS_DORISSAMPLER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Actuators
{
  namespace DorisSampler
  {
    //! Message Parser for DORIS Water Sampler.
    //!
    //! @author João Costa
    class Parser
    {
    public:

      //! WASAB's watchdog.
      Time::Counter<double> m_fw_wdog;

      //! WASAB's message receive confirmation
      uint8_t m_msg_receipt;

      //! Doris' Water Sampler data.
      struct DorisState
      {
        //! Cleaning State Machine's State
        int cleanState;
        //! Sampling State Machine's State
        int sampleState;
        //! Firmware Version
        float fwVersion = 0;
        //! Total Number of Bottles Sampled
        int totalNumberOfBottles = -1;
      };

      //! State machine states.
      enum ParserStates
      {
        //! Read preamble
        PS_PREAMBLE,
        //! Data received
        PS_DATA,
        //! Read checksum
        PS_CS
      };

      Parser(DUNE::Tasks::Task *task) : 
                                        m_task(task),
                                        m_parser_state(Parser::PS_PREAMBLE)
      {
      }

      ~Parser(void)
      {
      }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_parser_state)
        {
        case PS_PREAMBLE:
          if (byte == c_preamble)
          {
            m_parser_state = PS_DATA;
            m_cnt = 0;
            std::memset(&m_bfr, '\0', sizeof(m_bfr));
          }
          break;

        case PS_DATA:
          if (byte != c_terminator)
          {
            m_bfr[m_cnt++] = byte;
          }
          else
          {
            m_bfr[m_cnt++] = byte;
            m_parser_state = PS_CS;
          }
          break;

        case PS_CS:
          m_parser_state = PS_PREAMBLE;
          m_csum = Algorithms::XORChecksum::compute((uint8_t *)m_bfr, strlen(m_bfr) - 1, 0);
          //m_task->spew("csum received: %c || csum calculated: %c", byte, m_csum);
          if (m_csum == byte)
          {
            m_task->spew("csum ok");
            return true;
          }
          else
          {
            m_task->spew("csum fail");
          }
          break;

        default:
          m_parser_state = PS_PREAMBLE;
          break;
        }

        return false;
      }

      //! Filter data received from doris sampler board
      bool
      translate(void)
      {
        if (m_bfr[0] == c_clean_state)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.cleanState);
          return true;
        }
        else if (m_bfr[0] == c_update_bots)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.totalNumberOfBottles);
          return true;
        }
        else if (m_bfr[0] == c_pong)
        {
          m_fw_wdog.reset();
          return true;
        }
        else if (m_bfr[0] == c_msg_receipt)
        {
          m_msg_receipt = 1;
          return true;
        }
        else if (m_bfr[0] == c_sample_state)
        {
          std::sscanf(m_bfr, "%*c,%d%*s", &m_dorisState.sampleState);
          return true;
        }
        else if (m_bfr[0] == c_version)
        {
          std::sscanf(m_bfr, "%*c,%f%*s", &m_dorisState.fwVersion);
          return true;
        }
        return false;
      }

      void
      set_wdog(uint8_t val)
      {
        m_fw_wdog.setTop(val);
      }
      
      //! Sampling system state.
      DorisState m_dorisState;

    private:
      DUNE::Tasks::Task *m_task;
      //! State machine state.
      ParserStates m_parser_state;
      //! Checksum.
      uint8_t m_csum;
      //! Position in buffer.
      uint8_t m_cnt;
      //! Received buffer.
      char m_bfr[64];

      //! Frame preamble.
      static const uint8_t c_preamble = '$';
      //! Frame terminator.
      static const uint8_t c_terminator = '*';
      //! Bottle info frame identifier.
      static const uint8_t c_bottle_info = 'B';
      //! Clean state frame identifier.
      static const uint8_t c_clean_state = 'C';
      //! Updateotal bottle number frame identifier.
      static const uint8_t c_update_bots = 'U';
      //! Ping answer frame identifier.
      static const uint8_t c_pong = 'P';
      //! Message receipt frame identifier
      static const uint8_t c_msg_receipt = 'R';
      //! Sample state frame identifier.
      static const uint8_t c_sample_state = 'S';
      //! Version state frame identifier.
      static const uint8_t c_version = 'V';
    };
  } // namespace DorisSampler
} // namespace Actuators
#endif