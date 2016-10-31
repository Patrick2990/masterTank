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
