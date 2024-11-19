cmake_minimum_required(VERSION 3.16)

project(parallel_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(thread thread.cpp)
add_executable(jthread jthread.cpp)
