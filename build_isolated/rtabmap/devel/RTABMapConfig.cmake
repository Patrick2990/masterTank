# - Config file for the RTABMap package
# It defines the following variables
#  RTABMap_INCLUDE_DIRS - include directories for RTABMap
#  RTABMap_LIBRARIES    - libraries to link against
#  RTABMap_CORE         - core library
#  RTABMap_UTILITE      - utilite library
#  RTABMap_GUI          - gui library (set if RTABMap is built with Qt)

# Compute paths
get_filename_component(RTABMap_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(RTABMap_INCLUDE_DIRS "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/corelib/include;/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/guilib/include;/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/utilite/include")

#core lib
find_library(RTABMap_CORE_RELEASE NAMES rtabmap_core NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)
find_library(RTABMap_CORE_DEBUG NAMES rtabmap_cored NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)

IF(RTABMap_CORE_DEBUG AND RTABMap_CORE_RELEASE)
   SET(RTABMap_CORE
      debug ${RTABMap_CORE_DEBUG}
      optimized ${RTABMap_CORE_RELEASE}
   )
ELSEIF(RTABMap_CORE_DEBUG)
   SET(RTABMap_CORE ${RTABMap_CORE_DEBUG})
ELSE()
   SET(RTABMap_CORE ${RTABMap_CORE_RELEASE})
ENDIF()

#utilite lib
find_library(RTABMap_UTILITE_RELEASE NAMES rtabmap_utilite NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)
find_library(RTABMap_UTILITE_DEBUG NAMES rtabmap_utilited NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)

IF(RTABMap_UTILITE_DEBUG AND RTABMap_UTILITE_RELEASE)
   SET(RTABMap_UTILITE
      debug ${RTABMap_UTILITE_DEBUG}
      optimized ${RTABMap_UTILITE_RELEASE}
   )
ELSEIF(RTABMap_UTILITE_DEBUG)
   SET(RTABMap_UTILITE ${RTABMap_UTILITE_DEBUG})
ELSE()
   SET(RTABMap_UTILITE ${RTABMap_UTILITE_RELEASE})
ENDIF()

set(RTABMap_LIBRARIES ${RTABMap_CORE} ${RTABMap_UTILITE})

#gui lib (OFF if RTAB-Map is not built with Qt)
if(ON)
   find_library(RTABMap_GUI_RELEASE NAMES rtabmap_gui NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)
   find_library(RTABMap_GUI_DEBUG NAMES rtabmap_guid NO_DEFAULT_PATH HINTS /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/lib /home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap/bin)
   
   IF(RTABMap_GUI_DEBUG AND RTABMap_GUI_RELEASE)
      SET(RTABMap_GUI
         debug ${RTABMap_GUI_DEBUG}
         optimized ${RTABMap_GUI_RELEASE}
      )
   ELSEIF(RTABMap_GUI_RELEASE)
      SET(RTABMap_GUI ${RTABMap_GUI_RELEASE})
   ELSEIF(RTABMap_GUI_DEBUG)
      SET(RTABMap_GUI ${RTABMap_GUI_DEBUG})
   ENDIF()
   
   set(RTABMap_LIBRARIES ${RTABMap_LIBRARIES} ${RTABMap_GUI})
endif(ON)

# Dependencies
if(false)
   find_package(VTK COMPONENTS vtkGUISupportQt NO_MODULE) # to define vtkGUISupportQt target
endif(false)
set(RTABMap_LIBRARIES ${RTABMap_LIBRARIES} /usr/lib/x86_64-linux-gnu/libz.so;/usr/lib/libOpenNI2.so;/usr/lib/x86_64-linux-gnu/libdc1394.so;/opt/ros/kinetic/lib/liboctomap.so;/opt/ros/kinetic/lib/liboctomath.so)

#backward compatibilities
set(RTABMAP_CORE ${RTABMap_CORE})
set(RTABMAP_UTILITE ${RTABMap_UTILITE})
if(RTABMap_GUI)
   set(RTABMAP_GUI ${RTABMap_GUI})
   set(RTABMAP_QT_VERSION 5)
endif(RTABMap_GUI)
