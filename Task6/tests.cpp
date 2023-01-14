#include "gtest/gtest.h"
#include "RPN/RPN.h"
#include "operations/Operations.h"
#include "stack/Stack.h"

TEST(ReadLineTest, ReadLine)
{
	EXPECT_EQ(defaultToRPN("123"),"123");
        EXPECT_EQ(defaultToRPN("2*3+4"), "23*4+");
        EXPECT_EQ(defaultToRPN("2*(3+4)"),"234+*");
        EXPECT_EQ(defaultToRPN("(7/2)^4"),"72/4^");
        EXPECT_EQ(defaultToRPN("(2^3)^4"),"23^4^");
        EXPECT_EQ(defaultToRPN("2+3-6"),"23+6-");
        EXPECT_EQ(defaultToRPN("5+((1+2)*4)-3"),"512+4*+3-");
}
