if(LITE)
  if(Supervisors.Delegator)
    set(TASK_ENABLED TRUE)
  else(Supervisors.Delegator)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.Delegator)
endif(LITE)

