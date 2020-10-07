if(LITE)
  if(Transports.UAN)
    set(TASK_ENABLED TRUE)
  else(Transports.UAN)
    set(TASK_ENABLED FALSE)
  endif(Transports.UAN)
endif(LITE)

