if(LITE)
  if(Transports.IridiumSBD)
    set(TASK_ENABLED TRUE)
  else(Transports.IridiumSBD)
    set(TASK_ENABLED FALSE)
  endif(Transports.IridiumSBD)
endif(LITE)

