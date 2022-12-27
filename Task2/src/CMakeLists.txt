project(Task2)

add_library(functions Functions.cpp)

target_include_directories(functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
