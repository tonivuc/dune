if(LITE)
  if(Supervisors.PowerManager)
    set(TASK_ENABLED TRUE)
  else(Supervisors.PowerManager)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.PowerManager)
endif(LITE)

