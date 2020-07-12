cmake_minimum_required(VERSION 3.17.3)

project(LearnCpp4)

add_library(LearnCpp4 STATIC 
    ${CMAKE_CURRENT_LIST_DIR}/LearnCpp4.cpp
    ${CMAKE_CURRENT_LIST_DIR}/LearnCpp4.hpp
)

target_compile_definitions(LearnCpp4 PUBLIC LEARNCPP4_VERSION=1.0)

set(PROJECT_LEARNCPP ${PROJECT_NAME} PARENT_SCOPE)

# add_executable(LearnCpp4Main LearnCpp4Main.cpp)
# target_link_libraries(LearnCpp4Main PRIVATE ${PROJECT_NAME})