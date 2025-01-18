#include "calculator.h"
#include <gtest/gtest.h>

TEST(cal, addition) {
  Calculator calculator;
  EXPECT_EQ(calculator.add(5, 6), 11);
  EXPECT_EQ(calculator.add(10, 2), 12);
  EXPECT_EQ(calculator.add(-2522, 22), 2500);
  EXPECT_EQ(calculator.add(0, 0), 0);
}
