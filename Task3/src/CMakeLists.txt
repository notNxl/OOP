project(Task3)

add_library(Functions Functions.cpp)

target_include_directories(Functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
