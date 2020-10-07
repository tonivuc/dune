if(LITE)
  if(Transports.FTP)
    set(TASK_ENABLED TRUE)
  else(Transports.FTP)
    set(TASK_ENABLED FALSE)
  endif(Transports.FTP)
endif(LITE)

