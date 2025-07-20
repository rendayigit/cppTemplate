
/**
 * @file sampleTest.cpp
 * @brief Unit tests for sampleCode.hpp functions using Google Test.
 */

#include "sampleCode.hpp"

#include <gtest/gtest.h>

/**
 * @brief Basic test cases for demonstration purposes.
 */
TEST(SampleTestTitle, SampleTestCase) {
  EXPECT_TRUE(1 == 1); ///< Checks if 1 equals 1
  EXPECT_FALSE(false); ///< Checks if false is false
  EXPECT_EQ(1, 1);     ///< Checks if 1 equals 1
  EXPECT_NE(1, 2);     ///< Checks if 1 does not equal 2
}

/**
 * @brief Checks if 2 is greater than 1.
 */
TEST(SampleTestTitle, SampleTestCase2) { EXPECT_GT(2, 1); }

/**
 * @brief Checks if return2() is greater than return1().
 */
TEST(SampleTestTitle, SampleTestCase3) { EXPECT_GT(return2(), return1()); }