#!/bin/bash

# save user
#let me=$(whoami)
#echo $me

# Get root
#if [ $EUID != 0 ]; then
#    sudo "$0" "$@"
#    exit $?
#fi

# remove old build and devel
#sudo rm -rf devel build ./src/CMakeLists.txt

# switch to user mode
#su $me
#sudo su

# init workspace
cd ./src/ && catkin_init_workspace 

# build driver_base; timestamp_tools; driver_common packages first
cd ..

catkin_make --pkg driver_base timestamp_tools driver_common navigation frontier_exploration
#catkin_make -DCATKIN_WHILELIST_PACKAGES="driver_base; timestamp_tools; driver_common"

# build all
catkin_make
#catkin_make -DCATKIN_WHILELIST_PACKAGES=""

echo "Done! :-)"

