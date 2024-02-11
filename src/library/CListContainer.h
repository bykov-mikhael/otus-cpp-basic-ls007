#pragma once

#include <cstddef>
#include <string>

#include "IContainer.h"

template<typename T>
class CListContainer : public Container<T> {
public:
  CListContainer();
  explicit CListContainer(size_t size);
  // ~CListContainer();

  void push_back(const T &value) override;
  void insert(int pos, const T &value) override;
  void erase(int pos) override;
  int get_size() const override;
  T operator[](int pos) override;
  // std::string print() override;

private:
  T *m_values;

  size_t m_size = 11;

  void check_size(int pos);
};

#include "CListContainer.cpp"