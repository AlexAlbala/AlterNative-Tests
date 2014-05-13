CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(ListProj CXX)

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
SET(EXECPATH MyList.cpp MyList.h Node.cpp Node.h Program.cpp Program.h main.cpp Utils.cpp Utils.h MyList.cpp MyList.h Node.cpp Node.h Program.cpp Program.h main.cpp Utils.cpp Utils.h)

ADD_EXECUTABLE(List ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/public)

TARGET_LINK_LIBRARIES(List C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(List C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(List pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(List)
SET(PROJ_NAME List)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
