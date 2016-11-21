#!/bin/bash

# Get root
#if [ $EUID != 0 ]; then
#    sudo "$0" "$@"
#    exit $?
#fi

cd rtabmap/build
cmake ..
make -j8
sudo make install
cd ..
cd ..

catkin_make --pkg rtabmap_ros
