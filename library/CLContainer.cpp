#include <iostream>

#include "CLContainer.h"

template<typename T>
CLContainer<T>::CLContainer(size_t size) : m_size(size) {
    std::cout << "CLContainer()" << std::endl;
    
    m_data = new T[m_size];
};

template<typename T>
CLContainer<T>::~CLContainer() {
    std::cout << "~CLContainer()" << std::endl;
};

template<typename T>
int CLContainer<T>::push_back(T &item) {
    T *new_data = new T[m_size +1];
    m_data = new_data;
    
    m_data[m_size-1] = item;
    return {};
}

template<typename T>
int CLContainer<T>::insert(T &item, int NodeID) {
    
    if (NodeID > m_size) {

    } else {
        
    }

    return {};
}

template<typename T>
int CLContainer<T>::erase(T &item, int NodeID) {
    return {};
}

template<typename T>
int CLContainer<T>::size() const {
    return m_size;
}
