CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(RecursiveAssembliesProj CXX)

##################################################
#Precompiled headers
##################################################
#SET (CMAKE_MODULE_PATH "$ENV{ALTERNATIVE_TOOLS_PATH}/CMake")
#INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Cotire/CMake/cotire.cmake)

##################################################
#Enable C++11 mode
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-CXX11.cmake)

SET_PROPERTY(GLOBAL PROPERTY GL_IS_RELEASE 0)
SET(EXECPATH MyDepth2Class.cpp MyDepth2Class.h MyDepth2Class.cpp MyDepth2Class.h MyDepth1Class.cpp MyDepth1Class.h MyDepth1Class.cpp MyDepth1Class.h Program.cpp Program.h main.cpp Program.cpp Program.h main.cpp)

ADD_EXECUTABLE(RecursiveAssemblies ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/public)

TARGET_LINK_LIBRARIES(RecursiveAssemblies C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(RecursiveAssemblies C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(RecursiveAssemblies pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(RecursiveAssemblies)
SET(PROJ_NAME RecursiveAssemblies)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
