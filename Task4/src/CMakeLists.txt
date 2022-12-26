project (Task4)

add_library(RingBuffer RingBuffer.cpp)

target_include_directories(RingBuffer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
