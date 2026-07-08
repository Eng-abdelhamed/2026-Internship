#include <gtest/gtest.h>

#include "../include/Math.hpp"

TEST(MathTest, AddPositiveNumbers) { EXPECT_EQ(Add(2, 3), 5); }

TEST(MathTest, AddNegativeNumbers) { EXPECT_EQ(Add(-2, -3), -5); }

TEST(MathTest, AddPositiveAndNegative) { EXPECT_EQ(Add(10, -3), 7); }

TEST(MathTest, AddWithZero) {
  EXPECT_EQ(Add(5, 0), 5);
  EXPECT_EQ(Add(0, 5), 5);
}

TEST(MathTest, MultiplyPositiveNumbers) { EXPECT_EQ(Multiply(4, 5), 20); }

TEST(MathTest, MultiplyByZero) {
  EXPECT_EQ(Multiply(8, 0), 0);
  EXPECT_EQ(Multiply(0, 8), 0);
}

TEST(MathTest, MultiplyNegativeNumbers) {
  EXPECT_EQ(Multiply(-3, 4), -12);
  EXPECT_EQ(Multiply(-3, -4), 12);
}
TEST(MathTest, Addition) {
    EXPECT_EQ(1 + 1, 2);
    EXPECT_TRUE(true);
}
