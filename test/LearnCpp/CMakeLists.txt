add_executable(LearnCpp4Tests LearnCpp4Tests.cpp)

target_link_libraries(LearnCpp4Tests PUBLIC
    gtest_main
    ${CMAKE_PROJECT_NAME}
    ${PROJECT_LEARNCPP}
)

add_test(
    NAME LearnCpp4Tests
    COMMAND LearnCpp4Tests
)