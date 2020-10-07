if(LITE)
  if(Transports.Fragments)
    set(TASK_ENABLED TRUE)
  else(Transports.Fragments)
    set(TASK_ENABLED FALSE)
  endif(Transports.Fragments)
endif(LITE)

