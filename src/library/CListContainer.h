#pragma once

#include "IContainer.h"

#include <cstddef>

template<typename  T>
class CListContainer : IContainer<T> {
public:
    explicit CListContainer(size_t size);
    ~CListContainer();

    int push_back(T &item) override;
    int insert(T &item, int NodeID) override;
    int erase(int NodeID) override;
    int size() const override;
    IContainer<T> operator[](int NodeID) const override;
private:
    /*Указатель на первый элемент массива m_data*/
    T *m_data;
    /*Размер масива m_data*/
    std::size_t m_size;
};