#pragma once

#include <cstddef>
#include <string>


#include "IContainer.h"

template<typename T>
class CVectorContainer final : public Container<T> {
public:
  CVectorContainer();
  ~CVectorContainer();

  // void push_back(const T &value) override;
  // void insert(int pos, const T &value) override;
  // void erase(int pos) override;
  // size_t size() override;
  // T operator[](int index) override;
  // std::string print() override;
private:
  size_t m_size;
  
  struct m_Node {
    m_Node(T value) : m_value(value),
                      m_next(nullptr) {};
    m_Node *m_next;
    T m_value;
  };
  m_Node *m_head;
  void check_capacity();
};

#include "CVectorContainer.cpp"
