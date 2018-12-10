cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mystring "")

target_sources(
    mystring
    PRIVATE
        mystring.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/mystring.h
)

target_include_directories(
    mystring
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)