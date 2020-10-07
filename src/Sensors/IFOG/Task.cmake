if(LITE)
  if(Sensors.IFOG)
    set(TASK_ENABLED TRUE)
    # This task is for Linux only.
    if(NOT DUNE_OS_LINUX)
      set(TASK_ENABLED FALSE)
    endif(NOT DUNE_OS_LINUX)
  else(Sensors.IFOG)
    set(TASK_ENABLED FALSE)
  endif(Sensors.IFOG)
else(LITE)
  # This task is for Linux only.
  if(NOT DUNE_OS_LINUX)
    set(TASK_ENABLED FALSE)
  endif(NOT DUNE_OS_LINUX)
endif(LITE)

set(TASK_LICENSE "Proprietary")
