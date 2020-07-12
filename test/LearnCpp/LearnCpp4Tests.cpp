#include "../../LearnCpp/LearnCpp4.hpp"
#include <gtest/gtest.h>

TEST(LearnCpp4, TestSum) {
    double a = 5.5;
    double b = 1.0;
    double expectedResult = a + b;
    auto result = calculate(a, b, '+');
    EXPECT_EQ(expectedResult, result);
}

TEST(LearnCpp4, TestSub) {
    double a = 5.5;
    double b = 1.0;
    double expectedResult = a - b;
    auto result = calculate(a, b, '-');
    EXPECT_EQ(expectedResult, result);
}

TEST(LearnCpp4, TestMulti) {
    double a = 5.5;
    double b = 2.0;
    double expectedResult = 11.0;
    auto result = calculate(a, b, '*');
    EXPECT_EQ(expectedResult, result);
}

TEST(LearnCpp4, TestDiv) {
    double a = 6.2;
    double b = 2.0;
    double expectedResult = 3.1;
    auto result = calculate(a, b, '/');
    EXPECT_EQ(expectedResult, result);
}