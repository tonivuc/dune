if(LITE)
  if(Transports.GSM)
    set(TASK_ENABLED TRUE)
  else(Transports.GSM)
    set(TASK_ENABLED FALSE)
  endif(Transports.GSM)
endif(LITE)

