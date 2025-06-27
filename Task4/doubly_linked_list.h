#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

/**
 * @brief ���� ����������� ������������ ������
 */
class Node {
public:
    int value;          ///< �������� ����
    Node* next;         ///< ��������� �� ��������� ����
    Node* prev;         ///< ��������� �� ���������� ����

    /**
     * @brief ����������� ����
     * @param val �������� ����
     */
    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
};

/**
 * @brief ����� ����������� ������������ ������
 */
class DoublyLinkedList {
private:
    Node* head;         ///< ��������� �� ������ ����
    Node* tail;         ///< ��������� �� ��������� ����
    int size;           ///< ���������� ��������� � ������

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    /**
     * @brief ��������� ������� � ����� ������
     * @param value �������� ��� ����������
     */
    void append(int value);

    /**
     * @brief ������� �������� � ����������� ��������
     */
    void removeNodesWithEqualNeighbors();

    /**
     * @brief ������� ������
     */
    void print() const;

    /**
     * @brief ������� ������
     */
    void clear();

    /**
     * @brief ���������� ��������� �� ��������� �������
     * @return ��������� �� ��������� ����
     */
    Node* getLastNode() const;

    /**
     * @brief ���������, ���� �� ������
     * @return true ���� ������ ����, ����� false
     */
    bool isEmpty() const;
};

#endif // DOUBLY_LINKED_LIST_H