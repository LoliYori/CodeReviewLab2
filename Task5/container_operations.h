#ifndef CONTAINER_OPERATIONS_H
#define CONTAINER_OPERATIONS_H

#include <deque>
#include <list>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <stdexcept>

// Класс для работы с контейнерами
class ContainerOperations {
public:
    template <typename Container>
    static bool FillContainer(Container& container, int size);

    template <typename Container>
    static void PrintContainer(const Container& container);

    static void InsertElements(std::deque<int>& sourceDeque, std::list<int>& targetList);
};

#endif // CONTAINER_OPERATIONS_H
