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
// Author: Toni Vucic                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <utility>  
#include <list>

namespace Maneuver
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Toni Vucic
  namespace ExpandingSquare
  {
    using DUNE_NAMESPACES;

    struct CoordinatePair
    {
      fp64_t lat;
      fp64_t lon;

      CoordinatePair(fp64_t latitude, fp64_t longtitude) {
        lat = latitude;
        lon = longtitude;
      }
    };

    struct XyPair
    {
      fp64_t x;
      fp64_t y;

      XyPair(fp64_t xValue, fp64_t yValue) {
        x = xValue;
        y = yValue;
      }
    };

    struct Task: public Maneuvers::Maneuver
    {
      //! Maneuver
      IMC::ExpandingSquare m_maneuver;
      //! EstimatedState
      IMC::EstimatedState m_state;
      //! DesiredPath
      IMC::DesiredPath m_path;

      bool m_rotate_clockwise;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        war("Inside ExpandingSquare task constructor");
        bindToManeuver<Task, IMC::ExpandingSquare>();
        // maybe doesn't need to be activable? cuz started by consume message paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_USER, true); //Required to support task activation and deactivation
      }

      /*
      //! Destructor
      virtual
      ~Task(void)
      {
        Memory::clear(m_stages_parser);
        Memory::clear(m_alt_avrg);
      }
      */
      
      void
      onManeuverDeactivation(void)
      {
        /*
        Memory::clear(m_stages_parser);
        Memory::clear(m_alt_avrg);
        */
      }

      //Function returns the original waypoint, but constrained so that it does not exceed the width of the maneuver
      XyPair
      constrainManeuver(double width, double angle, XyPair rotatedPoints) {
        double borderX = width/2;
        double borderY = width/2;
        Angles::rotate(angle, m_rotate_clockwise, borderX, borderY);

        if (borderX < rotatedPoints.x)  {
          rotatedPoints.x = borderX;
        }
        if (borderY < rotatedPoints.y)  {
          rotatedPoints.y = borderY;
        }

        return rotatedPoints;
      }

      bool 
      isManeuverDone(XyPair rotatedPoints, XyPair constrainedRotatedPoints) {
        if (rotatedPoints.x != constrainedRotatedPoints.x || rotatedPoints.y != constrainedRotatedPoints.y) {
          return true;
        }
        return false;
      }

      void
      generateWaypoints(double width, double hstep, double bearing, bool curveRight=true) {
        fp64_t initialX = 0.0;
        fp64_t initialY = 0.0;
        double currentHstep = hstep;

        double maxOffsetFromCentere = width/2;


        std::list<XyPair> relativeWaypoints;
        relativeWaypoints.push_back(XyPair(initialX,initialY)); //Start position

        bool done = false;

        int waypointsAdded = 1;
        int hstepMultiplier = 1;
        while (!done) {
          XyPair prevPoint = relativeWaypoints.back();
          XyPair nextPoint = XyPair(prevPoint.x, prevPoint.y + currentHstep * hstepMultiplier);
          Angles::rotate(bearing, m_rotate_clockwise, nextPoint.x, nextPoint.y); //Rotates nextPoint according to bearing
          relativeWaypoints.push_back(nextPoint);
          waypointsAdded++;
          hstepMultiplier = waypointsAdded/2;
        }
      }

      void
      consume(const IMC::ExpandingSquare* maneuver)
      {
        war("Inside consume ExpandingSquare maneuver");
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;


        //New code!
        CoordinatePair initialCoord(m_maneuver.lat, m_maneuver.lon);
        //std::pair <fp64_t,fp64_t> product2(m_maneuver.lon,m_maneuver.lat); 

        

        //Calculate path based on logic from 0

        //generatePoints method:


        //Send first DesiredPath based on manouver parameters.

        

        //sendPath(lat, lon)

        //Store remaining points in an array in the object? (Not the best way, better to have a function always giving the next point, but this is easier)


        //Old code!!
        /*
        double hstep;
        if (maneuver->angaperture <= 0)
          hstep = 2 * maneuver->range;
        else
          hstep = 2 * maneuver->range * std::sin(maneuver->angaperture / 2);

        m_alt_min = -1;
        m_cov_pred = hstep * (1 - maneuver->overlap / 200.);
        m_cov_actual_min = m_cov_pred;
        m_cur_hstep = m_cov_pred;

        m_stage = 0;

        // Creates a new instance as this is the only way to change window size
        Memory::clear(m_alt_avrg);
        m_alt_avrg = new Math::MovingAverage<float>(m_args.altitude_average_size);

        Memory::clear(m_stages_parser);
        try
        {
          m_stages_parser = new Maneuvers::RowsStages(maneuver->lat, maneuver->lon, maneuver->bearing,
                                                      maneuver->cross_angle, maneuver->width,
                                                      maneuver->length, hstep, maneuver->coff, 100,
                                                      maneuver->flags, this);
        }
        catch (std::runtime_error& e)
        {
          signalError(e.what());
          return;
        }

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        if (m_stages_parser->getFirstPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
        */
      }



      void
      consume(const IMC::EstimatedState* msg)
      {
        war("Inside consume EstimatedState");
        if (msg->getSource() != getSystemId())
          return;

        /*
        if (m_alt_avrg == NULL)
          return;
        */

        //New code!
        fp64_t lat = msg->lat;
        fp64_t lon = msg->lon;

        war("Estimated latitude and longtitude are %f and %f", lat, lon);

        //Old code
        /*
        if (msg->alt > m_args.min_altitude)
        {
          m_alt_avrg->update(msg->alt);
          if (m_alt_avrg->sampleSize() >= m_alt_avrg->windowSize())
          {
            float avg = m_alt_avrg->mean();
            if (m_alt_min < 0)
              m_alt_min = avg;
            else
              m_alt_min = std::min(m_alt_min, avg);
          }
        }
        */
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        inf("Inside onPathControlState");
        /*
        if (m_alt_avrg == NULL)
          return;
        */


        //New code!
        
        //Check if close to/reached point (can set a static 3m radius for close enough)
        //If close enough send the next waypoint


        //Old code!
        /*
        std::stringstream ss;
        ss << "waypoint=" << m_stages_parser->getIndex();
        ss << "; stage=" << m_stage;
        ss << "; minAlt=" << m_alt_min;
        ss << "; curHstep=" << m_cur_hstep;
        ss << "; stdHstep=" << m_cov_pred;


        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
        {
          signalProgress(pcs->eta, ss.str());
          return;
        }

        double lat;
        double lon;

        bool last_pt;
        switch (m_stage)
        {
          case 2:
            m_alt_min = std::min(m_alt_min, m_alt_avrg->mean());
            if (m_alt_min > 0)
            {
              m_cov_actual_min = 2 * m_alt_min * std::tan(m_maneuver.angaperture / 2);
              m_cov_actual_min = m_cov_actual_min * (1 - m_maneuver.overlap / 200.);
              m_cur_hstep = std::min(m_cov_pred, m_cov_actual_min);
              last_pt = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
              ss << "; calculated=" << m_cur_hstep;
            }
            else
            {
              m_cur_hstep = m_cov_pred;
              last_pt = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
              ss << "; not-calculated=" << m_cov_pred;
            }
            break;
          default:
            last_pt = m_stages_parser->getNextPoint(&lat, &lon);
            break;
        }

        signalProgress(pcs->eta, ss.str());

        m_alt_avrg->clear();
        m_alt_min = -1;

        if (last_pt)
        {
          signalCompletion();
          return;
        }

        m_stage++;
        unsigned num_stages = (m_maneuver.flags & IMC::ExpandingSquare::FLG_SQUARE_CURVE) ? 3 : 2;

        if (m_stage > num_stages)
          m_stage = 1;

        sendPath(lat, lon);
        */
      }

      //! Send new desired path as a DesiredPath IMC message
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
      
      //! Main loop.
      void
      onMain(void)
      {
        war("In expandingSquare onMain");
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
