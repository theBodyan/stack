cmake_minimum_required(VERSION 3.24)
project(Stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Stack
        main.cpp Stack.h EStackException.h EStackException.cpp EStackEmpty.h)
