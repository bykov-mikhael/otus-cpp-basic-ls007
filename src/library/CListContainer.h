#pragma once

#include <cstddef>
#include <string>

#include "IContainer.h"

template<typename T>
class CListContainer : public Container<T> {
public:
  CListContainer();
  explicit CListContainer(size_t size);
  ~CListContainer();

  void push_back(const T &value) override;
  virtual void print() override;

private:
  T *m_values;

  size_t m_size = 11;

  void check_capacity();
};

#include "CListContainer.cpp"
