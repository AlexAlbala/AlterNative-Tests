CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(ImplicitCastProj CXX)

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
SET(EXECPATH A.cpp A.h B.cpp B.h C.cpp C.h Program.cpp Program.h main.cpp A.cpp A.h B.cpp B.h C.cpp C.h Program.cpp Program.h main.cpp)

ADD_EXECUTABLE(ImplicitCast ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/public)

TARGET_LINK_LIBRARIES(ImplicitCast C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(ImplicitCast C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(ImplicitCast pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(ImplicitCast)
SET(PROJ_NAME ImplicitCast)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
