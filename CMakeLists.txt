cmake_minimum_required(VERSION 3.0.0)
project(namesnumbers)
add_executable(namesnumbers src/main.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/names.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

