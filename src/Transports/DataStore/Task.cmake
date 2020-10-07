if(LITE)
  if(Transports.DataStore)
    set(TASK_ENABLED TRUE)
  else(Transports.DataStore)
    set(TASK_ENABLED FALSE)
  endif(Transports.DataStore)
endif(LITE)

