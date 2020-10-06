############################################################################
# Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Pedro Gonçalves                                                  #
############################################################################

##########################################################################
#                         Actuatores                                     #
##########################################################################
SET(AMC FALSE)
SET(Broom FALSE)
SET(FLIRPTU FALSE)
SET(LED4R FALSE)
SET(MCD4R FALSE)
SET(MicroCamD FALSE)
SET(PWM FALSE)
SET(SCRTv4 FALSE)
SET(SIMCT01 FALSE)
SET(SingleSIMCT01 FALSE)

##########################################################################
#                         Autonomy                                       #
##########################################################################
SET(OnEvent FALSE)
SET(TextActions FALSE)
SET(TREX FALSE)

##########################################################################
#                         Control                                        #
##########################################################################
SET(AntennaTracker FALSE)
SET(ASV.HeadingAndSpeed FALSE)
SET(ASV.RemoteOperation FALSE)
SET(AUV.Allocator FALSE)
SET(AUV.Attitude FALSE)
SET(AUV.Diving FALSE)
SET(AUV.LMI FALSE)
SET(AUV.RemoteOperation FALSE)
SET(AUV.Speed FALSE)
SET(Path.Height FALSE)
SET(Path.ILOS FALSE)
SET(Path.LOSnSMC FALSE)
SET(Path.PurePursuit FALSE)
SET(Path.VectorField FALSE)
SET(ROV.Depth FALSE)
SET(ROV.HorizontalPlane FALSE)
SET(ROV.RemoteOperation FALSE)
SET(UAV.Ardupilot FALSE)
SET(UAV.LOS FALSE)
SET(UAV.PX4 FALSE)
SET(UAV.RemoteOperation FALSE)

##########################################################################
#                         Maneuver                                       #
##########################################################################
SET(CommsRelay FALSE)
SET(CompassCalibration FALSE)
SET(CoverArea FALSE)
SET(FlyByCamera FALSE)
SET(FollowReference.AUV FALSE)
SET(FollowReference.UAV FALSE)
SET(FollowSystem FALSE)
SET(FollowTarget FALSE)
SET(FollowTrajectory FALSE)
SET(Multiplexer FALSE)
SET(RowsCoverage FALSE)
SET(Teleoperation FALSE)
SET(VehicleFormation.Coordinator FALSE)
SET(VehicleFormation.FormCollAvoid FALSE)
SET(VehicleFormation.SMC FALSE)
SET(VehicleFormation.Test FALSE)

##########################################################################
#                         Monitors                                       #
##########################################################################
SET(Clock FALSE)
SET(Collisions FALSE)
SET(Emergency FALSE)
SET(Entities FALSE)
SET(FuelLevel FALSE)
SET(Medium FALSE)
SET(OperationalLimits FALSE)
SET(Servos FALSE)

##########################################################################
#                         Navigation                                     #
##########################################################################
SET(AUV.Navigation FALSE)
SET(AUV.Ranger FALSE)
SET(General.GPSNavigation FALSE)
SET(General.LBL FALSE)
SET(General.ROV FALSE)

##########################################################################
#                         Plan                                           #
##########################################################################
SET(DB FALSE)
SET(Engine FALSE)
SET(Generator FALSE)

## Color CMAKE Output
if(NOT WIN32)
  string(ASCII 27 Esc)
  set(ColourReset "${Esc}[m")
  set(ColourBold  "${Esc}[1m")
  set(Red         "${Esc}[31m")
  set(Green       "${Esc}[32m")
  set(Yellow      "${Esc}[33m")
  set(Blue        "${Esc}[34m")
  set(Magenta     "${Esc}[35m")
  set(Cyan        "${Esc}[36m")
  set(White       "${Esc}[37m")
  set(BoldRed     "${Esc}[1;31m")
  set(BoldGreen   "${Esc}[1;32m")
  set(BoldYellow  "${Esc}[1;33m")
  set(BoldBlue    "${Esc}[1;34m")
  set(BoldMagenta "${Esc}[1;35m")
  set(BoldCyan    "${Esc}[1;36m")
  set(BoldWhite   "${Esc}[1;37m")
endif()