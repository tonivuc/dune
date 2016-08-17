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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace AcousticModem
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // IPv4 Address.
      Address addr;

      // Port to listen
      uint16_t port;

      // Sound speed in m/s
      fp64_t sound_speed;

      // Modem bandwidth bps
      fp64_t bps;

    };

    struct Task: public DUNE::Tasks::Task
    {
      // Buffer capacity.
      static const unsigned c_bfr_size = 65535;
      // Task arguments.
      Arguments m_args;
      // UDP Socket.
      UDPSocket* m_sock;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Own state
      IMC::EstimatedState m_state;
      //! Other states
      std::map<int, IMC::EstimatedState> m_states;
      //! Incoming messages
      std::list<IMC::UamRxFrame> m_incoming;
      //! Time when current transmission finishes
      double m_transmission_end;
      //! Ongoing transmission
      IMC::UamTxFrame m_ongoing;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sock(NULL),
        m_transmission_end(0)
      {
        param("Multicast Address", m_args.addr)
        .defaultValue("224.0.70.70")
        .description("Address of multicast group where to exchange simulated messages");

        param("Multicast Port", m_args.port)
        .defaultValue("12304")
        .description("Port where to listen for simulated messages");

        param("Simulated Sound Speed", m_args.sound_speed)
        .defaultValue("1500")
        .description("Water sound speed in m/s");

        param("Simulated Bandwidth", m_args.bps)
        .defaultValue("600")
        .description("Simulated bandwidth in bits per second");

        m_bfr.resize(c_bfr_size);

        bind<IMC::UamTxFrame>(this);
        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (isActive())
        {
          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change group address"), 1);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_sock = new UDPSocket;
        m_sock->setMulticastTTL(1);
        m_sock->setMulticastLoop(true);
        m_sock->joinMulticastGroup(m_args.addr);
        m_sock->bind(m_args.port, Address::Any, true);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_ctx.resolver.isLocal(msg->getSource()))
          m_state = *msg;
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        debug("Send frame to %s", msg->sys_dst.c_str());

        if (msg->getSource() == getSystemId())
        {
          IMC::UamTxStatus status;
          status.seq = msg->seq;
          status.value = UamTxStatus::UTS_INV_ADDR;
          dispatch(status);
          return;
        }

        if (m_transmission_end > Time::Clock::getSinceEpoch())
        {
          IMC::UamTxStatus status;
          status.seq = msg->seq;
          status.value = UamTxStatus::UTS_BUSY;
          dispatch(status);
          return;
        }

        m_ongoing = *msg;
        m_transmission_end = Time::Clock::getSinceEpoch() + (msg->data.size() * 8.0) / m_args.bps;

        // send position
        sendMessage(&m_state);
        // send frame
        sendMessage(msg);
      }

      void sendMessage(const IMC::Message *msg)
      {
        size_t rv = IMC::Packet::serialize(msg, (uint8_t*)&m_bfr[0], (uint16_t)m_bfr.size());
        try
        {
          m_sock->write((const uint8_t*)&m_bfr[0], rv, m_args.addr, m_args.port);
        }
        catch (...)
        { }
      }

      // Read incoming data.
      void
      readData(void)
      {
        if (!Poll::poll(*m_sock, 0.1))
          return;

        size_t rv = m_sock->read(&m_bfr[0], m_bfr.size());
        IMC::Message* msg = IMC::Packet::deserialize((uint8_t*)&m_bfr[0], rv);

        if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
        {
          IMC::EstimatedState state = *(static_cast<const IMC::EstimatedState*>(msg));
          m_states[state.getSource()] = state;
        }
        else if (msg->getId() == DUNE_IMC_UAMTXFRAME)
        {
          const IMC::UamTxFrame* m = static_cast<const IMC::UamTxFrame*>(msg);
          debug("will receive acoustic frame from %s", m_ctx.resolver.resolve(msg->getSource()));
          // Check if we are supposed to receive the message
          if (m->getSource() == getSystemId() || (m->sys_dst != getSystemName() && m->sys_dst != "broadcast"))
            return;

          double distance = distanceTo(m->getSource());

          // Process data.
          IMC::UamRxFrame rx;
          rx.sys_src = resolveSystemId(msg->getSource());
          rx.sys_dst = getSystemName();
          rx.data = m->data;

          double transmission_time = (m->data.size() * 8.0) / (double)m_args.bps + (distance / m_args.sound_speed);
          rx.setTimeStamp(Time::Clock::getSinceEpoch() + transmission_time);
          m_incoming.push_back(rx);
        }
      }

      double distanceTo(int sys)
      {
        if (m_states.find(sys) == m_states.end())
          return 0;

        double lat1, lat2, lon1, lon2;

        lat1 = m_state.lat;
        lon1 = m_state.lon;
        WGS84::displace(m_state.x, m_state.y, &lat1, &lon1);

        lat2 = m_states[sys].lat;
        lon2 = m_states[sys].lon;
        WGS84::displace(m_states[sys].x, m_states[sys].y, &lat2, &lon2);

        return WGS84::distance(lat1, lon1, -m_state.depth, lat2, lon2, -m_states[sys].depth);
      }

      void
      dispatchMessages()
      {
        std::list<IMC::UamRxFrame>::iterator it;
        for (it = m_incoming.begin(); it != m_incoming.end();)
        {
          if (it->getTimeStamp() <= Time::Clock::getSinceEpoch())
          {
            debug("received acoustic frame from %s", m_ctx.resolver.resolve(it->getSource()));
            dispatch(*it);
            it = m_incoming.erase(it);
          }
          else
            it++;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          dispatchMessages();
          if (m_sock != NULL)
            readData();
        }
      }
    };
  }
}

DUNE_TASK
