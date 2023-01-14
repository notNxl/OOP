cmake_minimum_required(VERSION 3.15)

project(Task6)

add_executable(main Task6.cpp)
add_executable(tests tests.cpp)

target_link_libraries(main RPN)
target_link_libraries(main operations)
target_link_libraries(main stack)


target_link_libraries(tests RPN)
target_link_libraries(tests operations)
target_link_libraries(tests stack)
target_link_libraries(tests gtest gtest_main)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(googletest)
