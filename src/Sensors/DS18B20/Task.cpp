//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the DS18B20 1-wire temperature sensor.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Joao Costa
  namespace DS18B20
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Run frequency.
      double run_frequency;
      //! Path to file containing the 1-Wire sensor's file.
      std::string filename;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! w1_slave file.
      std::fstream m_file;
      //! File's lines.
      std::string m_line;
      //! Last word's position.
      uint8_t m_last_pos;
      //! Last word string.
      std::string m_last_word;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Execution period.
      Counter<double> m_execution_period;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx)
      {
        param("Run Frequency", m_args.run_frequency)
            .units(Units::Second)
            .defaultValue("0.5")
            .minimumValue("0.1")
            .maximumValue("10")
            .description("Task execution frequency.");

        param("File", m_args.filename)
            .defaultValue("")
            .description("Path to the file containg the 1-wire sensor's data.");

        //setFrequency(0.1);
        m_execution_period.setTop(1 / m_args.run_frequency);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.run_frequency))
        {
          m_execution_period.setTop(1 / m_args.run_frequency);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_execution_period.overflow())
          {
            //m_file.open(m_args.filename, std::ios::in);
            m_file.open("../../../../w1_slave", std::ios::in);

            if (m_file.is_open())
            {
              std::getline(m_file, m_line); //Read first file line

              m_last_pos = m_line.find_last_of(' ') + 1;                               //Find start of last word
              m_last_word = m_line.substr(m_last_pos, (m_line.length() - m_last_pos)); //Get CRC result

              if (m_last_word.compare("YES") == 0) //If CRC is OK, read next line.
              {
                std::getline(m_file, m_line);

                m_last_pos = m_line.find_last_of("t=") + 1;                              //Find start of temperature value
                m_last_word = m_line.substr(m_last_pos, (m_line.length() - m_last_pos)); //Get temperature
                m_temp.value = std::stof(m_last_word) / 1000;

                war("temperature:%.2f*", m_temp.value);
                dispatch(m_temp, DF_LOOP_BACK);
              }
            }

            m_file.close();
            m_execution_period.reset();
          }
        }

        waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
