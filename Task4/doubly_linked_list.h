#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

/**
 * @brief Узел двусвязного циклического списка
 */
class Node {
public:
    int value;          ///< Значение узла
    Node* next;         ///< Указатель на следующий узел
    Node* prev;         ///< Указатель на предыдущий узел

    /**
     * @brief Конструктор узла
     * @param val Значение узла
     */
    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
};

/**
 * @brief Класс двусвязного циклического списка
 */
class DoublyLinkedList {
private:
    Node* head;         ///< Указатель на первый узел
    Node* tail;         ///< Указатель на последний узел
    int size;           ///< Количество элементов в списке

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    /**
     * @brief Добавляет элемент в конец списка
     * @param value Значение для добавления
     */
    void append(int value);

    /**
     * @brief Удаляет элементы с одинаковыми соседями
     */
    void removeNodesWithEqualNeighbors();

    /**
     * @brief Выводит список
     */
    void print() const;

    /**
     * @brief Очищает список
     */
    void clear();

    /**
     * @brief Возвращает указатель на последний элемент
     * @return Указатель на последний узел
     */
    Node* getLastNode() const;

    /**
     * @brief Проверяет, пуст ли список
     * @return true если список пуст, иначе false
     */
    bool isEmpty() const;
};

#endif // DOUBLY_LINKED_LIST_H