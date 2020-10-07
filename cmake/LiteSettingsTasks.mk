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
SET(Actuatores.AMC FALSE)
SET(Actuatores.Broom FALSE)
SET(Actuatores.FLIRPTU FALSE)
SET(Actuatores.LED4R FALSE)
SET(Actuatores.MCD4R FALSE)
SET(Actuatores.MicroCamD FALSE)
SET(Actuatores.PWM FALSE)
SET(Actuatores.SCRTv4 FALSE)
SET(Actuatores.SIMCT01 FALSE)
SET(Actuatores.SingleSIMCT01 FALSE)

##########################################################################
#                         Autonomy                                       #
##########################################################################
SET(Autonomy.OnEvent FALSE)
SET(Autonomy.TextActions FALSE)
SET(Autonomy.TREX FALSE)

##########################################################################
#                         Control                                        #
##########################################################################
SET(Control.AntennaTracker FALSE)
SET(Control.ASV.HeadingAndSpeed FALSE)
SET(Control.ASV.RemoteOperation FALSE)
SET(Control.AUV.Allocator FALSE)
SET(Control.AUV.Attitude FALSE)
SET(Control.AUV.Diving FALSE)
SET(Control.AUV.LMI FALSE)
SET(Control.AUV.RemoteOperation FALSE)
SET(Control.AUV.Speed FALSE)
SET(Control.Path.Height FALSE)
SET(Control.Path.ILOS FALSE)
SET(Control.Path.LOSnSMC FALSE)
SET(Control.Path.PurePursuit FALSE)
SET(Control.Path.VectorField FALSE)
SET(Control.ROV.Depth FALSE)
SET(Control.ROV.HorizontalPlane FALSE)
SET(Control.ROV.RemoteOperation FALSE)
SET(Control.UAV.Ardupilot FALSE)
SET(Control.UAV.LOS FALSE)
SET(Control.UAV.PX4 FALSE)
SET(Control.UAV.RemoteOperation FALSE)

##########################################################################
#                         Maneuver                                       #
##########################################################################
SET(Maneuver.CommsRelay FALSE)
SET(Maneuver.CompassCalibration FALSE)
SET(Maneuver.CoverArea FALSE)
SET(Maneuver.FlyByCamera FALSE)
SET(Maneuver.FollowReference.AUV FALSE)
SET(Maneuver.FollowReference.UAV FALSE)
SET(Maneuver.FollowSystem FALSE)
SET(Maneuver.FollowTarget FALSE)
SET(Maneuver.FollowTrajectory FALSE)
SET(Maneuver.Multiplexer FALSE)
SET(Maneuver.RowsCoverage FALSE)
SET(Maneuver.Teleoperation FALSE)
SET(Maneuver.VehicleFormation.Coordinator FALSE)
SET(Maneuver.VehicleFormation.FormCollAvoid FALSE)
SET(Maneuver.VehicleFormation.SMC FALSE)
SET(Maneuver.VehicleFormation.Test FALSE)

##########################################################################
#                         Monitors                                       #
##########################################################################
SET(Monitors.Clock FALSE)
SET(Monitors.Collisions FALSE)
SET(Monitors.Emergency FALSE)
SET(Monitors.Entities FALSE)
SET(Monitors.FuelLevel FALSE)
SET(Monitors.Medium FALSE)
SET(Monitors.OperationalLimits FALSE)
SET(Monitors.Servos FALSE)

##########################################################################
#                         Navigation                                     #
##########################################################################
SET(Navigation.AUV.Navigation FALSE)
SET(Navigation.AUV.Ranger FALSE)
SET(Navigation.General.GPSNavigation FALSE)
SET(Navigation.General.LBL FALSE)
SET(Navigation.General.ROV FALSE)

##########################################################################
#                         Plan                                           #
##########################################################################
SET(Plan.DB FALSE)
SET(Plan.Engine FALSE)
SET(Plan.Generator FALSE)

##########################################################################
#                         Power                                          #
##########################################################################
SET(Power.APD FALSE)
SET(Power.BATMANv2 FALSE)
SET(Power.CPMB FALSE)
SET(Power.CPMBv2 FALSE)
SET(Power.DOAMv1 FALSE)
SET(Power.DOAMv2 FALSE)
SET(Power.LUEMB FALSE)
SET(Power.MCBv2 FALSE)
SET(Power.OPCON FALSE)
SET(Power.PCTLv2 FALSE)
SET(Power.PSIMAR FALSE)

