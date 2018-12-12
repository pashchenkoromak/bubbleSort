#include "gtest/gtest.h"
#include "bubbleSort.hpp"

TEST(sort, AlreadySorted)
{
    std::vector<int> input{1, 3, 2};
    std::vector<int> sorted{1, 2, 3};
    sort<int>(input);
    ASSERT_EQ(input, sorted);
}
