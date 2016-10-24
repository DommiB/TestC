cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(SimpleTest)

set(warnings "-Wall -Wextra -Werror")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} ${warnings}")

include_directories(inc)
add_subdirectory(src)
