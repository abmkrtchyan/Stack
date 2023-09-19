cmake_minimum_required(VERSION 3.0)
project(Stack)

set(CMAKE_CXX_STANDARD 14)

include_directories(./include)

add_executable(Stack
        src/main.cpp)
