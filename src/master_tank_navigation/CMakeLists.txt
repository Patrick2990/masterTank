cmake_minimum_required(VERSION 2.8.3)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++14" COMPILER_SUPPORTS_CXX14)
CHECK_CXX_COMPILER_FLAG("-std=c++1y" COMPILER_SUPPORTS_CXX1Y)
if(COMPILER_SUPPORTS_CXX14)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
elseif(COMPILER_SUPPORTS_CXX1Y)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++14 support. Please use a different C++ compiler.")
endif()

project(master_tank_navigation)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
 #       costmap_2d
        move_base_msgs
        geometry_msgs
        roscpp
        std_msgs
        tf
        actionlib
        actionlib_msgs
#        visualization_msgs
        message_generation
        genmsg 
        sensor_msgs
        driver_base
        )

add_action_files(
        DIRECTORY
        action
        FILES
        ExploreTask.action
)
add_message_files(
        DIRECTORY
        msg
        FILES
        PointCloud2Object.msg
)
generate_messages(
        DEPENDENCIES
        sensor_msgs std_msgs actionlib_msgs geometry_msgs move_base_msgs
)
catkin_package(
        INCLUDE_DIRS include
        #LIBRARIES lib
        CATKIN_DEPENDS roscpp message_runtime sensor_msgs std_msgs actionlib_msgs geometry_msgs move_base_msgs
        #DEPENDS system_lib
)

include_directories(include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${PCL_INCLUDE_DIRS})

add_executable(master_tank_navigation src/MasterTankMain.cpp include/MasterTankMain.h src/mianTest.cpp include/mianTest.h src/MasterTankExplore.cpp include/MasterTankExplore.h src/MasterTankObjectPlotter.cpp include/MasterTankObjectPlotter.h src/MasterTankMood.cpp include/MasterTankMood.h src/MasterTankMarch.cpp include/MasterTankMarch.h include/masterTankCommon.h)
target_link_libraries(master_tank_navigation ${catkin_LIBRARIES})

add_dependencies(master_tank_navigation  ${PROJECT_NAME}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})

#add_executable(simple_navigation_goals src/simple_navigation_goals.cpp)
#target_link_libraries(simple_navigation_goals ${catkin_LIBRARIES})
#add_dependencies(simple_navigation_goals ${PROJECT_NAME}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
