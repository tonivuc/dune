if(LITE)
  if(Transports.Iridium)
    set(TASK_ENABLED TRUE)
  else(Transports.Iridium)
    set(TASK_ENABLED FALSE)
  endif(Transports.Iridium)
endif(LITE)

