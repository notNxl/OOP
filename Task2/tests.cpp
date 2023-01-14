#include "gtest/gtest.h"

#include "functions/Functions.h"

TEST(ReadLineTest, ReadLine)
{
EXPECT_EQ("Test string", input("Test string"));
EXPECT_EQ(input(""), "");
EXPECT_EQ(toUpper("Test string"), "#Test String");
EXPECT_EQ(toUpper("Test String"), "#Test String");
EXPECT_EQ(toUpper("test string"), "#Test String");
EXPECT_EQ(toUpper("test String"), "#Test String");
EXPECT_EQ(toUpper(spaceDel("   test String")), "#TestString");

}
