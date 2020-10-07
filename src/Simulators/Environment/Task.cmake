if(LITE)
  if(Simulators.Environment)
    set(TASK_ENABLED TRUE)
  else(Simulators.Environment)
    set(TASK_ENABLED FALSE)
  endif(Simulators.Environment)
endif(LITE)

