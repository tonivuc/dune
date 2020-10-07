if(LITE)
  if(Simulators.Leaks)
    set(TASK_ENABLED TRUE)
  else(Simulators.Leaks)
    set(TASK_ENABLED FALSE)
  endif(Simulators.Leaks)
endif(LITE)

