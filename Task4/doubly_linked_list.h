#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

struct Node {
    int value;      
    Node* next;     
    Node* prev;     
    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void append(int value);
    void removeNodesWithEqualNeighbors();
    void print() const;
    void clear();
    Node* getLastNode() const;
    bool isEmpty() const;

private:
    Node* head;
    Node* tail;
    int size;
};

#endif // DOUBLY_LINKED_LIST_H
