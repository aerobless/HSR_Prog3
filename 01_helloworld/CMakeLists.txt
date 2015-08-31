cmake_minimum_required(VERSION 3.3)
project(01_helloworld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp helloworld.cpp)
add_executable(01_helloworld ${SOURCE_FILES})