if(LITE)
  if(Supervisors.UAV.LostComms)
    set(TASK_ENABLED TRUE)
  else(Supervisors.UAV.LostComms)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.UAV.LostComms)
endif(LITE)

