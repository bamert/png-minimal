cmake_minimum_required(VERSION 3.4)

project(png-minimal CXX)
# Use C++11 features.
set (REQ_CPP11_FEATURES  cxx_strong_enums cxx_auto_type)

set(CMAKE_CXX_STANDARD 11) # C++11...
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find pnglib (used to load and store images for training and during evaluation)
find_package(PNG REQUIRED)
include_directories(${PNG_INCLUDE_DIRS})

#Three examples for GPC library
add_executable(demo demo.cpp)
target_link_libraries(demo ${PNG_LIBRARIES})

