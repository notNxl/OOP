cmake_minimum_required(VERSION 3.15)

project(Task5)

add_executable(main Task5.cpp)

target_link_libraries(main functions)
add_subdirectory(include)
add_subdirectory(src)
