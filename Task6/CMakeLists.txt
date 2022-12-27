cmake_minimum_required(VERSION 3.15)

project(Task6)

add_executable(main Task6.cpp)

target_link_libraries(main RPN)
target_link_libraries(main operations)
target_link_libraries(main stack)

add_subdirectory(include)
add_subdirectory(src)

