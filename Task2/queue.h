#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

struct Node {
    int data;     
    Node* next;  

    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
public:
    Queue();
    ~Queue();
    void Enqueue(int value);
    void ExtractElements(int count);
    void PrintInitialState() const;
    void PrintFinalState() const;
    bool IsEmpty() const;

private:
    Node* head;   
    Node* tail;  
    void Clear();
};

#endif // QUEUE_H
