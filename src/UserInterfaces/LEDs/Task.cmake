if(LITE)
  if(UserInterfaces.LEDs)
    set(TASK_ENABLED TRUE)
  else(UserInterfaces.LEDs)
    set(TASK_ENABLED FALSE)
  endif(UserInterfaces.LEDs)
endif(LITE)

