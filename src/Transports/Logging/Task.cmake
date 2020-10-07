if(LITE)
  if(Transports.Logging)
    set(TASK_ENABLED TRUE)
  else(Transports.Logging)
    set(TASK_ENABLED FALSE)
  endif(Transports.Logging)
endif(LITE)

