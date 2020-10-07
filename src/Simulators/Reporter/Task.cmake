if(LITE)
  if(Simulators.Reporter)
    set(TASK_ENABLED TRUE)
  else(Simulators.Reporter)
    set(TASK_ENABLED FALSE)
  endif(Simulators.Reporter)
endif(LITE)

