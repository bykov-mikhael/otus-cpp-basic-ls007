#include <iostream>

#include "CListContainer.h"

template<typename T>
CListContainer<T>::CListContainer(size_t size) : m_size(size) {

};

template<typename T>
CListContainer<T>::~CListContainer() {
    std::cout << "~CLContainer()" << std::endl;
};

template<typename T>
int CListContainer<T>::push_back(T &item) {
    return item;
}

template<typename T>
int CListContainer<T>::insert(T &item, int NodeID) {
    item = 0;
    return NodeID;
}

template<typename T>
int CListContainer<T>::erase(int NodeID) {
    return NodeID;
}

template<typename T>
int CListContainer<T>::size() const {
    return m_size;
}
