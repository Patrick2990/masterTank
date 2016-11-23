#!/bin/bash

arr[1]="christian"
arr[2]="patrick"
arr[3]="thor"

if [ $1 == "Christian" ]; then
    . /opt/ros/kinetic/setup.bash
    . ~/Workspaces/masterTank/devel/setup.bash
    . ~/Workspaces/visionnode/devel/setup.bash
    echo Heeej $1!
    export ROS_IP="192.168.0.5"
    export ROS_HOSTNAME="192.168.0.5"
elif [ $1 == "Patrick" ]; then
    . /opt/ros/kinetic/setup.bash
    . ~/RosPacks/masterTank/devel/setup.bash
    . ~/RosPacks/visionnode/devel/setup.bash
    echo Heeej $1!
    export ROS_IP="192.168.0.7"
    export ROS_HOSTNAME="192.168.0.7"
elif [ $1 == "Thor" ]; then
    . /opt/ros/kinetic/setup.bash
    . ~/Workspaces/masterTank/devel/setup.bash
    . ~/Workspaces/visionnode/devel/setup.bash
    echo Heeej $1!
    export ROS_IP="192.168.0.3"
    export ROS_HOSTNAME="192.168.0.3"
else
    echo Unknown user..
    echo Bye! Bye!
    exit
fi

echo
echo "Hvem er leader???"
echo "1. ${arr[1]}"
echo "2. ${arr[2]}"
echo "3. ${arr[3]}"

let masterString
read master
if [ ${master} == "1" ]; then
    masterString="192.168.0.5"
    export ROS_MASTER="$masterString"
    export ROS_MASTER_URI="http://192.168.0.5:11311/"
elif [ ${master} == "2" ]; then
    masterString="192.168.0.7"
    export ROS_MASTER="$masterString"
    export ROS_MASTER_URI="http://192.168.0.7:11311/"
elif [ ${master} == "3" ]; then
    masterString="192.168.0.3"
    export ROS_MASTER="$masterString"
    export ROS_MASTER_URI="http://192.168.0.3:11311/"
else
    echo Unknown input..
    echo Bye! Bye!
    exit
fi

echo
echo "Run packages? 'y' to continue"

read node
if [ ${node} == "y" ]; then
    echo Starting SSH to master "${masterString}"
    exec gnome-terminal -e "bash -c 'ssh root@"${masterString}" roslaunch my_robot_name_2dnav ${arr[${master}]}.launch;$SHELL'" &
    echo "Waiting a bit for my_robot_name_2dnav.."
    sleep 7
    exec gnome-terminal -e "bash -c 'ssh root@"${masterString}" roslaunch visionnode main.launch;$SHELL'" &
    exec gnome-terminal -e "bash -c 'rosrun rtabmap_ros rtabmap;$SHELL'" &
    exec rviz
else
    echo "Terminal is set-up & ready!"
    exit
fi