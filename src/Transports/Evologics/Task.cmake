if(LITE)
  if(Transports.Evologics)
    set(TASK_ENABLED TRUE)
  else(Transports.Evologics)
    set(TASK_ENABLED FALSE)
  endif(Transports.Evologics)
endif(LITE)

