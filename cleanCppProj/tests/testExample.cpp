#include <gtest/gtest.h>
#include "lib/calc.hpp"

TEST(CalcTest, Sum)
{
    EXPECT_EQ(calcSum(2, 5), 7);
    EXPECT_EQ(calcSum(2, -5), -3);
    EXPECT_EQ(calcSum(-2, 5), 3);
    EXPECT_EQ(calcSum(-2, -5), -7);
}

TEST(CalcTest, Sub)
{
    EXPECT_EQ(calcSub(2, 5), -3);
    EXPECT_EQ(calcSub(2, -5), 7);
    EXPECT_EQ(calcSub(-2, 5), -7);
    EXPECT_EQ(calcSub(-2, -5), 3);
}

TEST(CalcTest, Mult)
{
    EXPECT_EQ(calcMult(2, 5), 10);
    EXPECT_EQ(calcMult(2, -5), -10);
    EXPECT_EQ(calcMult(-2, 5), -10);
    EXPECT_EQ(calcMult(-2, -5), 10);
    EXPECT_EQ(calcMult(-2, 0), 0);
}

TEST(CalcTest, Div)
{
    EXPECT_EQ(calcDiv(10, 5), 2.0);
    EXPECT_EQ(calcDiv(10, -5), -2.0);
    EXPECT_EQ(calcDiv(-10, 5), -2.0);
    EXPECT_EQ(calcDiv(-10, -5), 2.0);
    EXPECT_EQ(calcDiv(0, -5), 0);
    EXPECT_DEATH(calcDiv(-5, 0), ".*");
}