cmake_minimum_required(VERSION 2.8)

project(visionnode)

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

find_package(catkin REQUIRED COMPONENTS
        geometry_msgs
        roscpp
        std_msgs
        visualization_msgs
        message_generation
        pcl_conversions
        genmsg sensor_msgs
        tf
)

add_message_files(
        DIRECTORY
        msg
        FILES
        PointCloud2Object.msg
)

generate_messages(
        DEPENDENCIES
        std_msgs
        sensor_msgs
)

catkin_package(
        INCLUDE_DIRS include
        #LIBRARIES lib
        CATKIN_DEPENDS roscpp message_runtime sensor_msgs std_msgs
        #DEPENDS system_lib
)


find_package(PCL REQUIRED)

include_directories(include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

#[[FIND_PACKAGE(CUDA REQUIRED)

#Include the FindCUDA script
INCLUDE(FindCUDA)

SET(CUDA_NVCC_FLAGS "-arch=sm_50" CACHE STRING "nvcc flags" FORCE)
SET (CUDA_VERBOSE_BUILD ON CACHE BOOL "nvcc verbose" FORCE)
SET(LIB_TYPE STATIC)]]

add_executable(main src/main.cpp src/euclidCluster.cpp include/euclidCluster.h include/estimateVFH.h src/estimateVFH.cpp src/nearestNeighbors.cpp include/nearestNeighbors.h)

add_executable(buildClusters src/buildClusters.cpp src/euclidCluster.cpp include/euclidCluster.h include/estimateVFH.h src/estimateVFH.cpp)
add_executable(build_tree src/build_tree.cpp)

target_link_libraries(main ${catkin_LIBRARIES} mpi mpi++ ${PCL_LIBRARIES} ${HDF5_LIBRARY} ${HDF5_LIBRARIES} ${HDF5_hdf5_LIBRARY} ${FLANN_LIBRARIES})
target_link_libraries(buildClusters ${catkin_LIBRARIES} ${PCL_LIBRARIES})
target_link_libraries(build_tree ${catkin_LIBRARIES} mpi mpi++ ${PCL_LIBRARIES} ${HDF5_LIBRARY} ${HDF5_LIBRARIES} ${HDF5_hdf5_LIBRARY} ${FLANN_LIBRARIES})

add_dependencies(main  ${PROJECT_NAME}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})

file(COPY ${CMAKE_SOURCE_DIR}/visionnode/tree/kdtree.idx DESTINATION $ENV{ROS_HOME})
file(COPY ${CMAKE_SOURCE_DIR}/visionnode/tree/training_data.h5 DESTINATION $ENV{ROS_HOME})
file(COPY ${CMAKE_SOURCE_DIR}/visionnode/tree/training_data.list DESTINATION $ENV{ROS_HOME})


