cmake_minimum_required(VERSION 3.3)
project(03_Exams)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp HS2014/constCorrect.cpp HS2014/constCorrect.h HS2014/inheritance.cpp HS2014/inheritance.h HS2014/setkAndSet.cpp HS2014/setkAndSet.h HS2014/bindAndFind.cpp HS2014/bindAndFind.h HS2014/sackTemplate.cpp HS2014/sackTemplate.h HS2013/constCorrect.cpp HS2013/constCorrect.h HS2013/sb_iterator.cpp HS2013/sb_iterator.h HS2014/deck.h HS2013/stammbruch_iterator.h HS2013/sbInBoost.cpp HS2013/sbInBoost.h HS2013/BookImple.h HS2013/Book.h)
add_executable(03_Exams ${SOURCE_FILES})