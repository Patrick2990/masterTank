cmake_minimum_required(VERSION 2.8.3)
project(smr_computer)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  tf
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES mobotware_test
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)
link_directories(../../../../build/lib)
#add_executable(smr_control src/smr_control_node.cpp)
#target_link_libraries(smr_control ${catkin_LIBRARIES} -lm ../../../../build/lib/librhd.a ../../../../mrc/trunk/librobot.a)
#target_compile_options(smr_control PUBLIC -O0 -I ../../../../build/include)
add_executable(tst_subscriber src/tst_subscriber.cpp)
target_link_libraries(tst_subscriber ${catkin_LIBRARIES})
add_executable(smr_laser src/smr_laser_node.cpp src/pugixml.cpp)
target_link_libraries(smr_laser ${catkin_LIBRARIES})
