if(LITE)
  if(Transports.Radio)
    set(TASK_ENABLED TRUE)
  else(Transports.Radio)
    set(TASK_ENABLED FALSE)
  endif(Transports.Radio)
endif(LITE)

