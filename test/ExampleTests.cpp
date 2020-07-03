#include "../Example.hpp"
#include <gtest/gtest.h>

struct ExampleTests 
    : public ::testing::Test
{
    int* x;

    virtual void SetUp() override {
        x = new int{42};
    }

    virtual void TearDown() override {
        delete x;
    }

    int getX() {
        return *x;
    }
};

TEST(ExampleTests1, DemoGTestMacros) {
    EXPECT_TRUE(true);
    ASSERT_TRUE(true); // stops if  fails
    EXPECT_EQ(65, 'A') << "This will be printed if its fails";
}

TEST(ExampleTests1, DemoGTestMacrosFail) {
    EXPECT_EQ(64, 'A') << "This will be printed if its fails";
}

TEST(Exampletests2, MAC) {
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectedNewSum = oldSum + x * y;

    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );

    EXPECT_EQ(
        expectedNewSum,
        sum
    );
}