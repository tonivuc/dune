if(LITE)
  if(Supervisors.Reporter)
    set(TASK_ENABLED TRUE)
  else(Supervisors.Reporter)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.Reporter)
endif(LITE)

