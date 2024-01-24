/**
 * TODO: В задании требуется реализовать два контейнера динамического размера – последовательный и
 * спискового типа – и пользовательский код с демонстрацией возможностей этих контейнеров.
 * 1. Последовательный контейнер
 * Отличительная черта такого контейнера – расположение элементов друг за другом подряд
 * (как и у обычного массива в стиле Си).
 * 2. Контейнер спискового типа – не предоставляет гарантий расположения элементов друг за
 * другом в памяти. Связь между элементами осуществляется через указатели (указатель на
предыдущий элемент и/или указатель на следующий элемент).
Пользовательский код (вызывается из функции main) должен содержать следующий набор
действий с обоими контейнерами:
1. создание объекта контейнера для хранения объектов типа int
2. добавление в контейнер десяти элементов (0, 1 ... 9)
3. вывод содержимого контейнера на экран
ожидаемый результат: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
4. вывод размера контейнера на экран
ожидаемый результат: 10
5. удаление третьего (по счёту), пятого и седьмого элементов
6. вывод содержимого контейнера на экран
ожидаемый результат: 0, 1, 3, 5, 7, 8, 9
7. добавление элемента 10 в начало контейнера
8. вывод содержимого контейнера на экран
ожидаемый результат: 10, 0, 1, 3, 5, 7, 8, 9
9. добавление элемента 20 в середину контейнера
10. вывод содержимого контейнера на экран
ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9
11. добавление элемента 30 в конец контейнера
12. вывод содержимого контейнера на экран
ожидаемый результат: 10, 0, 1, 3, 20, 5, 7, 8, 9, 30
Требования к минимальному интерфейсу:
- метод/ы (может быть несколько) добавления элементов в конец контейнера ( push_back )
- метод/ы вставки элементов в произвольную позицию ( insert )
- метод/ы удаления элементов из контейнера ( erase )
- метод получения текущего размера контейнера ( size )
- метод/ы получения доступа по индексу ( operator[] )
Допустимо добавить и другие вспомогательные методы с пользовательским
кодом, демонстрирующим их назначение.
Дополнительное задание 1. Реализовать последовательный контейнер с небольшим
резервированием памяти заранее. Так при добавлении нового элемента контейнер сначала
создаёт область памяти больше по размеру, чем нужно для размещения элементов (например, на
50%). Таким образом при последующих добавлениях новых элементов можно будет избежать
повторного выделения памяти и копирования.
Примечание: выделять память со слишком большим запасом – плохое решение, так как приведёт к
слишком значительному перерасходу памяти. Обычно используют коэффициенты 1.5, 1.6, 2.0.
Дополнительное задание 2. Реализовать два варианта спискового контейнера:
- двунаправленный список – каждый узел хранит указатель на следующий элемент и указатель на
предыдущий элемент
- однонаправленный список – каждый узел хранит указатель только на следующий элемент
Дополнительное задание 3. Использовать в реализации семантику перемещения:
- реализовать перемещающие конструктор и оператор присваивания для контейнеров
уметь принимать на вход r-value ссылку на пользовательский объект
Дополнительное задание 4. Реализовать дополнительную структуру – итератор, инкапсулирующую
в себе логику обхода контейнера. Реализовать методы у контейнера:
- begin() – возвращает итератор на начало контейнера
- end() – возвращает итератор на конец контейнера
Реализовать методы у итератора:
- operator*() – унарный оператор разыменования
- и/или метод get() для получения значения.
*/

#include <cstddef>
#include <iostream>

#include "library/CListContainer.h"
#include "library/Test.h"

int main() {
    std::cout << "hw-006" << std::endl;
    
    // 1. создание объекта контейнера для хранения объектов типа int

    //CListContainer<size_t> container(10);

    Test tst("test class");
    tst.print();

    return 0;
}