if(LITE)
  if(Simulators.DepthSensor)
    set(TASK_ENABLED TRUE)
  else(Simulators.DepthSensor)
    set(TASK_ENABLED FALSE)
  endif(Simulators.DepthSensor)
endif(LITE)

