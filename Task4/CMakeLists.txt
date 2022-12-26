cmake_minimum_required(VERSION 3.15)

project(Task4)

add_executable(main Task4.cpp)

target_link_libraries(main RingBuffer)
add_subdirectory(include)
add_subdirectory(src)
