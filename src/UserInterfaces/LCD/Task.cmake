if(LITE)
  if(UserInterfaces.LCD)
    set(TASK_ENABLED TRUE)
  else(UserInterfaces.LCD)
    set(TASK_ENABLED FALSE)
  endif(UserInterfaces.LCD)
endif(LITE)

