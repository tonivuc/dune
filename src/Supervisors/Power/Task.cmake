if(LITE)
  if(Supervisors.Power)
    set(TASK_ENABLED TRUE)
  else(Supervisors.Power)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.Power)
endif(LITE)

