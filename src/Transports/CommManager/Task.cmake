if(LITE)
  if(Transports.CommManager)
    set(TASK_ENABLED TRUE)
  else(Transports.CommManager)
    set(TASK_ENABLED FALSE)
  endif(Transports.CommManager)
endif(LITE)

