if(LITE)
  if(Supervisors.AUV.LostComms)
    set(TASK_ENABLED TRUE)
  else(Supervisors.AUV.LostComms)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.AUV.LostComms)
endif(LITE)

