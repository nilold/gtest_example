#include "../../JohnTheCat/JohnTheCat.h"
#include <gtest/gtest.h>

class JohnTheCatTestsT : public ::testing::Test
{
protected:
    // JohnTheCatTestsT(){
    //     johnTheCat1 = {1};
    //     johnTheCat2 = {2};
    //     johnTheCat3 = {3};
    // }

    void SetUp() override
    {
        // johnTheCat1 = {1};
        // johnTheCat2 = {2};
        // johnTheCat3 = {3};
    }

    // void TearDown() override{}

    JohnTheCat johnTheCat1{1};
    JohnTheCat johnTheCat2{2};
    JohnTheCat johnTheCat3{3};
};

TEST_F(JohnTheCatTestsT, ConstructionAndDestruction)
{
    JohnTheCat johnTheCat{4};
}

TEST_F(JohnTheCatTestsT, TestIsSleeping1)
{
    ASSERT_FALSE(johnTheCat1.isSleeping());
    ASSERT_FALSE(johnTheCat2.isSleeping());
    ASSERT_TRUE(johnTheCat3.isSleeping());
}

TEST_F(JohnTheCatTestsT, TestLikesFood)
{
    JohnTheCat j{0};
    ASSERT_FALSE(j.likesFood("meat"));
    ASSERT_FALSE(j.likesFood("salad"));

    ASSERT_TRUE(johnTheCat1.likesFood("meat"));
    ASSERT_FALSE(johnTheCat1.likesFood("salad"));
}