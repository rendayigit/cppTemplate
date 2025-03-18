#include <gtest/gtest.h>

TEST(SampleTestTitle, SampleTestCase) {
  EXPECT_TRUE(1 == 1);
  EXPECT_FALSE(false);
  EXPECT_EQ(1, 1);
  EXPECT_NE(1, 2);
}

TEST(SampleTestTitle, SampleTestCase2) {
  EXPECT_GT(2, 1);
}