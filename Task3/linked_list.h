#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

/**
 * @brief ���� ������������ ������
 */
struct Node {
    int data;       ///< �������� ����
    Node* next;     ///< ��������� �� ��������� ����
};

/**
 * @brief ����� ��� ������ � ����������� �������
 */
class LinkedList {
private:
    Node* head;     ///< ��������� �� ������ ������
    Node* tail;     ///< ��������� �� ����� ������

public:
    LinkedList();
    ~LinkedList();

    /**
     * @brief ��������� ������� � ����� ������
     * @param value �������� ��� ����������
     */
    void Append(int value);

    /**
     * @brief ��������� �������� ����� ������� ������� ��������
     * @param value �������� ��� �������
     */
    void InsertAfterEverySecond(int value);

    /**
     * @brief ������� ������
     */
    void Print() const;

    /**
     * @brief ���������� ��������� �� ��������� �������
     * @return ��������� �� ��������� ����
     */
    Node* GetLastNode() const;

    /**
     * @brief ������� ������� �� ��������
     * @param value �������� ��� ��������
     */
    void Remove(int value);

private:
    /**
     * @brief ������� ������
     */
    void Clear();
};

#endif // LINKED_LIST_H