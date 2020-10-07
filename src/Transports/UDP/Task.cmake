if(LITE)
  if(Transports.UDP)
    set(TASK_ENABLED TRUE)
  else(Transports.UDP)
    set(TASK_ENABLED FALSE)
  endif(Transports.UDP)
endif(LITE)

