CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(ConstraintsProj CXX)

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
SET(EXECPATH Person.cpp Person.h A.cpp A.h B.cpp B.h C.cpp C.h Example_T.h Example2_T.h Program.cpp Program.h main.cpp Person.cpp Person.h A.cpp A.h B.cpp B.h C.cpp C.h Example_T.h Example2_T.h Program.cpp Program.h main.cpp)

ADD_EXECUTABLE(Constraints ${EXECPATH})

INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/private)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/Alter-Native/Lib/src/public)

TARGET_LINK_LIBRARIES(Constraints C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/gc-lib.lib)
TARGET_LINK_LIBRARIES(Constraints C:/Users/Alex/Desktop/Alter-Native/Lib/build/libfiles/System.lib)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(Constraints pthread)
ENDIF()
ENDIF(UNIX)

#COTIRE(Constraints)
SET(PROJ_NAME Constraints)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
