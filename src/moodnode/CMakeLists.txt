#cmake_minimum_required(VERSION 2.8.2)
#
#project(moodnode)
#
#include(CheckCXXCompilerFlag)
#CHECK_CXX_COMPILER_FLAG("-std=c++14" COMPILER_SUPPORTS_CXX14)
#CHECK_CXX_COMPILER_FLAG("-std=c++1y" COMPILER_SUPPORTS_CXX1Y)
#if(COMPILER_SUPPORTS_CXX14)
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#elseif(COMPILER_SUPPORTS_CXX1Y)
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
#else()
#    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++14 support. Please use a different C++ compiler.")
#endif()
#
#
### Find catkin macros and libraries
### if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
### is used, also find other catkin packages
#find_package(catkin REQUIRED COMPONENTS
#        geometry_msgs
#        roscpp
#        std_msgs
#        visualization_msgs
#        message_generation
#        )
#
#find_package(SDL2 REQUIRED)
#
#catkin_package(
#        INCLUDE_DIRS include
#        #LIBRARIES lib
#        CATKIN_DEPENDS roscpp
#        #DEPENDS system_lib
#)
#
#include_directories(include ${catkin_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
#
#add_executable(moodnode src/Sound.cpp include/Sound.h src/main.cpp include/moodEnums.h include/soundFiles.h)
#target_link_libraries(moodnode ${catkin_LIBRARIES} SDL2 SDL2_mixer ${SDL2_LIBRARIES})
#
#add_custom_command(TARGET moodnode POST_BUILD
#        COMMAND ${CMAKE_COMMAND} -E copy_directory
#        "${PROJECT_SOURCE_DIR}/sounds"
#        $<TARGET_FILE_DIR:moodnode>)