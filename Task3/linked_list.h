#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

struct Node {
    int data;     
    Node* next; 
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void Append(int value);
    void InsertAfterEverySecond(int value);
    void Print() const;
    Node* GetLastNode() const;
    void Remove(int value);

private:
    Node* head;     
    Node* tail;  
    void Clear();
};

#endif // LINKED_LIST_H
