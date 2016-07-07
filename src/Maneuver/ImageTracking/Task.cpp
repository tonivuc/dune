//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: PGonçalves                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace ImageTracking
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_maximum_distance = 12;
    static const float c_time_check_new_distance = 2.0f;
    static const int c_max_image_offset = 260;
    static const int c_mim_image_offset = 60;

    enum MoveComand
    {
      M_LEFT,
      M_RIGHT,
      M_FORWARD,
      M_STOP
    };

    struct Arguments
    {
        //! System Slave Name
        std::string slave_name;
        //! ID cam
        int id_cam;
        //! Minimum of offset
        int minimum_x;
        //! Maximum of offset
        int maximum_x;
        //! Speed scale factor
        float speed_scale_factor;
        //! Minimum distance before stopping moving forward
        float minimum_distance;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::SetThrusterActuation m_thruster_actuation;
      //! Task Arguments
      Arguments m_args;
      //! Distance to object
      float m_distance_to_object;
      //! State of new value of distance
      bool m_new_distance;
      //! state time to check state of new distances
      Time::Counter<float> m_cnt_new_distance_check;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Slave System", m_args.slave_name)
        .description("Slave System name.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("caravela-aux");

        param("Camera ID", m_args.id_cam)
        .description("Camera ID to use.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .values("1, 2")
        .defaultValue("1");

        param("Minimum of X", m_args.minimum_x)
        .description("Minimum value of X before start correction of heading.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Pixel)
        .minimumValue("60")
        .maximumValue("140")
        .defaultValue("130");

        param("Maximum of X", m_args.maximum_x)
        .description("Maximum value of X before start correction of heading.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Pixel)
        .minimumValue("260")
        .maximumValue("220")
        .defaultValue("190");

        param("Speed Scaling Factor", m_args.speed_scale_factor)
        .description("Scaling factor for speed actuation.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .minimumValue("0.5")
        .maximumValue("2")
        .defaultValue("1.5");

        param("Minimum Distance", m_args.minimum_distance)
        .description("Minimum distance before stopping moving forward.")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Meter)
        .minimumValue("0.5")
        .maximumValue("12")
        .defaultValue("1.5");

        bindToManeuver<Task, IMC::ImageTracking>();
        bind<IMC::GetImageCoords>(this);
        bind<IMC::GetWorldCoordinates>(this);
      }

      void
      onManeuverDeactivation(void)
      {
        moveComand(M_STOP, 0);
      }

      void
      consume(const IMC::ImageTracking* maneuver)
      {
        (void)maneuver;
        m_new_distance = false;
        m_cnt_new_distance_check.setTop(c_time_check_new_distance);

        signalProgress();
      }

      void
      consume(const IMC::GetWorldCoordinates* msg)
      {
        if (std::string(resolveSystemId(msg->getSource())).compare(m_args.slave_name) != 0)
          return;

        if (!msg->tracking)
          return;

        if (msg->x >= m_args.minimum_distance && msg->x <= c_maximum_distance)
        {
          m_distance_to_object = msg->x;
          m_new_distance = true;
        }
      }

      void
      consume(const IMC::GetImageCoords* msg)
      {
        if (std::string(resolveSystemId(msg->getSource())).compare(m_args.slave_name) != 0)
          return;

        if (msg->camid != m_args.id_cam)
          return;

        if (msg->x < m_args.minimum_x)
        {
          moveComand(M_LEFT, std::abs(msg->x - m_args.minimum_x));
        }
        else if (msg->x > m_args.maximum_x)
        {
          moveComand(M_RIGHT, std::abs(msg->x - m_args.maximum_x));
        }
        else
        {
          if (m_new_distance)
          {
            moveComand(M_FORWARD, m_distance_to_object);
            m_new_distance = false;
            m_cnt_new_distance_check.reset();
          }

          if (m_cnt_new_distance_check.overflow())
            moveComand(M_STOP, 0);
        }
      }

      void
      moveComand(MoveComand m_move, float diff_value)
      {
        float value;
        float speed_values[2];
        switch (m_move)
        {
          case M_LEFT:
            value = (diff_value / std::abs(c_mim_image_offset - m_args.minimum_x)) * m_args.speed_scale_factor;
            if (value > 1)
              value = 1;
            speed_values[0] = -value;
            speed_values[1] = value;
            break;

          case M_RIGHT:
            value = (diff_value / std::abs(c_max_image_offset - m_args.maximum_x)) * m_args.speed_scale_factor;
            if (value > 1)
              value = 1;
            speed_values[0] = value;
            speed_values[1] = -value;
            break;

          case M_FORWARD:
            value = (diff_value / (c_maximum_distance / 2)) * m_args.speed_scale_factor;
            if (value > 1)
              value = 1;
            speed_values[0] = value;
            speed_values[1] = value;
            break;

          case M_STOP:
            value = diff_value;
            speed_values[0] = value;
            speed_values[1] = value;
            break;

          default:
            m_move = M_STOP;
            break;
        }

        m_thruster_actuation.id = 0;
        m_thruster_actuation.value = speed_values[0];
        dispatch(m_thruster_actuation);
        m_thruster_actuation.id = 1;
        m_thruster_actuation.value = speed_values[1];
        dispatch(m_thruster_actuation);
      }
    };
  }
}

DUNE_TASK
