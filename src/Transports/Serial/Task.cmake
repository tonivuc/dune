if(LITE)
  if(Transports.Serial)
    set(TASK_ENABLED TRUE)
  else(Transports.Serial)
    set(TASK_ENABLED FALSE)
  endif(Transports.Serial)
endif(LITE)

