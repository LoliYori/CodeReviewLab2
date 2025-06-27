#ifndef CONTAINER_OPERATIONS_H
#define CONTAINER_OPERATIONS_H

#include <deque>
#include <list>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <stdexcept>


// Функция заполнения контейнера
template <typename Container>
void FillContainer(Container& container, int size);

// Функция вывода контейнера
template <typename Container>
void PrintContainer(const Container& container);

// Функция вставки элементов
void InsertElements(std::deque<int>& sourceDeque, std::list<int>& targetList);

#endif // CONTAINER_OPERATIONS_H