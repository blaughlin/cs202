cmake_minimum_required(VERSION 3.20)
project(template_read_and_write)

set(CMAKE_CXX_STANDARD 17)

add_executable(template_read_and_write main.cpp myreadwrite.cpp myreadwrite.hpp Rational.cpp Rational.hpp)
