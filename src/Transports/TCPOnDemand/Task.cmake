if(LITE)
  if(Transports.TCPOnDemand)
    set(TASK_ENABLED TRUE)
  else(Transports.TCPOnDemand)
    set(TASK_ENABLED FALSE)
  endif(Transports.TCPOnDemand)
endif(LITE)

