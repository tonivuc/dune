if(LITE)
  if(Transports.Seatrac)
    set(TASK_ENABLED TRUE)
  else(Transports.Seatrac)
    set(TASK_ENABLED FALSE)
  endif(Transports.Seatrac)
endif(LITE)

