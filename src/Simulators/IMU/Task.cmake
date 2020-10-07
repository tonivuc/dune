if(LITE)
  if(Simulators.IMU)
    set(TASK_ENABLED TRUE)
  else(Simulators.IMU)
    set(TASK_ENABLED FALSE)
  endif(Simulators.IMU)
endif(LITE)

