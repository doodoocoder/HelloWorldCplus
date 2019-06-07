cmake_minimum_required(VERSION 3.12)
project(HelloWorld)

#set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_USE_32BITS on)

set(
        SOURCE_TEMPLATES
)

set(
        SOURCE_FILES
        HelloWorld.cpp
)

set(
        SOURCE_HEADERS
        HelloWorld.h
)
add_library(
        HelloWorld
        SHARED
        ${SOURCE_FILES}
        ${SOURCE_TEMPLATES}
        ${SOURCE_HEADERS}
)
#add_library(HelloWorld SHARED  HelloWorld.cpp)