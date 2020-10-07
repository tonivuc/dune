if(LITE)
  if(Vision.PhotoTrigger)
    set(TASK_ENABLED TRUE)
  else(Vision.PhotoTrigger)
    set(TASK_ENABLED FALSE)
  endif(Vision.PhotoTrigger)
endif(LITE)

