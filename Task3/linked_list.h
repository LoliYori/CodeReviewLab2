#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

/**
 * @brief Узел односвязного списка
 */
struct Node {
    int data;       ///< Значение узла
    Node* next;     ///< Указатель на следующий узел
};

/**
 * @brief Класс для работы с односвязным списком
 */
class LinkedList {
private:
    Node* head;     ///< Указатель на начало списка
    Node* tail;     ///< Указатель на конец списка

public:
    LinkedList();
    ~LinkedList();

    /**
     * @brief Добавляет элемент в конец списка
     * @param value Значение для добавления
     */
    void Append(int value);

    /**
     * @brief Вставляет значение после каждого второго элемента
     * @param value Значение для вставки
     */
    void InsertAfterEverySecond(int value);

    /**
     * @brief Выводит список
     */
    void Print() const;

    /**
     * @brief Возвращает указатель на последний элемент
     * @return Указатель на последний узел
     */
    Node* GetLastNode() const;

    /**
     * @brief Удаляет элемент по значению
     * @param value Значение для удаления
     */
    void Remove(int value);

private:
    /**
     * @brief Очищает список
     */
    void Clear();
};

#endif // LINKED_LIST_H