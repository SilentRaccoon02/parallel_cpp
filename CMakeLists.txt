cmake_minimum_required(VERSION 3.16)

project(parallel_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(thread thread.cpp)
add_executable(mutex mutex.cpp)
add_executable(lock_guard lock_guard.cpp)
add_executable(recursive_mutex recursive_mutex.cpp)
