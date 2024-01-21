#pragma once

#include "IContainer.h"

#include <cstddef>

template<typename  T>
class CLContainer : IContainer<T> {
public:
    CLContainer(size_t size) : m_size(size) {};
    ~CLContainer();

    int push_back(T &item) override;
    int insert(T &item, int NodeID) override;
    int erase(T &item, int NodeID) override;
    int size() const override;
    IContainer<T> operator[](int NodeID) const override;
private:
    /*Указатель на первый элемент массива m_data*/
    T *m_data;
    /*Размер масива m_data*/
    std::size_t m_size;
};