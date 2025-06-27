#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {
    Clear();
}

void LinkedList::Append(int value) {
    Node* newNode = new Node{ value, nullptr };

    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::InsertAfterEverySecond(int value) {
    if (head == nullptr) {
        return;
    }

    Node* current = head;
    int counter = 1;

    while (current != nullptr) {
        if (counter % 2 == 0) {
            Node* newNode = new Node{ value, current->next };
            current->next = newNode;

            if (newNode->next == nullptr) {
                tail = newNode;
            }

            current = newNode->next;
            ++counter;
        } else {
            current = current->next;
        }
        ++counter;
    }
}

void LinkedList::Print() const {
    Node* current = head;
    std::cout << "Ёлементы списка: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

Node* LinkedList::GetLastNode() const {
    return tail;
}

void LinkedList::Remove(int value) {
    if (head == nullptr) {
        return;
    }

    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (current->data == value) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }

            if (current == tail) {
                tail = prev;
            }

            delete current;
            return;
        }

        prev = current;
        current = current->next;
    }
}

void LinkedList::Clear() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}