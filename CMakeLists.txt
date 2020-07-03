cmake_minimum_required(VERSION 3.17.3)

project(gTestExample)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(googletest)

set(Sources
    Example.cpp
)
set(Headers
    Example.hpp
)

add_library(${CMAKE_PROJECT_NAME} STATIC ${Sources} ${Headers})

add_subdirectory(test)
