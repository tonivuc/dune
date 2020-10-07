if(LITE)
  if(Transports.TCP.Client)
    set(TASK_ENABLED TRUE)
  else(Transports.TCP.Client)
    set(TASK_ENABLED FALSE)
  endif(Transports.TCP.Client)
endif(LITE)

