CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(primesProj CXX)

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
SET(EXECPATH PrimeNumber.cpp PrimeNumber.h main.cpp PrimeNumber.cpp PrimeNumber.h main.cpp)

ADD_EXECUTABLE(primes ${EXECPATH})

INCLUDE_DIRECTORIES(/Users/juan/Alter-Native/Lib/src/private)
INCLUDE_DIRECTORIES(/Users/juan/Alter-Native/Lib/src/public)

TARGET_LINK_LIBRARIES(primes /Users/juan/Alter-Native/Lib/build/libfiles/libSystem.a)
TARGET_LINK_LIBRARIES(primes /Users/juan/Alter-Native/Lib/build/libfiles/libgc-lib.a)

IF(UNIX)
IF(NOT ANDROID)
TARGET_LINK_LIBRARIES(primes pthread)
ENDIF()
ENDIF(UNIX)
IF(WIN32)
TARGET_LINK_LIBRARIES(primes Ws2_32.lib)
ENDIF(WIN32)

#COTIRE(primes)
SET(PROJ_NAME primes)

##################################################
#Find boost libraries
##################################################
INCLUDE($ENV{ALTERNATIVE_TOOLS_PATH}/Code/CMAKE-BOOST.cmake)
