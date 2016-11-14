#!/bin/bash

# Get root
#if [ $EUID != 0 ]; then
#    sudo "$0" "$@"
#    exit $?
#fi

git clone https://github.com/introlab/rtabmap.git
cd rtabmap/build
cmake ..
make -j8
sudo make install
cd ..
cd ..

cd src/rtabmap_ros
git clone https://github.com/introlab/rtabmap_ros.git src/rtabmap_ros
cd ..
cd ..
export ROS_LANG_DISABLE=genjava
catkin_make --pkg rtabmap_ros
