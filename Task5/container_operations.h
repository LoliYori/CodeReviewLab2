#ifndef CONTAINER_OPERATIONS_H
#define CONTAINER_OPERATIONS_H

#include <deque>
#include <list>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <stdexcept>


// ������� ���������� ����������
template <typename Container>
void FillContainer(Container& container, int size);

// ������� ������ ����������
template <typename Container>
void PrintContainer(const Container& container);

// ������� ������� ���������
void InsertElements(std::deque<int>& sourceDeque, std::list<int>& targetList);

#endif // CONTAINER_OPERATIONS_H