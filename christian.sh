#!/bin/bash

. /opt/ros/kinetic/setup.bash
. ~/Workspaces/visionnode/devel/setup.bash
. ~/Workspaces/masterTank/devel/setup.bash
. ~/Workspaces/gpunode/devel/setup.bash

export ROS_IP="192.168.0.5"
export ROS_HOSTNAME="192.168.0.5"

export ROS_MASTER="192.168.0.5"
export ROS_MASTER_URI="http://192.168.0.5:11311/"

exec roslaunch my_robot_name_2dnav christian.launch