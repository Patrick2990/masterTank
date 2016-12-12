#!/bin/bash

mkdir -p rtabmap/build
cd rtabmap/build
cmake ..
make -j8
sudo make install
cd ../..

# init workspace
cd ./src/ && catkin_init_workspace

git clone https://github.com/introlab/rtabmap_ros.git
git clone https://github.com/ros-perception/pcl_conversions.git
git clone https://github.com/strawlab/perception_pcl.git

# build driver_base; timestamp_tools; driver_common packages first
cd ..

catkin_make --pkg rtabmap_ros
catkin_make --pkg driver_base timestamp_tools driver_common navigation frontier_exploration

#catkin_make -DCATKIN_WHILELIST_PACKAGES="driver_base; timestamp_tools; driver_common"

# build all
catkin_make
#catkin_make -DCATKIN_WHILELIST_PACKAGES=""

echo "Done! :-)"
