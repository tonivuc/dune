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
  OTP_PREAMBLE            = 0x2C,
  OTP_TERMINATOR          = 0x0A,
  OTP_CELL_NUMBER         = 0x22,
  OTP_SEND_BATMAN_DATA    = 0x23,
  OTP_BATMAN_DATA         = 0x31,
  OTP_RESET               = 0x60,
  OTP_ACK                 = 0x61,
  OTP_NACK                = 0x62,
  OTP_VERSION             = 0x50,
  OTP_SET_PO_STATE        = 0x51,
  OTP_GET_PO_STATE        = 0x52,
  OTP_TURN_ON             = 0x1D,
  OTP_TURN_OFF            = 0x1E,
  OTP_LEAK                = 0x1F,
  OTP_SWITCH_ON           = 0x63,
  OTP_SWITCH_OFF          = 0x64,
  OTP_START_ACQUISITION   = 0x65,
  OTP_STOP_ACQUISITION    = 0x66,
  OTP_POWER_DATA          = 0x67,
  OTP_SINGLE_ACQUISITION  = 0x68
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
  LEAK_ON               = 0x53,
  LEAK_OFF              = 0x54
};

#endif /* POWER_OTPDIST_COMMANDS_HPP_INCLUDED_ */
