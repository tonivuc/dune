//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// Utility to compute distance travelled from LSF log files.                *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

//! -- Format description --
//! Time, Latitude, Longitude, Depth, [Rhodamine or Crude or Refined]
//! Unix time seconds, decimal degrees NED, decimal degrees NED, Depth positive down, ppb
//! -- Meta data --
//! 1st line: vehicle model, sensor name, sampling frequency (seconds)
//! 2nd line: start date (mm/dd/yyyy HH:MM) UTC time
//! 3rd line: column names
//! 4th line: not valid value

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " [options] <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl;
    std::cerr << "Options:" << std::endl
              << "-v" << "\t<vehicle_name>: default is unknown" << std::endl
              << "-s" << "\t<sensor_name>: default is C7" << std::endl
              << "-d" << "\t<data_type>: rhodamine or refined or crude" << std::endl;
    return 1;
  }

  int file_index = 1;

  std::string vname = "unknown";
  std::string sname = "Cyclops 7";
  std::string type = "rhodamine";

  for (int i = 1; i < argc; i++)
  {
    bool is_option = (!strcmp(argv[i], "-v") || !strcmp(argv[i], "-s")
                      || !strcmp(argv[i], "-d"));

    if (is_option && (argc == i + 1))
    {
      std::cerr << "too few arguments for " << argv[i] << std::endl;
      return 1;
    }

    if (is_option)
    {
      char op = argv[i][1];

      switch (op)
      {
        case 'v':
          vname = argv[i + 1];
          i++;
          break;
        case 's':
          sname = argv[i + 1];
          i++;
          break;
        case 'd':
          type = argv[i + 1];
          i++;
          break;
        default:
          break;
      }

      file_index = i + 1;
    }
  }

  std::cerr << "vehicle name: " << vname << std::endl
            << "sensor name: " << sname << std::endl
            << "data type: " << type << std::endl
            << "file: " << argv[file_index] << std::endl;

  return 0;
}
