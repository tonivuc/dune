if(LITE)
  if(Simulators.AcousticModem)
    set(TASK_ENABLED TRUE)
  else(Simulators.AcousticModem)
    set(TASK_ENABLED FALSE)
  endif(Simulators.AcousticModem)
endif(LITE)

