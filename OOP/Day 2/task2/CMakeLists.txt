cmake_minimum_required(VERSION 4.2)
project(task3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(task3
        main.cpp
        Point.cpp
        Point.h)
