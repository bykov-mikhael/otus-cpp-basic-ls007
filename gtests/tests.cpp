#include <gtest/gtest.h>

#include "src/library/CListContainer.h"
#include "src/library/CVectorContainer.h"

TEST(Test001, Assert_eq) {
    ASSERT_EQ(1, 2);
    std::cout << "ASSERT_EQ(1, 2)" << std::endl;
}

TEST(Test001, Expect_eq) {
    EXPECT_EQ(1, 2);
    std::cout << "EXPECT_EQ(1, 2)" << std::endl;
}

TEST(CListContainer, DefaultConstructor) {
    CListContainer<int> l;
    CVectorContainer<int> v;
    std::cout << v.get_size() << std::endl;
    std::cout << l.get_size() << std::endl;
    EXPECT_EQ(v.get_size(), l.get_size()) << "EXPECT_EQ(0u, l.get_size())";
}
