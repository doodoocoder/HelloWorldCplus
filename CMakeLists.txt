cmake_minimum_required(VERSION 3.12)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--add-stdcall-alias")

link_directories("lib")#必须把Link写在add_library的前面.lib是相对于根目录而言
link_libraries(jvm)#必须把Link写在add_library的前面

add_library(
        HelloWorld
        SHARED
         HelloWorld.cpp jni_util.c
)
