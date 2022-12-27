project(Task6)

add_library(operations Operations.cpp)
add_library(stack Stack.cpp)
add_library(RPN RPN.cpp)

target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(stack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(RPN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
