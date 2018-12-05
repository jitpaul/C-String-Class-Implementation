cmake_minimum_required(VERSION 3.5)

project(mystring
    VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Executable definition
add_executable(mystring
    mystring.cpp mystring.h mystring.m.cpp
)