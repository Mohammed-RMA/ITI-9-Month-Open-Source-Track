cmake_minimum_required(VERSION 4.2)
project(task2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(task2
        Employee.cpp
        Employee.h
        main.cpp)
