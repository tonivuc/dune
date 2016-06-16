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

// ISO C++ 98 headers.
#include <iostream>
#include <pthread.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local headers
#include "ServoPWM.hpp"

namespace Actuators
{
  namespace PWM
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_pwm = 4;
    static const std::string c_mode_operation[] = {"Gimbal", "Drop", "Sample"};

    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      struct Arguments
      {
        //! PinOut for pwm
        int port_io[c_max_pwm];
        //! Operation Mode
        std::string operation_mode;
      };

      Arguments m_args;
      //! Servo 1
      ServoPwm* m_servo1;
      //! Servo 2
      ServoPwm* m_servo2;
      //! Servo 3
      ServoPwm* m_servo3;
      //! State of update msg servo position
      bool updateMsg;
      //! Value of servo position in deg
      double valuePos;
      //! ID servo
      uint8_t idServo;
      //! Wrong operation mode
      bool m_wrong_mode;
      //! State of pwm
      bool m_pwm_state;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_servo1(NULL),
      m_servo2(NULL),
      m_servo3(NULL)
      {
        for(unsigned int i = 1; i < c_max_pwm; ++i)
        {
          std::string option = String::str("PinOut %u", i);
          param(option, m_args.port_io[i])
          .defaultValue("")
          .description("Port IO for Output PWM.");
        }

        param("Operation Mode", m_args.operation_mode)
          .defaultValue("")
          .description("Operation Mode.");

        bind<IMC::SetServoPosition>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        if ( m_args.operation_mode == c_mode_operation[0])
        {
          m_servo1 = new ServoPwm(this, m_args.port_io[1], 1.308997, true);
          m_servo1->start();
          m_servo2 = new ServoPwm(this, m_args.port_io[2], 1.308997, true);
          m_servo2->start();
          m_wrong_mode = false;
        }
        else if (m_args.operation_mode == c_mode_operation[1])
        {
          m_servo3 = new ServoPwm(this, m_args.port_io[3], 1.308997, false);
          m_servo3->start();
          m_wrong_mode = false;
        }
        else if (m_args.operation_mode == c_mode_operation[2])
        {
          m_servo1 = new ServoPwm(this, m_args.port_io[1], 3.141593, false);
          m_servo1->start();
          m_servo2 = new ServoPwm(this, m_args.port_io[2], 3.141593, false);
          m_servo2->start();
          m_servo3 = new ServoPwm(this, m_args.port_io[3], 3.141593, false);
          m_servo3->start();
          m_wrong_mode = false;
        }
        else
          m_wrong_mode = true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_servo1 != NULL)
        {
          m_servo1->stopAndJoin();
          delete m_servo1;
          m_servo1 = NULL;
        }
        if (m_servo2 != NULL)
        {
          m_servo2->stopAndJoin();
          delete m_servo2;
          m_servo2 = NULL;
        }
        if (m_servo3 != NULL)
        {
          m_servo3->stopAndJoin();
          delete m_servo3;
          m_servo3 = NULL;
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        m_pwm_state = true;
        valuePos = msg->value;
        idServo = msg->id;
        if (!m_wrong_mode)
        {
          if(idServo == 1)
          {
            //war("SERVO 1: %f", valuePos);
            m_servo1->SetPwmValue(valuePos);
            if(!m_servo1->CheckGPIOSate())
              m_pwm_state = false;
          }
          else if(idServo == 2)
          {
            //war("SERVO 2: %f", valuePos);
              m_servo2->SetPwmValue(valuePos);
            if(!m_servo2->CheckGPIOSate())
              m_pwm_state = false;
          }
          else if(idServo == 3)
          {
            //war("SERVO 3: %f", valuePos);
            m_servo3->SetPwmValue(valuePos);
            if(!m_servo3->CheckGPIOSate())
              m_pwm_state = false;
          }
        }
        else

        if (!m_pwm_state)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

        updateMsg = true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        IMC::ServoPosition msgServoPos;

        if (m_wrong_mode)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          err("Error in config file");
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(m_args.operation_mode.c_str()));
        }

        while (!stopping())
        {
          if(updateMsg)
          {
            msgServoPos.value = valuePos;
            msgServoPos.id = idServo;
            dispatch(msgServoPos);
            updateMsg = false;
          }

          waitForMessages(1.0);
        }
      }
    };
  }
}
DUNE_TASK
