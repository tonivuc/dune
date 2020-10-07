if(LITE)
  if(Simulators.GPS)
    set(TASK_ENABLED TRUE)
  else(Simulators.GPS)
    set(TASK_ENABLED FALSE)
  endif(Simulators.GPS)
endif(LITE)