##########################################################################
#                         Sensors                                        #
##########################################################################
SET(Sensors.AIM104MultiIO FALSE)
SET(Sensors.AIS FALSE)
SET(Sensors.CyclopsC7 FALSE)
SET(Sensors.DataStore FALSE)
SET(Sensors.DMS FALSE)
SET(Sensors.Edgetech2205 FALSE)
SET(Sensors.EmulatedGPS FALSE)
SET(Sensors.Genesys FALSE)
SET(Sensors.GillWindObserverII FALSE)
SET(Sensors.GPS FALSE)
SET(Sensors.IFOG FALSE)
SET(Sensors.Imagenex837B FALSE)
SET(Sensors.Imagenex852 FALSE)
SET(Sensors.Imagenex872 FALSE)
SET(Sensors.Imagenex881A FALSE)
SET(Sensors.Keller FALSE)
SET(Sensors.LIMU FALSE)
SET(Sensors.MetrecX FALSE)
SET(Sensors.Microstrain3DMGX1 FALSE)
SET(Sensors.Microstrain3DMGX3 FALSE)
SET(Sensors.MiniSVS FALSE)
SET(Sensors.MLBL FALSE)
SET(Sensors.MLBLTracker FALSE)
SET(Sensors.MTi FALSE)
SET(Sensors.OEMX FALSE)
SET(Sensors.OS4000 FALSE)
SET(Sensors.SADC FALSE)
SET(Sensors.SCH311X FALSE)
SET(Sensors.SonTekArgonaut FALSE)
SET(Sensors.SW100 FALSE)
SET(Sensors.ThermalZone FALSE)
SET(Sensors.WifiRSSI FALSE)
SET(Sensors.XchangeSV FALSE)
SET(Sensors.XR620CTD FALSE)

##########################################################################
#                         Simulators                                     #
##########################################################################
SET(Simulators.AcousticModem FALSE)
SET(Simulators.CDC3 FALSE)
SET(Simulators.CTD FALSE)
SET(Simulators.DepthSensor FALSE)
SET(Simulators.Docking FALSE)
SET(Simulators.DVL FALSE)
SET(Simulators.Environment FALSE)
SET(Simulators.Gaussian FALSE)
SET(Simulators.GPS FALSE)
SET(Simulators.IMU FALSE)
SET(Simulators.Iridium FALSE)
SET(Simulators.LBL FALSE)
SET(Simulators.Leaks FALSE)
SET(Simulators.Motor FALSE)
SET(Simulators.Reporter FALSE)
SET(Simulators.Servos FALSE)
SET(Simulators.StreamVelocity FALSE)
SET(Simulators.Target FALSE)
SET(Simulators.UAV FALSE)
SET(Simulators.UAVAutopilot FALSE)
SET(Simulators.USBL FALSE)
SET(Simulators.VSIM FALSE)

##########################################################################
#                         Supervisors                                    #
##########################################################################
SET(Supervisors.AUV.Assist FALSE)
SET(Supervisors.AUV.LostComms FALSE)
SET(Supervisors.Delegator FALSE)
SET(Supervisors.Entities FALSE)
SET(Supervisors.Power FALSE)
SET(Supervisors.PowerManager FALSE)
SET(Supervisors.Reporter FALSE)
SET(Supervisors.SlaveCPU FALSE)
SET(Supervisors.UAV.LostComms FALSE)
SET(Supervisors.Vehicle FALSE)

##########################################################################
#                         Transports                                     #
##########################################################################
SET(Transports.Announce FALSE)
SET(Transports.Cache FALSE)
SET(Transports.CommManager FALSE)
SET(Transports.DataStore FALSE)
SET(Transports.Discovery FALSE)
SET(Transports.Evologics FALSE)
SET(Transports.Fragments FALSE)
SET(Transports.FTP FALSE)
SET(Transports.GSM FALSE)
SET(Transports.HTTP TRUE)
SET(Transports.Iridium FALSE)
SET(Transports.IridiumSBD FALSE)
SET(Transports.LogBook FALSE)
SET(Transports.Logging FALSE)
SET(Transports.LoggingDigest FALSE)
SET(Transports.MobileInternet FALSE)
SET(Transports.Radio FALSE)
SET(Transports.Replay FALSE)
SET(Transports.Seatrac FALSE)
SET(Transports.Serial FALSE)
SET(Transports.SerialOverTCP FALSE)
SET(Transports.TCP.Client FALSE)
SET(Transports.TCP.Server FALSE)
SET(Transports.TCPOnDemand FALSE)
SET(Transports.UAN FALSE)
SET(Transports.UDP FALSE)

##########################################################################
#                         UserInterfaces                                 #
##########################################################################
SET(UserInterfaces.Buttons FALSE)
SET(UserInterfaces.LCD FALSE)
SET(UserInterfaces.LEDs FALSE)
SET(UserInterfaces.MantaPanel FALSE)

##########################################################################
#                         Vision                                         #
##########################################################################
SET(Vision.DFK51BG02H FALSE)
SET(Vision.FrameGrabber FALSE)
SET(Vision.Lumenera FALSE)
SET(Vision.PhotoTrigger FALSE)
SET(Vision.UAVCamera FALSE)
SET(Vision.UI2210MGL FALSE)


## Color CMAKE Output
if(NOT DUNE_OS_WINDOWS)
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