if(LITE)
  if(Vision.UAVCamera)
    set(TASK_ENABLED TRUE)
  else(Vision.UAVCamera)
    set(TASK_ENABLED FALSE)
  endif(Vision.UAVCamera)
endif(LITE)

