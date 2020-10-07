if(LITE)
  if(Transports.Announce)
    set(TASK_ENABLED TRUE)
  else(Transports.Announce)
    set(TASK_ENABLED FALSE)
  endif(Transports.Announce)
endif(LITE)

