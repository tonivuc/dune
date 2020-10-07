if(LITE)
  if(Transports.Replay)
    set(TASK_ENABLED TRUE)
  else(Transports.Replay)
    set(TASK_ENABLED FALSE)
  endif(Transports.Replay)
endif(LITE)

