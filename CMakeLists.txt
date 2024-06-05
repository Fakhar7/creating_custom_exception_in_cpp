cmake_minimum_required(VERSION 3.28)
project(CustomException)

set(CMAKE_CXX_STANDARD 17)

add_executable(CustomException main.cpp
        Locked.cpp
        Locked.h)
