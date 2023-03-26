cmake_minimum_required(VERSION 3.26.0)
project(simple_project)

set(sources some_impl.cpp)

add_library(my_lib ${sources})
target_include_directories(my_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)