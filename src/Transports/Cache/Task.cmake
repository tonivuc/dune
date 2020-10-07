if(LITE)
  if(Transports.Cache)
    set(TASK_ENABLED TRUE)
  else(Transports.Cache)
    set(TASK_ENABLED FALSE)
  endif(Transports.Cache)
endif(LITE)

