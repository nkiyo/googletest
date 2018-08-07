#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "gtest/internal/custom/gtest.h"
#include "myassert.h"

TEST(MyTest, MyTestOK) {
    MY_ASSERT_EQ(1, 1);
    MY_ASSERT_EQ(1, 1);
    MY_ASSERT_EQ(1, 1);

    PRINT_ASSERT_CNT
}

