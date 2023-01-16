cmake_minimum_required(VERSION 3.15)

project(Task3)

add_executable(main Task3.cpp)
add_executable(tests tests.cpp)

target_link_libraries(main Functions)

target_link_libraries(tests Functions)
target_link_libraries(tests gtest gtest_main)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(googletest)
