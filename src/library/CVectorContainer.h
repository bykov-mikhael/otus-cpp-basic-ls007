#pragma once

#include <cstddef>
#include <string>

#include "IContainer.h"

template<typename T>
class CVectorContainer final : public Container<T> {
public:
  CVectorContainer();
  ~CVectorContainer();

  void push_back(const T &value) override;
  void insert(int pos, const T &value) override;
  void erase(int pos) override;
  size_t size() override;
  T operator[](int index) override;
  void print() override;
private:
  struct Node {
    T data;
    Node *next;
    Node(T d) : data(d), next(nullptr) {
    }
  };
  Node *head;
  size_t m_size;
};

#include "CVectorContainer.cpp"
