# Install script for directory: /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/devel_isolated/rtabmap")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rtabmap-0.11" TYPE FILE FILES
    "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/CMakeFiles/RTABMapConfig.cmake"
    "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/RTABMapConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtabmap" TYPE FILE FILES "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/utilite/cmake_install.cmake")
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/corelib/cmake_install.cmake")
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/guilib/cmake_install.cmake")
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/app/cmake_install.cmake")
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/tools/cmake_install.cmake")
  include("/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/rtabmap/devel/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
