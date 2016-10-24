cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(SimpleTest)

set(SOURCES main.c TestFunc.c)

add_executable(SimpleTest ${SOURCES}) 
