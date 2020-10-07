if(LITE)
  if(Simulators.Motor)
    set(TASK_ENABLED TRUE)
  else(Simulators.Motor)
    set(TASK_ENABLED FALSE)
  endif(Simulators.Motor)
endif(LITE)

