cmake_minimum_required(VERSION 3.3)
project(03_Exams)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp HS2014/constCorrect.cpp HS2014/constCorrect.h)
add_executable(03_Exams ${SOURCE_FILES})