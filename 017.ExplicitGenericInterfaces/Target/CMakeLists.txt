CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(ExplicitGenericInterfacesProj CXX)

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
SET(EXECPATH IA.h IB_T.h IC_T.h C_T.h A.cpp A.h Program.cpp Program.h main.cpp IA.h IB_T.h IC_T.h C_T.h A.cpp A.h Program.cpp Program.h main.cpp)

ADD_EXECUTABLE(ExplicitGenericInterfaces ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/public)

TARGET_LINK_LIBRARIES(ExplicitGenericInterfaces C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(ExplicitGenericInterfaces C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(ExplicitGenericInterfaces pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(ExplicitGenericInterfaces)
SET(PROJ_NAME ExplicitGenericInterfaces)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
