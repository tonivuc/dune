if(LITE)
  if(Supervisors.SlaveCPU)
    set(TASK_ENABLED TRUE)
  else(Supervisors.SlaveCPU)
    set(TASK_ENABLED FALSE)
  endif(Supervisors.SlaveCPU)
endif(LITE)

