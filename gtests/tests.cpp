#include <gtest/gtest.h>

#include <algorithm>
#include <list>
/*
 * Реализовать не менее 10-ти тестовых сценариев для каждого из контейнеров. Конкретные
 * сценарии придумать самостоятельно, но проверять они должны основную функциональность
 * контейнеров:
 * - создание контейнера
 * - вставка элементов в конец
 * - вставка элементов в начало
 * - вставка элементов в середину
 * - удаление элементов из конца
 * - удаление элементов из начала
 * - удаление элементов из середины
 * - получение элементов из контейнера
 * - получение размера контейнера (фактическое количество элементов)
 */

TEST(ListDefaultConstructor, ListDefaultConstructor) {
    std::list<int> lst;
    EXPECT_EQ(lst.size(), 0u);
    std::cout << "EXPECT_EQ(lst.size(), 0u)s;" << std::endl;
}

TEST(ListPushBack, ListPushBack) {
    std::list<int> lst;
    lst.push_back(9);
    EXPECT_EQ(lst.back(), 9u);
}

TEST(ListPushMiddle, ListPushMiddle) {
    std::list<int> lst {0, 1, 3, 4};
    auto it_lst = lst.cbegin();
    lst.insert(it_lst, 2, 3);
    std::list<int> lst2 {0, 1, 2, 3, 4};
    EXPECT_EQ(lst, lst2);
}

TEST(ListPushFront, ListPushFront) {
    std::list<int> lst;
    lst.push_front(1);
    EXPECT_EQ(lst.front(), 1u);
}

TEST(ListRemoveMiddle, ListRemoveMiddle) {
    std::list<int> lst {0, 1, 2, 3, 4};
    lst.remove(2);
    std::list<int> lst2 {0, 1, 3, 4};
    EXPECT_EQ(lst, lst2);
}

TEST(VectorDefaultConstrucot, VectorDefaultConstrucot) {
    std::vector<int> vtr;
    EXPECT_EQ(vtr.size(), 0u);
    std::cout << "EXPECT_EQ(vtr.size(), 0u);" << std::endl;
}


