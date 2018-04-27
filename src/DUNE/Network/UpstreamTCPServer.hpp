//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_UPSTREAM_TCP_SERVER_HPP_INCLUDED_
#define DUNE_NETWORK_UPSTREAM_TCP_SERVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Network/TCPSocket.hpp>

namespace DUNE
{
  namespace Network
  {
    class UpstreamTCPServer: public Concurrency::Thread
    {
    public:
      UpstreamTCPServer(Tasks::Task* parent, int port):
        m_parent(parent),
        m_port(port),
        m_sock(NULL),
        m_client(NULL)
      {
        m_sock = new Network::TCPSocket();
        m_sock->bind(m_port);
        m_sock->listen(4);
        m_sock->setKeepAlive(true);
        m_sock->setNoDelay(true);
        m_sock->setSendTimeout(1.0);
      }

      ~UpstreamTCPServer(void)
      {
        Memory::clear(m_client);
        Memory::clear(m_sock);
      }

      void
      sendToClient(const uint8_t* bfr, size_t bfr_size)
      {
        if (m_client == NULL)
          return;

        try
        {
          m_client->write(bfr, bfr_size);
        }
        catch (...)
        {
          Memory::clear(m_client);
        }
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          if (!IO::Poll::poll(*m_sock, 1.0))
            continue;

          try
          {
            Network::TCPSocket* client = m_sock->accept();
            Memory::clear(m_client);
            m_client = client;
          }
          catch (...)
          { }
        }
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! Listening port.
      int m_port;
      //! Socket handle.
      Network::TCPSocket* m_sock;
      //! Client.
      Network::TCPSocket* m_client;
    };
  }
}

#endif
