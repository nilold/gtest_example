cmake_minimum_required(VERSION 3.17.3)

add_executable(ExampleTests ExampleTests.cpp)

target_link_libraries(ExampleTests PUBLIC
    gtest_main
    gTestExample
)

add_test(
    NAME ExampleTests
    COMMAND ExampleTests
)

add_subdirectory(LearnCpp)
add_subdirectory(JohnTheCat)