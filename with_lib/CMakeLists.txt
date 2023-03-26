cmake_minimum_required(VERSION 3.26.0)
project(simple_project)

add_subdirectory(src)

add_executable(out main.cpp)
target_link_libraries(out PRIVATE my_lib)