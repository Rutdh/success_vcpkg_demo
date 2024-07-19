#include "gtest/gtest.h"

// 展示一些基本断言。
TEST(HelloTest, BasicAssertions) {
  // 期望两个字符串不相等。
  EXPECT_STRNE("hello", "world");
  // 期望相等。
  EXPECT_EQ(7 * 6, 42);
}