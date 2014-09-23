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
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

//! Maximum temperature delay
const float c_temp_delay = 5.0f;
//! Comment char
const std::string c_comment = "% ";
//! Not valid value
const std::string c_not_valid = "-1";

//! -- Format description --
//! Time, Latitude, Longitude, Depth, [Rhodamine or Crude or Refined], Temperature
//! Unix time seconds, decimal degrees NED, decimal degrees NED, Depth positive down, ppb
//! -- Meta data --
//! 1st line: vehicle model, sensor name, sampling frequency (seconds)
//! 2nd line: start date (mm/dd/yyyy HH:MM) UTC time
//! 3rd line: column names
//! 4th line: not valid value

struct MetaData
{
  std::string vname;
  std::string sname;
  std::string type;
};

void
writeHeader(std::ofstream& file, MetaData* m, double timestamp)
{
  file << c_comment
       << m->vname << ", "
       << m->sname << ", "
       << m->type << ", "
       << "1 Hz" << std::endl;

  std::string date_safe = Time::Format::getDateSafe(timestamp);
  std::string time_safe = Time::Format::getTimeSafe(timestamp);

  file << c_comment
       << date_safe[4] << date_safe[5] << "/"
       << date_safe[6] << date_safe[7] << "/"
       << date_safe[0] << date_safe[1] << date_safe[2] << date_safe[3]
       << " "
       << time_safe[0] << time_safe[1] << ":" << time_safe[2] << time_safe[3]
       << std::endl;

  file << c_comment << c_not_valid << std::endl;

  file << c_comment
       << "Time, Latitude, Longitude, Depth, " << m->type << ", Temperature"
       << std::endl;
}

template <typename T>
void
writeLine(std::ofstream& file, const IMC::EstimatedState* state,
          const T* rdye, const IMC::Temperature* temp = NULL)
{
  file << std::fixed << std::setprecision(2)
       << rdye->getTimeStamp() << ","
       << std::setprecision(5)
       << Math::Angles::degrees(state->lat) << ","
       << Math::Angles::degrees(state->lon) << ","
       << std::setprecision(2)
       << state->depth << ","
       << std::setprecision(3)
       << rdye->value;

  if (temp != NULL)
    file << std::setprecision(3) << "," << temp->value;
  else
    file << "," << c_not_valid;

  file << std::endl;
}

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
              << "-d" << "\t<data_type>: rhodamine or refined or crude" << std::endl
              << "-o" << "\t<out_file>: output file name" << std::endl;
    return 1;
  }

  int file_index = 1;

  MetaData md;
  md.vname = "unknown";
  md.sname = "Cyclops 7";
  md.type = "rhodamine";

  std::string output_name = "";

  for (int i = 1; i < argc; i++)
  {
    bool is_option = (!strcmp(argv[i], "-v") || !strcmp(argv[i], "-s")
                      || !strcmp(argv[i], "-d") || !strcmp(argv[i], "-o"));

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
          md.vname = argv[i + 1];
          i++;
          break;
        case 's':
          md.sname = argv[i + 1];
          i++;
          break;
        case 'd':
          md.type = argv[i + 1];
          i++;
          break;
        case 'o':
          output_name = argv[i + 1];
          i++;
          break;
        default:
          break;
      }

      file_index = i + 1;
    }
  }

  if (md.vname == "unknown")
  {
    char host[100];

    int res = gethostname(host, 100);
    if (res == 0)
      md.vname = host;
  }

  std::cerr << "vehicle name: " << md.vname << std::endl
            << "sensor name: " << md.sname << std::endl
            << "data type: " << md.type << std::endl
            << "file: " << argv[file_index] << std::endl
            << "output name:" << output_name << std::endl;

  std::ofstream* csv = NULL;

  std::string temp_label = "CTD";
  bool wrote_header = false;

  DUNE::IMC::EstimatedState estate;
  DUNE::IMC::Temperature temp;

  for (int32_t i = file_index; i < argc; ++i)
  {
    std::istream* is = 0;
    DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(argv[i]);
    if (method == DUNE::Compression::METHOD_UNKNOWN)
      is = new std::ifstream(argv[i], std::ios::binary);
    else
      is = new DUNE::Compression::FileInput(argv[i], method);

    DUNE::IMC::Message* msg = NULL;
    unsigned temp_ent = 0;

    try
    {
      while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
      {
        if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
        {
          estate = *static_cast<IMC::EstimatedState*>(msg);
          if (!wrote_header)
          {
            std::string date = Time::Format::getTimeSafe(msg->getTimeStamp());

            if (output_name.empty())
              output_name = date + "_" + md.type + ".csv";

            csv = new std::ofstream(output_name.c_str());
            writeHeader(*csv, &md, msg->getTimeStamp());
            wrote_header = true;
          }
        }
        else if (msg->getId() == DUNE_IMC_ENTITYINFO)
        {
          IMC::EntityInfo* ent = static_cast<IMC::EntityInfo*>(msg);
          if (ent->label == temp_label)
            temp_ent = ent->id;
        }
        else if (msg->getId() == DUNE_IMC_TEMPERATURE)
        {
          IMC::Temperature* tmp = static_cast<IMC::Temperature*>(msg);
          if (tmp->getSourceEntity() == temp_ent)
            temp = *tmp;
        }
        else if (msg->getId() == DUNE_IMC_RHODAMINEDYE)
        {
          IMC::RhodamineDye* rdye = static_cast<IMC::RhodamineDye*>(msg);

          if (rdye->getTimeStamp() - temp.getTimeStamp() < c_temp_delay)
            writeLine(*csv, &estate, rdye, &temp);
          else
            writeLine(*csv, &estate, rdye);
        }
        else if (msg->getId() == DUNE_IMC_CONDUCTIVITY)
        {
          IMC::Conductivity* cond = static_cast<IMC::Conductivity*>(msg);

          if (cond->getTimeStamp() - temp.getTimeStamp() < c_temp_delay)
            writeLine(*csv, &estate, cond, &temp);
          else
            writeLine(*csv, &estate, cond);
        }

        delete msg;
      }
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
    }

    delete is;
  }

  if (csv != NULL)
    delete csv;

  return 0;
}
