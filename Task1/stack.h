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

bool ValidateInput(int& value);

/**
     * @struct Node
     * @brief Узел стека
     */
    struct Node {
        int data;    
        Node* next;    

        /**
         * @brief Конструктор узла
         * @param val Значение элемента
         */
        Node(int val) : data(val), next(nullptr) {}
    };

/**
 * @class Stack
 * @brief Реализация стека на основе связного списка
 */
class Stack {
private:
    Node* top; 
    int count; 

public:
    /**
     * @brief Конструктор по умолчанию
     */
    Stack();

    /**
     * @brief Добавляет элемент в стек
     * @param value Значение для добавления
     */
    void Push(int value);

    /**
     * @brief Извлекает верхний элемент из стека
     */
    void Pop();

    /**
     * @brief Выводит содержимое стека
     */
    void Print() const;

    /**
     * @brief Возвращает количество элементов в стеке
     * @return Количество элементов
     */
    int Size() const;

    /**
     * @brief Дружественная функция для вывода адреса вершины
     * @param stack Стек
     */
    friend void PrintTopAddress(const Stack& stack);
};

#endif // STACK_H
