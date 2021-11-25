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
#include <algorithm>

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

    enum direction 
    {
      north = 0, 
      east = 1, 
      south = 2,
      west = 3
    };

    struct Task: public Maneuvers::Maneuver
    {
      //! Maneuver
      IMC::ExpandingSquare m_maneuver;
      //! EstimatedState
      IMC::EstimatedState m_state;
      //! DesiredPath
      IMC::DesiredPath m_path;
      //!
      std::list<CoordinatePair> m_plannedWaypoints;

      bool m_rotate_clockwise = true;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        war("Inside ExpandingSquare task constructor");
        bindToManeuver<Task, IMC::ExpandingSquare>();
      }

      void
      onManeuverDeactivation(void)
      {
        //No need to clear m_plannedWaypoints as waypoints are removed as the maneuver progresses.
      }

      //! Converts relative waypoints in meter offsets into a list of waypoints with GPS coordinates in radiants.
      //! @param[in] relativeWaypoints number used to limit the other number if it exceeds it.
      //! @param[in] vehicleLat latitude where the maneuver starts.
      //! @param[in] vehicleLon longtitude where the maneuver starts.
      //! @return a list of waypoints with GPS coordinates in radiants
      std::list<CoordinatePair>
      convertToAbsoluteWaypoints(std::list<XyPair> relativeWaypoints, double vehicleLat, double vehicleLon) {
        std::list<CoordinatePair> waypointCoordinates;
        double lat = vehicleLat;
        double lon = vehicleLon;
        double hae = 0.00; //Dummy variable

        std::list<XyPair>::iterator it;
        for (it = relativeWaypoints.begin(); it != relativeWaypoints.end(); ++it){
            Coordinates::WGS84::displace(it->y, it->x, 0.0, &lat, &lon, &hae); //Passing the address of lat and lon here
            waypointCoordinates.push_back(CoordinatePair(lat,lon));

            //Reset latitudes so calculation of offsets is correct
            lat = vehicleLat;
            lon = vehicleLon;
        }
        return waypointCoordinates;
      }

      //! Constrains number to the positiveLimitNumber, but if the input number is negative it is constrained to the negative version of the positiveLimitNumber.
      //! @param[in] positiveLimitNumber number used to limit the other number if it exceeds it.
      //! @param[in] number number to be limited if it exceeds the positiveLimitNumber.
      //! @return returns the number parameter unless it's absolute value is larger than the positiveLimitNumber, then that is returned instead with the same sgn as the number parameter.
      double
      constrainNumber(double positiveLimitNumber, double number) {
        if (number >= 0) {
          return std::min(positiveLimitNumber, number);
        }
        else {
          double negativeLimitValue = positiveLimitNumber*-1;
          return std::max(negativeLimitValue, number);
        }
      }

      //! Returns the original waypoint, but constrained if necessary so that it does not exceed the width of the maneuver
      //! @param[in] width width of the maneuver.
      //! @param[in] rotatedPoint the original point before it has been checked against constraint/width rules.
      //! @return a waypoint, possibly constrained in length
      XyPair
      constrainManeuver(double width, XyPair rotatedPoint) {
        double borderX = width/2;
        double borderY = width/2;

        rotatedPoint.x = constrainNumber(borderX, rotatedPoint.x);
        rotatedPoint.y = constrainNumber(borderY, rotatedPoint.y);
        return rotatedPoint;
      }

      //! Checks if the maneuver is done
      //! @param[in] rotatedPoint the original point before it has been checked against constraint/width rules.
      //! @param[in] constrainedRotatedPoint the point after being constrained by the width of the maneuver.
      //! @return true if the maneuver is done, false otherwise.
      bool 
      isManeuverDone(XyPair rotatedPoint, XyPair constrainedRotatedPoint) {
        if (rotatedPoint.x != constrainedRotatedPoint.x || rotatedPoint.y != constrainedRotatedPoint.y) {
          return true;
        }
        return false;
      }

      //! Creates a waypoint with a offset in the right direction
      //! @param[in] prevPoint previous point.
      //! @param[in] movementDirection which compass direction to move towards.
      //! @param[in] initialHstep length of each sweep line before multiplier has been applied.
      //! @param[in] hstepMultiplier a factor to multiply the initialHstep with to get the current sweep line length.
      //! @return a waypoint.
      XyPair
      createNextPoint(XyPair prevPoint, direction movementDirection, double initialHstep, double hstepMultiplier) {
          double stepLength = initialHstep * hstepMultiplier;

          switch (movementDirection) {
            case north:
              return XyPair(prevPoint.x, prevPoint.y + stepLength);
            case east: 
              return XyPair(prevPoint.x + stepLength, prevPoint.y);
            case south: 
              return XyPair(prevPoint.x, prevPoint.y - stepLength);
            case west: 
              return XyPair(prevPoint.x - stepLength, prevPoint.y);
          }
      }

      //! Takes the previous movement direction and returns the next one.
      //! @param[in] previousDirection previous movement direction.
      //! @param[in] curveRight if the maneuver should curve right or left.
      //! @return the next movement direction
      direction
      changeMovementDirection(direction previousDirection, bool curveRight=true) {
        if (curveRight) {
          if ((int)previousDirection < 3) { //everything except west
            int newDirAsInt = (int)previousDirection+1;
            return static_cast<direction>(newDirAsInt);
          }
          else { //If the last one was west
            return north;
          }
        } else {
          if (previousDirection == north) {
            return west;
          }
          else if ((int)previousDirection > 0) {
            int newDirAsInt = (int)previousDirection-1;
            return static_cast<direction>(newDirAsInt);
          }
        }

      }

      //! Generates waypoints with offsets from the start location (0,0) in meters
      //! @param[in] width maneuver width.
      //! @param[in] hstep spacing between sweep lines.
      //! @param[in] bearing angle the maneuver is rotated by.
      //! @param[in] curveRight if the maneuver should curve right or left.
      //! @return a list of waypoints
      std::list<XyPair>
      generateRelativeWaypoints(double width, double hstep, double bearing, bool curveRight=true) {
        fp64_t initialX = 0.0;
        fp64_t initialY = 0.0;
        double initialHstep = hstep;
        double maxOffsetFromCentere = width/2;
        std::list<XyPair> relativeWaypoints;

        relativeWaypoints.push_back(XyPair(initialX,initialY)); //Start position

        bool done = false;
        direction movementDirection = north; //Initial direction is up/north
        
        int hstepMultiplier = 1; //Increases length of each maneuver length
        
        while (!done) {
          XyPair prevPoint = relativeWaypoints.back();
          XyPair nextPoint = createNextPoint(prevPoint, movementDirection, initialHstep, hstepMultiplier);
          XyPair constrainedNextPoint = constrainManeuver(width, nextPoint);
          relativeWaypoints.push_back(constrainedNextPoint);

          //Prepare for next loop
          hstepMultiplier = (relativeWaypoints.size()+1)/2;
          movementDirection = changeMovementDirection(movementDirection, curveRight);
          done = isManeuverDone(nextPoint, constrainedNextPoint);
        }
        
        std::list<XyPair> rotatedRelativeWaypoints = rotatePoints(relativeWaypoints, bearing);

        return rotatedRelativeWaypoints;
      }

      //! Returns the supplied waypoints, but rotated.
      //! @param[in] points points to rotate.
      //! @param[in] angle angle to rotate by.
      //! @return a list of rotated waypoints
      std::list<XyPair>
      rotatePoints(std::list<XyPair> points, double angle) {
        std::list<XyPair> rotatedPointsList;

        std::list<XyPair>::iterator it;
        for (it = points.begin(); it != points.end(); ++it){
          XyPair rotatedPoint(0.0,0.0);
          rotatedPoint.x = it->x;
          rotatedPoint.y = it->y;
          Angles::rotate(angle, m_rotate_clockwise, rotatedPoint.x, rotatedPoint.y);
          rotatedPointsList.push_back(rotatedPoint);
        }
        return rotatedPointsList;
      }

      void
      consume(const IMC::ExpandingSquare* maneuver)
      {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;
        bool curveRight = m_maneuver.flags; //Flag of 1 means true

        std::list<XyPair> relativeWaypoints = generateRelativeWaypoints(m_maneuver.width, m_maneuver.hstep, m_maneuver.bearing, curveRight);

        m_plannedWaypoints = convertToAbsoluteWaypoints(relativeWaypoints, m_maneuver.lat, m_maneuver.lon);

        CoordinatePair firstWaypoint = m_plannedWaypoints.front();
        m_plannedWaypoints.pop_front();

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        sendPath(firstWaypoint.lat, firstWaypoint.lon);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        war("Inside consume EstimatedState");
        if (msg->getSource() != getSystemId())
          return;


        //New code!
        fp64_t lat = msg->lat;
        fp64_t lon = msg->lon;


      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR) {
          if (m_plannedWaypoints.size() <= 0) {
            war("No more waypoints");
            signalCompletion();
            return;
          }
          CoordinatePair nextWaypoint = m_plannedWaypoints.front();
          m_plannedWaypoints.pop_front();
          sendPath(nextWaypoint.lat, nextWaypoint.lon);
        }
      }

      //! Send new desired path as a DesiredPath IMC message
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        war("Inside sendPath");
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
