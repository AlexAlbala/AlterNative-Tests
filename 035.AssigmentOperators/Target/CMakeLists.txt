CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(AssigmentOperatorsProj CXX)

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
SET(EXECPATH AssignmentOperatorTest.cpp AssignmentOperatorTest.h main.cpp AssignmentOperatorTest.cpp AssignmentOperatorTest.h main.cpp)

ADD_EXECUTABLE(AssigmentOperators ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/public)

TARGET_LINK_LIBRARIES(AssigmentOperators C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(AssigmentOperators C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(AssigmentOperators pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(AssigmentOperators)
SET(PROJ_NAME AssigmentOperators)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
