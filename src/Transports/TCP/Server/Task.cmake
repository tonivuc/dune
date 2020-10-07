if(LITE)
  if(Transports.TCP.Server)
    set(TASK_ENABLED TRUE)
  else(Transports.TCP.Server)
    set(TASK_ENABLED FALSE)
  endif(Transports.TCP.Server)
endif(LITE)

