#pragma once

#include <string>

template<typename T>
class Container {
public:
  // virtual ~Container();
  virtual void push_back(const T &value) = 0;
  virtual void insert(int pos, const T &value) = 0;
  virtual void erase(int pos) = 0;
  virtual int get_size() const = 0;
  // virtual std::string print() const = 0;
  virtual T operator[](int index) = 0;
};