cmake_minimum_required(VERSION 3.26.0)
project(simple_project)

set(sources src/some_impl.cpp)

add_executable(out main.cpp ${headers} ${sources})
include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)