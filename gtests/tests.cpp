#include <gtest/gtest.h>

#include "src/library/CListContainer.h"
#include "src/library/CVectorContainer.h"

TEST(Test001, Expect_true) {
    EXPECT_TRUE(10.2f);
}

TEST(CListContainer, DefaultConstructor) {
    CListContainer<int> l;
    CVectorContainer<int> v;
    EXPECT_EQ(10u, l.get_size()) << "EXPECT_EQ(0u, l.get_size())";
    EXPECT_EQ(20u, v.get_size()) << "EXPECT_EQ(0u, v.get_size())";
}
