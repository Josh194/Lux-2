cmake_minimum_required(VERSION 3.10)

project(Lux)

add_executable(Lux ${CMAKE_CURRENT_SOURCE_DIR}/Lux/core/Lux.cpp)
add_executable(Tests ${CMAKE_CURRENT_SOURCE_DIR}/Tests/Tests.cpp)