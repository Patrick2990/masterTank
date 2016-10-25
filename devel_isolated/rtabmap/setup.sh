#!/usr/bin/env sh
# generated from catkin.builder module

# remember type of shell if not already set
if [ -z "$CATKIN_SHELL" ]; then
  CATKIN_SHELL=sh
fi
. "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/robot_pose_ekf/setup.$CATKIN_SHELL"

# detect if running on Darwin platform
_UNAME=`uname -s`
IS_DARWIN=0
if [ "$_UNAME" = "Darwin" ]; then
  IS_DARWIN=1
fi

# Prepend to the environment
export CMAKE_PREFIX_PATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap:$CMAKE_PREFIX_PATH"
if [ $IS_DARWIN -eq 0 ]; then
  export LD_LIBRARY_PATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
else
  export DYLD_LIBRARY_PATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib/x86_64-linux-gnu:$DYLD_LIBRARY_PATH"
fi
export PATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/bin:$PATH"
export PKG_CONFIG_PATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib/pkgconfig:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib/x86_64-linux-gnu/pkgconfig:$PKG_CONFIG_PATH"
export PYTHONPATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap/lib/python2.7/dist-packages:$PYTHONPATH"
