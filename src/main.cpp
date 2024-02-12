/**
 * Пользовательский код (вызывается из функции main) должен содержать следующий набор
 * действий с обоими контейнерами:
 * 1. создание объекта контейнера для хранения объектов типа int
 * 2. добавление в контейнер десяти элементов (0, 1 ... 9)
 * 3. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * 4. вывод размера контейнера на экран ожидаемый результат: 10
 * 5. удаление третьего (по счёту), пятого и седьмого элементов
 * 6. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 3, 5, 7, 8, 9
 * 7. добавление элемента 10 в начало контейнера
 * 8. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 5, 7, 8, 9
 * 9. добавление элемента 20 в середину контейнера
 * 10. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9
 * 11. добавление элемента 30 в конец контейнера
 * 12. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9, 30
 * 
 * Требования к минимальному интерфейсу:
 * - метод/ы (может быть несколько) добавления элементов в конец контейнера ( push_back )
 * - метод/ы вставки элементов в произвольную позицию ( insert )
 * - метод/ы удаления элементов из контейнера ( erase )
 * - метод получения текущего размера контейнера ( size )
 * - метод/ы получения доступа по индексу ( operator[] )
*/

#include "library/CListContainer.h"
#include "library/CVectorContainer.h"

#include <iostream>
#include <cstddef>

int main() {

  std::cout << "List container: " << std::endl;

  size_t st_size = 10;

  // * 1. создание объекта контейнера для хранения объектов типа int
  std::cout << "1. создание объекта контейнера для хранения объектов типа int: " << std::endl;
  CListContainer<int> lContainer;

  // * 2. добавление в контейнер десяти элементов (0, 1 ... 9)
  std::cout << "2. добавление в контейнер десяти элементов (0, 1 ... 9): " << std::endl;
  for (size_t i = 0; i < st_size; i++) {
    lContainer.push_back(i);
  }

  // * 3. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
  std::cout << "3. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9: " << std::endl;
  lContainer.print();

  // * 4. вывод размера контейнера на экран ожидаемый результат: 10
  std::cout << "4. вывод размера контейнера на экран ожидаемый результат: 10: " << std::endl;
  std::cout << "Размер массива: " << lContainer.get_size() << std::endl;

  // * 5. удаление третьего (по счёту), пятого и седьмого элементов
  /**
   * ! При удалении элементов по счету происходит уменьшение размера массива. Поэтому номера позиций не соответствуют
   * ! номерам позиций из задания
  */
  std::cout << "5. удаление третьего (по счёту), пятого и седьмого элементов: " << std::endl;
  lContainer.erase(2);
  std::cout << "Размер массив после удаления третьего (по счету) элемента: " << lContainer.get_size() << std::endl;
  lContainer.erase(3);
  std::cout << "Размер массив после удаления пятого (по счету) элемента: " << lContainer.get_size() << std::endl;
  lContainer.erase(4);
  std::cout << "Размер массив после удаления седьмого (по счету) элемента: " << lContainer.get_size() << std::endl;

  // * 6. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 3, 5, 7, 8, 9
  std::cout << "6. вывод содержимого контейнера на экран ожидаемый результат: 0, 1, 3, 5, 7, 8, 9: " << std::endl;
  lContainer.print();

  // 7. добавление элемента 10 в начало контейнера
  std::cout << "7. добавление элемента 10 в начало контейнера: " << std::endl;
  lContainer.insert(0, 10);

  // 8. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 5, 7, 8, 9
  std::cout << "8. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 5, 7, 8, 9: " << std::endl;
  lContainer.print();

  // 9. добавление элемента 20 в середину контейнера
  std::cout << "9. добавление элемента 20 в середину контейнера: " << std::endl;
  lContainer.insert((lContainer.get_size()/2), 20);

  // 10. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9
  std::cout << "10. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9: " << std::endl;
  lContainer.print();
  
  // 11. добавление элемента 30 в конец контейнера
  std::cout << "11. добавление элемента 30 в конец контейнера: " << std::endl;
  lContainer.push_back(30);
  
  // 12. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9, 30
  std::cout << "12. вывод содержимого контейнера на экран ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9, 30: " << std::endl;
  lContainer.print();

  return 0;
}