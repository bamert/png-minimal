cmake_minimum_required(VERSION 3.4)

project(png-minimal CXX)

set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIRS})

add_executable(demo demo.cpp)
target_link_libraries(demo ${PNG_LIBRARIES})

