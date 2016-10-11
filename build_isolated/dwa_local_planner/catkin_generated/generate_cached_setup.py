# -*- coding: utf-8 -*-
from __future__ import print_function
import argparse
import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/kinetic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/kinetic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in "/home/plinux/RosPacks/masterTank/devel_isolated/clear_costmap_recovery;/home/plinux/RosPacks/masterTank/devel_isolated/carrot_planner;/home/plinux/RosPacks/masterTank/devel_isolated/base_local_planner;/home/plinux/RosPacks/masterTank/devel_isolated/nav_core;/home/plinux/RosPacks/masterTank/devel_isolated/frontier_exploration;/home/plinux/RosPacks/masterTank/devel_isolated/costmap_2d;/home/plinux/RosPacks/masterTank/devel_isolated/voxel_grid;/home/plinux/RosPacks/masterTank/devel_isolated/hokuyo_node;/home/plinux/RosPacks/masterTank/devel_isolated/timestamp_tools;/home/plinux/RosPacks/masterTank/devel_isolated/robot_pose_ekf;/home/plinux/RosPacks/masterTank/devel_isolated/navigation;/home/plinux/RosPacks/masterTank/devel_isolated/master_tank_navigation;/home/plinux/RosPacks/masterTank/devel_isolated/amcl;/home/plinux/RosPacks/masterTank/devel_isolated/map_server;/home/plinux/RosPacks/masterTank/devel_isolated/fake_localization;/home/plinux/RosPacks/masterTank/devel_isolated/driver_common;/home/plinux/RosPacks/masterTank/devel_isolated/driver_base;/opt/ros/kinetic".split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/plinux/RosPacks/masterTank/devel_isolated/dwa_local_planner/env.sh')

output_filename = '/home/plinux/RosPacks/masterTank/build_isolated/dwa_local_planner/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    #print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
