add_executable(JohnTheCatTests JohnTheCatTests.cpp)
add_executable(JohnHouseTests JohnHouseTests.cpp)

target_link_libraries(JohnTheCatTests PUBLIC
    gtest_main
    ${CMAKE_PROJECT_NAME}
    ${PROJECT_JOHNTHECAT}
)

target_link_libraries(JohnHouseTests PUBLIC
    gtest_main
    gmock_main
    ${CMAKE_PROJECT_NAME}
    ${PROJECT_JOHNTHECAT}
)

add_test(
    NAME JohnTheCatTests
    COMMAND JohnTheCatTests
)

add_test(
    NAME JohnHouseTests
    COMMAND JohnHouseTests
)