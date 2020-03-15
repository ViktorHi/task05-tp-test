#include "gtest/gtest.h"

extern "C" {
#include "../include/Header.h"
}

TEST(widget, ok) {
  ASSERT_EQ(compare_date("08-04-2018", "08-04-2018"), 0);
}

