#ifndef _MYASSERT_H_
#define _MYASSERT_H_

static int g_assert_cnt = 0;

#define PRINT_ASSERT_CNT printf("assert count is %d.\n", g_assert_cnt);

// TODO 各種MY_ASSERTを追加すること
#define MY_ASSERT_EQ(val1, val2) ASSERT_EQ(val1, val2); g_assert_cnt++;

#endif
