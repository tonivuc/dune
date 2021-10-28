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

#ifndef POWER_OTPDIST_COMMANDS_HPP_INCLUDED_
#define POWER_OTPDIST_COMMANDS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Bytes Decode
enum DecodeData
{
  OTP_PREAMBLE            = '$',
  OTP_TERMINATOR          = '#',
  OTP_CELL_NUMBER         = 'C',
  OTP_CELL_DATA           = 'D',
  OTP_C_FACTOR            = 'c',
  OTP_SEND_BATMAN_DATA    = 'b',
  OTP_BATMAN_DATA         = 'B',
  OTP_BATMAN_DATA_VALUES  = 'v',
  OTP_RESET               = 'R',
  OTP_ACK                 = 'A',
  OTP_NACK                = 'N',
  OTP_VERSION             = 'V',
  OTP_SET_PO_STATE        = 'S',
  OTP_GET_PO_STATE        = 'G',
  OTP_LEAK                = 'L',
  OTP_SERVOS              = 's',
  OTP_SWITCH_ON           = 'O',
  OTP_SWITCH_OFF          = 'F',
  OTP_START_ACQUISITION   = 'T',
  OTP_STOP_ACQUISITION    = 'E',
  OTP_POWER_DATA          = 'P',
  OTP_POWER_DATA_SERVO    = 'p',
  OTP_SINGLE_ACQUISITION  = 'K',
  OTP_TURN_ON             = 'H',
  OTP_TURN_OFF            = 'L',
  OTP_POWER_OFF_BOARD     = 'X'
};

//! Power channels
enum PowerChannels
{
  PO_CH1                = 0x30,
  PO_CH2                = 0x31,
  PO_CH3                = 0x32,
  PO_CH4                = 0x33,
  PO_CH5                = 0x34,
  PO_CH6                = 0x35,
  PO_CH7                = 0x36,
  PO_CH8                = 0x37,
  PO_CH9                = 0x38,
  PO_CH10               = 0x39,
  PO_CH11               = 0x3A,
  PO_CH12               = 0x3B,
  PO_CH13               = 0x3C,
  PO_CH14               = 0x3D,
  PO_CH15               = 0x3E,
  PO_CH16               = 0x3F,
  PO_CH17               = 0x40,
  PO_CH18               = 0x41
};

//! Leaks Identifiers
enum LeaksIds
{
  LEAK_1                = 0x20,
  LEAK_2                = 0x21,
  LEAK_3                = 0x22,
  LEAK_4                = 0x23
};

//! Leaks status
enum LeakStatus
{
  LEAK_ON               = 'T',
  LEAK_OFF              = 'F'
};

//! Leaks messages status
enum LeakStatusMessage
{
  LEAK_SEND_ON          = 'T',
  LEAK_SEND_OFF         = 'S'
};

#endif /* POWER_OTPDIST_COMMANDS_HPP_INCLUDED_ */
