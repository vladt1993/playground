#include <gtest/gtest.h>
#include "lib/calc.hpp"

TEST(SampleTest, BasicAssertion)
{
    EXPECT_EQ(calcSum(2, 5), 7);
}
