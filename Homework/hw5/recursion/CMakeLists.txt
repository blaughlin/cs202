cmake_minimum_required(VERSION 3.20)
project(recursion)

set(CMAKE_CXX_STANDARD 14)

add_executable(recursion recursion.cpp StopWatch.cpp StopWatch.hpp)
