#include <cstddef>
#include <iostream>

/**
 * @brief конструктор
*/
template <typename T>
CListContainer<T>::CListContainer() : m_size(1) {
  std::cout << "ctor CListContainer()" <<std::endl;

  m_values = new T[m_size];
}

/**
 * @brief конструктор
 * @param size размер массива
*/
template <typename T>
CListContainer<T>::CListContainer(size_t size) : m_size(size) {
  std::cout << "ctor CListContainer(size_t size)" <<std::endl;

  m_values = new T[m_size];
}

/**
 * @brief деструктор
*/
template <typename T>
CListContainer<T>::~CListContainer() {
  std::cout << "dtor ~CListContainer()" <<std::endl;
}

/**
 * @brief добавить в конец массива
*/
template <typename T>
void CListContainer<T>::push_back(const T &value) {
  T *new_values = new T[m_size+1];
  for (size_t i = 0; i < m_size; i++) {
    new_values[i] = m_values[i];
  }
  new_values[m_size] = value;
  delete[] m_values;
  m_values = new_values;
  m_size++;
}

/**
 * @brief печать массива
*/
template <typename T>
void CListContainer<T>::print() {
  
  std::cout << "size_t: " << m_size << std::endl;
  
  for (size_t i = 0; i < m_size; i++) {
    std::cout << "pos: " << i << " val " << m_values[i] << std::endl;
  }
}