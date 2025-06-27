#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

/**
 * @brief Узел очереди
 */
struct Node {
    int data;     
    Node* next;  

    Node(int val) : data(val), next(nullptr) {}
};

/**
 * @brief Класс для работы с очередью
 */
class Queue {
private:
    Node* head;   
    Node* tail;  

public:
    Queue();
    ~Queue();

    /**
     * @brief Добавляет элемент в конец очереди
     * @param value Значение для добавления
     */
    void Enqueue(int value);

    /**
     * @brief Извлекает N элементов из начала очереди
     * @param count Количество элементов для извлечения
     */
    void ExtractElements(int count);

    /**
     * @brief Выводит исходное состояние очереди
     */
    void PrintInitialState() const;

    /**
     * @brief Выводит состояние очереди после извлечения элементов
     */
    void PrintFinalState() const;

    /**
     * @brief Проверяет, пуста ли очередь
     * @return true если очередь пуста, false в противном случае
     */
    bool IsEmpty() const;

private:
    /**
     * @brief Очищает очередь
     */
    void Clear();
};

#endif // QUEUE_H
