cmake_minimum_required(VERSION 3.3)
project(02_basics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CountingTools.cpp CountingTools.h ../../LoadLink/Link.cpp ../../LoadLink/Link.h Hello/Hello.cpp Hello/Hello.h Variables/VariableSandbox.cpp Variables/VariableSandbox.h)
add_executable(02_basics ${SOURCE_FILES})