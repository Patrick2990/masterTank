# CMake generated Testfile for 
# Source directory: /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/frontier_exploration
# Build directory: /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_frontier_exploration_gtest_frontier_search_tests "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-frontier_search_tests.xml" "--return-code" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/frontier_exploration/lib/frontier_exploration/frontier_search_tests --gtest_output=xml:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-frontier_search_tests.xml")
add_test(_ctest_frontier_exploration_gtest_geometry_tools_tests "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-geometry_tools_tests.xml" "--return-code" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/frontier_exploration/lib/frontier_exploration/geometry_tools_tests --gtest_output=xml:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-geometry_tools_tests.xml")
add_test(_ctest_frontier_exploration_gtest_costmap_tools_tests "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-costmap_tools_tests.xml" "--return-code" "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/frontier_exploration/lib/frontier_exploration/costmap_tools_tests --gtest_output=xml:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/frontier_exploration/test_results/frontier_exploration/gtest-costmap_tools_tests.xml")
subdirs(gtest)
