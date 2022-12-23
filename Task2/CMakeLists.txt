cmake_minimum_required(VERSION 3.18)

project(Functions)

set(Functions_DIR ${CMAKE_CURRENT_SOURCE_DIR}/functions})
set(Functions_INCLUDE_DIR ${Functions_DIR}/include)
message("Functions_DIR = ${Functions_DIR}")
message("Functions_INCLUDE_DIR = ${Functions_INCLUDE_DIR}")

add_subdirectory(functions)

include_directories(${Functions_INCLUDE_DIR})

add_executable(main Task2.cpp)
target_link_libraries(main functions)

