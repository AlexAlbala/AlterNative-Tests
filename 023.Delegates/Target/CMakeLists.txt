CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(DelegatesProj CXX)

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
SET(EXECPATH Program.cpp Program.h main.cpp DelegatesTest.cpp DelegatesTest.h Program.cpp Program.h main.cpp DelegatesTest.cpp DelegatesTest.h)

ADD_EXECUTABLE(Delegates ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/public)

TARGET_LINK_LIBRARIES(Delegates C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(Delegates C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(Delegates pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(Delegates)
SET(PROJ_NAME Delegates)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
