if(LITE)
  if(Transports.Discovery)
    set(TASK_ENABLED TRUE)
  else(Transports.Discovery)
    set(TASK_ENABLED FALSE)
  endif(Transports.Discovery)
endif(LITE)

