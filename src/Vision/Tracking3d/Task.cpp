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
// Author: Pedro_Gonçalves                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>
#include "../../../vendor/libraries/cvblob/cvblob.h"

// Local headers.
#include "IpCamCap.hpp"
#include "OperationCV.hpp"

namespace Vision
{
  namespace Tracking3d
  {
    using DUNE_NAMESPACES;
    using namespace cv;

    struct Arguments
    {
      // - IpCam1
      std::vector<std::string> ipcam1;
      // - IpCam2
      std::vector<std::string> ipcam2;
    };

    struct Task: public DUNE::Tasks::Task
    {

      Arguments m_args;
      IpCamCap* m_cap1;
      IpCamCap* m_cap2;
      OperationCV* m_operation1;
      OperationCV* m_operation2;
      //! Frame capture Cam1
      IplImage* frameCam1;
      //! Frame capture Cam2
      IplImage* frameCam2;
      //
      IplImage* teste1;
      IplImage* teste2;
      IplImage* cor1;
      IplImage* cor2;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_cap1(NULL),
        m_cap2(NULL)
      {
        param("IpCam1", m_args.ipcam1)
          //.defaultValue("localhost")
          .description("IpCam1 Addresses");

        param("IpCam2", m_args.ipcam2)
          //.defaultValue("localhost")
          .description("IpCam2 Addresses");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
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
        //cvNamedWindow( "LEFT" , 0 );
        //cvNamedWindow( "RIGHT" , 0 );
        m_cap1 = new IpCamCap(this, m_args.ipcam1[0].c_str(), "LEFT");
        m_cap1->start();
        m_cap2 = new IpCamCap(this, m_args.ipcam2[0].c_str(), "RIGHT");
        m_cap2->start();
        m_operation1 = new OperationCV(this, "LEFT");
        m_operation2 = new OperationCV(this, "RIGHT");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_operation1->m_valuesRGB.lowBlue = 0;
        m_operation1->m_valuesRGB.highBlue = 50;
        m_operation2->m_valuesRGB.lowBlue = 0;
        m_operation2->m_valuesRGB.highBlue = 50;

        m_operation1->m_valuesRGB.lowGreen = 0;
        m_operation1->m_valuesRGB.highGreen = 50;
        m_operation2->m_valuesRGB.lowGreen = 0;
        m_operation2->m_valuesRGB.highGreen = 50;

        m_operation1->m_valuesRGB.lowRed = 100;
        m_operation1->m_valuesRGB.highRed = 255;
        m_operation2->m_valuesRGB.lowRed = 100;
        m_operation2->m_valuesRGB.highRed = 255;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_cap1 != NULL)
        {
          m_cap1->stopAndJoin();
          delete m_cap1;
          m_cap1 = NULL;
        }
        if (m_cap2 != NULL)
        {
          m_cap2->stopAndJoin();
          delete m_cap2;
          m_cap2 = NULL;
        }
      }

      void
      PreLoadFrame(int mtimes)
      {
        int t = 0;
        while(t < mtimes && !stopping())
        {
          frameCam1 = m_cap1->capFrame();
          frameCam2 = m_cap2->capFrame();
          if(frameCam1 != NULL && frameCam2 != NULL)
            t++;
        }
      }

      /* mouse handler */
      void 
      MouseHandler1( int event, int x, int y)
      {
        /* user clicked the image, save pixel color */
        if ( event == CV_EVENT_LBUTTONUP )
        {
          inf("COORD LEFT: x = %d, y = %d", x, y);
          if(frameCam1 != NULL)
            m_operation1->SelectColorPixel(x, y, frameCam1);
        }
      }
      void 
      MouseHandler2( int event, int x, int y)
      {
        /* user clicked the image, save pixel color */
        if ( event == CV_EVENT_LBUTTONUP )
        {
          inf("COORD RIGHT: x = %d, y = %d", x, y);
          if(frameCam2 != NULL)
            m_operation2->SelectColorPixel(x, y, frameCam2);
        }
      }
      /* mouse handler - STATIC */
      static void 
      MouseWrapper1(int event, int x, int y, int , void* opt) 
      {
        Task* cal1 = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal1->MouseHandler1(event, x, y);
      }
      static void 
      MouseWrapper2(int event, int x, int y, int , void* opt) 
      {
        Task* cal2 = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal2->MouseHandler2(event, x, y);
      }


      void
      testeColor()
      {
        teste1 = m_operation1->FindColor(frameCam1, m_operation1->m_valuesRGB);
        cvShowImage("teste1 - LEFT", teste1);
        teste2 = m_operation2->FindColor(frameCam2, m_operation2->m_valuesRGB);
        cvShowImage("teste2 - RIGHT", teste2);

        cvShowImage("LEFT Final", m_operation1->FindBlob( m_operation1->m_valuesRGB, frameCam1 ));
        cvShowImage("RIGHT Final", m_operation2->FindBlob( m_operation2->m_valuesRGB, frameCam2 ));
        cvSetMouseCallback( "LEFT Final", MouseWrapper1, this);
        cvSetMouseCallback( "RIGHT Final", MouseWrapper2, this);

        cvSet(cor1, cvScalar(m_operation1->m_valuesRGB.b, m_operation1->m_valuesRGB.g, m_operation1->m_valuesRGB.r));
        cvSet(cor2, cvScalar(m_operation2->m_valuesRGB.b, m_operation2->m_valuesRGB.g, m_operation2->m_valuesRGB.r));
        cvShowImage("cor 1", cor1);
        cvShowImage("cor 2", cor2);
        cvWaitKey(8);

        //war("teste");
      }

      void
      testeTplMatch()
      {

      }

      //! Main loop.
      void
      onMain(void)
      {
        PreLoadFrame(6);
        cor1 = cvCreateImage( cvSize(250, 250), 8, 3);
        cor2 = cvCreateImage( cvSize(250, 250), 8, 3);
        while (!stopping())
        {
          frameCam1 = m_cap1->capFrame();
          frameCam2 = m_cap2->capFrame();
          if(frameCam1 != NULL && frameCam2 != NULL)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            cvShowImage("LEFT", frameCam1);
            cvShowImage("RIGHT", frameCam2);
            
            //Teste Color
            testeColor();

            //Teste Templat Match
            testeTplMatch();
          }
          else
          {
            war("NULL FRAME");
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("NULL Frame")));
          }
            
          frameCam1 = NULL;
          frameCam2 = NULL;
          waitForMessages(0.07);
          //m_operation1->teste();
          //m_operation2->teste();
          //sleep(1);
          //consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK
