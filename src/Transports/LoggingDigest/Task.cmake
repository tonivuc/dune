if(LITE)
  if(Transports.LoggingDigest)
    set(TASK_ENABLED TRUE)
  else(Transports.LoggingDigest)
    set(TASK_ENABLED FALSE)
  endif(Transports.LoggingDigest)
endif(LITE)

