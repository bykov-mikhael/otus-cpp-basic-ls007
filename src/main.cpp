#include "library/CListContainer.h"
#include "library/CVectorContainer.h"

#include <iostream>
#include <cstddef>

int main() {

  std::cout << "List container: " << std::endl;

  size_t st_size = 10;

  CListContainer<int> lContainer;

  for (size_t i = 0; i < st_size; i++) {
    lContainer.push_back(i);
  }
  

  lContainer.print();

  return 0;
}