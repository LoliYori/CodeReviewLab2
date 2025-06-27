#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

/**
 * @brief ���� �������
 */
struct Node {
    int data;       ///< ������ ����
    Node* next;     ///< ��������� �� ��������� ����

    Node(int val) : data(val), next(nullptr) {}
};

/**
 * @brief ����� ��� ������ � ��������
 */
class Queue {
private:
    Node* head;     ///< ��������� �� ������ �������
    Node* tail;     ///< ��������� �� ����� �������

public:
    Queue();
    ~Queue();

    /**
     * @brief ��������� ������� � ����� �������
     * @param value �������� ��� ����������
     */
    void Enqueue(int value);

    /**
     * @brief ��������� N ��������� �� ������ �������
     * @param count ���������� ��������� ��� ����������
     */
    void ExtractElements(int count);

    /**
     * @brief ������� �������� ��������� �������
     */
    void PrintInitialState() const;

    /**
     * @brief ������� ��������� ������� ����� ���������� ���������
     */
    void PrintFinalState() const;

    /**
     * @brief ���������, ����� �� �������
     * @return true ���� ������� �����, false � ��������� ������
     */
    bool IsEmpty() const;

private:
    /**
     * @brief ������� �������
     */
    void Clear();
};

#endif // QUEUE_H