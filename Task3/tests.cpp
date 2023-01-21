#include "Functions/Functions.h"
#include "gtest/gtest.h"
TEST(ReadLineTest, ReadLine)
{
EXPECT_EQ(decodeFromBase64("QQ=="),"A");
}
