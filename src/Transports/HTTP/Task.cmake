if(LITE)
  if(Transports.HTTP)
    set(TASK_ENABLED TRUE)
  else(Transports.HTTP)
    set(TASK_ENABLED FALSE)
  endif(Transports.HTTP)
endif(LITE)

