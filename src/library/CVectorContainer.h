#pragma once

#include <cstddef>
#include <string>

#include "IContainer.h"

template<typename T>
class CVectorContainer final : public Container<T> {
public:
  CVectorContainer();
  CVectorContainer(const CVectorContainer &other);
  CVectorContainer(CVectorContainer &&other);
  CVectorContainer &operator=(const CVectorContainer &other);
  CVectorContainer &operator=(CVectorContainer &&other);
  ~CVectorContainer();

  void push_back(const T &value) override;
  void insert(int pos, const T &value) override;
  void erase(int pos) override;
  size_t size() override;
  T operator[](int index) override;
  std::string print() override;
private:
  size_t m_size;
  size_t capacity;
  T *values;
  void check_capacity();
};

#include "CVectorContainer.cpp"
