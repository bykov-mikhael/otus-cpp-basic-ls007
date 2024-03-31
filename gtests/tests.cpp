#include <gtest/gtest.h>

#include <algorithm>
#include <list>
#include <vector>

// template<typename T>
// ::testing::AssertionResult isEqual(const std::list<T> &container, std::initializer_list<T> expected) {
//     if (container.size() < size_t(std::distance(expected.begin(), expected.end())) ) {
//         return ::testing::AssertionFailure() << "Некорректный размер массива";
//     }

//     size_t index{};
    
//     for (auto& exp: expected) {
//         if (exp != container[index]) {
//             return ::testing::AssertionFailure() << exp << " не равны " << container[index];
//         }
//         ++index;
//     }
//     return ::testing::AssertionSuccess();
// }
/*
 * - создание контейнера
*/
TEST(ListDefaultConstructor, ListDefaultConstructor) {
    std::list<int> lst;
    EXPECT_EQ(lst.size(), 0u);
    std::cout << "EXPECT_EQ(lst.size(), 0u)s;" << std::endl;
}
/*
 * - вставка элементов в конец
*/
TEST(ListPushBack, ListPushBack) {
    std::list<int> lst;
    lst.push_back(9);
    EXPECT_EQ(lst.back(), 9u);
}
/*
 * - вставка элементов в начало 
*/
TEST(ListPushFront, ListPushFront) {
    std::list<int> lst;
    lst.push_front(1);
    EXPECT_EQ(lst.front(), 1u);
}
 /*
  * - вставка элементов в середину
 */
TEST(ListPushMiddle, ListPushMiddle) {
  std::list<int> lst {0, 2, 3, 4};
  auto it_lst = ++lst.begin();
  lst.insert(it_lst, 1);
  std::list<int> lst2 {0, 1, 2, 3, 4};
  EXPECT_EQ(lst, lst2);
}
/*
 * - удаление элементов из конца
 */
TEST(ListPopBack, ListPopBack) {
    std::list<int> lst {0, 1, 2, 3};
    lst.pop_back();
    std::list<int> lst2 {0, 1, 2};
    EXPECT_EQ(lst, lst2);
}
/*
 * - удаление элементов из начала
*/
TEST(ListPopFront, ListPopFront) {
    std::list<int> lst {0, 1, 2, 3, 4};
    lst.pop_front();
    std::list<int> lst2 {1, 2, 3, 4};
    EXPECT_EQ(lst, lst2);
}
/*
 * - удаление элементов из середины
*/
TEST(ListRemoveMiddle, ListRemoveMiddle) {
    std::list<int> lst {0, 1, 2, 3, 4};
    lst.remove(2);
    std::list<int> lst2 {0, 1, 3, 4};
    EXPECT_EQ(lst, lst2);
}
/*
 * - list. получение размера контейнера (фактическое количество элементов)
*/
TEST(ListSize, ListSize) {
    std::list<int> lst {0, 1, 2, 3, 4, 5 ,6 ,7 ,8, 9};
    EXPECT_EQ(lst.size(), 10u);
}
/*
 * - vector. создание контейнера
*/
TEST(VectorDefaultConstructor, VectorDefaultConstructor) {
    std::vector<int> vct;
    EXPECT_EQ(vct.size(), 0u);
}
/*
 * - vector. вставка элементов в конец
*/
TEST(VectorPushBack, VectorPushBack) {
    std::vector<int> vct;
    vct.push_back(9);
    EXPECT_EQ(vct.back(), 9u);
}
/*
 * - vector. вставка элементов в начало 
*/
TEST(VectorPushFront, VectorPushFront) {
    std::vector<int> vct {0, 1, 2, 3};
    auto it_vct = vct.begin();
    vct.insert(it_vct, 9);
    EXPECT_EQ(vct[0], 9u);
}
/*
 * - vector. вставка элементов в середину
*/
TEST(VectorPushMiddle, VectorPushMiddle) {
    std::vector<int> vct {0, 1, 2, 3, 4};
    vct[3] = 9;
    EXPECT_EQ(vct[3], 9u);
}
/*
 * - vector. удаление элементов из конца
 */
TEST(VectorPopBack, VectorPopBack) {
    std::vector<int> vct {0, 1, 2, 3};
    vct.pop_back();
    std::vector<int> vct2 {0, 1, 2};
    EXPECT_EQ(vct, vct2);
}
/*
 * - vector. удаление элементов из начала
*/
TEST(VectorPopFront, VectorPopFront) {
    std::vector<int> vct {0, 1, 2, 3};
    auto it_vct = vct.begin();
    vct.erase(it_vct);
    std::vector<int> vct2 {1, 2, 3};
    EXPECT_EQ(vct, vct2);
}
/*
 * - vector. удаление элементов из середины
*/
TEST(VectorRemoveMiddle, VectorRemoveMiddle) {
    std::vector<int> vct {0, 1, 2, 3, 4};
    auto it_vct = vct.begin();
    vct.erase(it_vct + 2);
    std::vector<int> vct2 {0, 1, 3, 4};
    EXPECT_EQ(vct, vct2);
}
/*
 * - vector. получение размера контейнера (фактическое количество элементов)
*/
TEST(VectorSize, VectorSize) {
    std::vector<int> vtr {0, 1, 2, 3, 4, 5 ,6 ,7 ,8, 9};
    EXPECT_EQ(vtr.size(), 10u);
}