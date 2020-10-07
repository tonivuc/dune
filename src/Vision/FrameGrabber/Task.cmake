if(LITE)
  if(Vision.FrameGrabber)
    set(TASK_ENABLED TRUE)
  else(Vision.FrameGrabber)
    set(TASK_ENABLED FALSE)
  endif(Vision.FrameGrabber)
endif(LITE)

