CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(InterClassBoxingProj CXX)
##################################################
#Enable C++11 mode
##################################################
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang" OR CMAKE_COMPILER_IS_GNUCXX)
    include(CheckCXXCompilerFlag)
    check_cxx_compiler_flag(--std=c++11 SUPPORTS_STD_CXX11)
    check_cxx_compiler_flag(--std=c++0x SUPPORTS_STD_CXX01)
    if(SUPPORTS_STD_CXX11)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --std=c++11")
    elseif(SUPPORTS_STD_CXX01)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++0x")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --std=c++0x")
    else()
        message(ERROR "Compiler does not support --std=c++11 or --std=c++0x.")
    endif()
endif()
SET_PROPERTY(GLOBAL PROPERTY GL_IS_RELEASE 0)
SET(EXECPATH Container_T.h Program.cpp Program.h main.cpp Container_T.h Program.cpp Program.h main.cpp)
ADD_EXECUTABLE(InterClassBoxing ${EXECPATH})
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/public)
INCLUDE_DIRECTORIES(C:/Users/Alex/Desktop/AlterNative/Lib/src/private)
TARGET_LINK_LIBRARIES(InterClassBoxing C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/System.lib)
TARGET_LINK_LIBRARIES(InterClassBoxing C:/Users/Alex/Desktop/AlterNative/Lib/build/libfiles/gc-lib.lib)
IF(UNIX)
IF(!ANDROID)
TARGET_LINK_LIBRARIES(InterClassBoxing pthread)
ENDIF()
ENDIF(UNIX)
SET(PROJ_NAME InterClassBoxing)
##################################################
#Find boost libraries
##################################################
GET_PROPERTY(IS_RELEASE GLOBAL PROPERTY GL_IS_RELEASE)

SET(Boost_USE_STATIC_LIBS        ON)
SET(Boost_USE_MULTITHREADED      ON)
SET(Boost_USE_STATIC_RUNTIME    OFF)

FIND_PACKAGE( Boost REQUIRED COMPONENTS system locale thread date_time chrono)

IF(Boost_FOUND)
	INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})
	TARGET_LINK_LIBRARIES(${PROJ_NAME} ${Boost_LIBRARIES})
ELSE()
	MESSAGE("Please install boost libraries before using AlterNative. 1-55 or higher version recommended")
ENDIF()
