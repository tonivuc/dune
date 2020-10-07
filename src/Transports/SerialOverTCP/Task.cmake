if(LITE)
  if(Transports.SerialOverTCP)
    set(TASK_ENABLED TRUE)
  else(Transports.SerialOverTCP)
    set(TASK_ENABLED FALSE)
  endif(Transports.SerialOverTCP)
endif(LITE)

