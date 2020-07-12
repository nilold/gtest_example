#include "../../JohnTheCat/JohnTheCat.h"
#include "../../JohnTheCat/CatInterface.h"
#include "../../JohnTheCat/JohnHouse.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <string>

class JohnTheCatMock : public CatInterface
{
public:
    MOCK_METHOD(bool, isSleeping, ());
    MOCK_METHOD(bool, likesFood, (const std::string& food));
};

using ::testing::AtLeast;
using ::testing::Return;

TEST(JohnHouseTest, testIsSleeping)
{
    JohnTheCatMock john;

    EXPECT_CALL(john, isSleeping())
      .Times(AtLeast(2))
      .WillOnce(Return(true))
      .WillOnce(Return(false))
      ;

    JohnHouse h{&john};

    // John's house lies about john's sleepness
    EXPECT_FALSE(h.isSleeping());
    EXPECT_TRUE(h.isSleeping());
}

TEST(JohnHouseTest, testLikesFood)
{
    JohnTheCatMock john;

    EXPECT_CALL(john, likesFood("milk")).Times(0);
    EXPECT_CALL(john, likesFood("cat food"))
        .Times(1)
        .WillOnce(Return(false));
    EXPECT_CALL(john, likesFood("meat"))
        .Times(1)
        .WillOnce(Return(true));

    JohnHouse h{&john};

    EXPECT_TRUE(h.likesFood("milk"));
    EXPECT_FALSE(h.likesFood("cat food"));
    EXPECT_TRUE(h.likesFood("meat"));
}
