/*
Дан указатель P1 на вершину непустого стека. Извлечь из стека первый (верхний)
элемент и вывести его значение D, а также адрес P2 новой вершины стека. Если после
извлечения элемента стек окажется пустым, то положить P2 = nullptr. После извлечения
элемента из стека освободить память, занимаемую этим элементом.

Для каждой динамической структуры должен быть предусмотрен стандартный набор методов -
добавления/удаления/вывода элементов.
Во всех задачах обязательно наличие дружественного интерфейса. Ввод данных с клавиатуры.
*/

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <clocale>
#include <limits>

struct Node {
    int data;    
    Node* next;    
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
public:
    Stack();
    void Push(int value);
    void Pop();
    void Print() const;
    int Size() const;
    friend void PrintTopAddress(const Stack& stack);

    friend bool ValidateInput(int& value);

private:
    Node* top; 
    int count; 
};

#endif // STACK_H
