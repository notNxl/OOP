#include "gtest/gtest.h"

#include "functions/Functions.h"

TEST(ReadLineTest, ReadLine)
{
EXPECT_EQ(input("Test string"), "Test string");
EXPECT_EQ(input(""), "");
EXPECT_EQ(hashtagGenerator("Test string"), "#TestString");
EXPECT_EQ(hashtagGenerator("Test String"), "#TestString");
EXPECT_EQ(hashtagGenerator("test string"), "#TestString");
EXPECT_EQ(hashtagGenerator("test String"), "#TestString");
EXPECT_EQ(hashtagGenerator("   test String"), "#TestString");
}

