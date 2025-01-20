#include "../cal_and_feat/calculator.h"
#include <gtest/gtest.h>

TEST(cal, addition) {
  Calculator calculator;
  EXPECT_EQ(calculator.add(5, 6), 11);
  EXPECT_EQ(calculator.add(10, 2), 12);
  EXPECT_EQ(calculator.add(-2522, 22), 2500);
  EXPECT_EQ(calculator.add(0, 0), 0);
}

TEST(cal, soustraction){
    Calculator calc;
    EXPECT_EQ(calc.substract(10, 3), 7);
    EXPECT_EQ(calc.substract(-10, 3), -7);
    EXPECT_EQ(calc.substract(10, -3), 13);
    EXPECT_EQ(calc.substract(-10, -3), -13);
}

// Fonction main() pour exécuter les tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}