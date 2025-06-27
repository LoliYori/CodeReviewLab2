#include "doubly_linked_list.h"

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::append(int value) {
    Node* newNode = new Node(value);

    if (isEmpty()) {
        head = tail = newNode;
        head->next = head;
        head->prev = head;
    } else {
        newNode->prev = tail;
        newNode->next = head;
        tail->next = newNode;
        head->prev = newNode;
        tail = newNode;
    }
    ++size;
}

void DoublyLinkedList::removeNodesWithEqualNeighbors() {
    if (isEmpty() || size < 3) {
        return;
    }

    Node* current = head;
    bool changed = false;

    do {
        Node* nextNode = current->next;

        if (current->prev->value == current->next->value) {
            // Óäàëÿåì òåêóùèé óçåë
            current->prev->next = current->next;
            current->next->prev = current->prev;

            if (current == head) {
                head = current->next;
            }

            if (current == tail) {
                tail = current->prev;
            }

            delete current;
            --size;
            changed = true;
        }

        current = nextNode;
    } while (current != head);

    if (changed) {
        removeNodesWithEqualNeighbors();
    }
}

void DoublyLinkedList::print() const {
    if (isEmpty()) {
        std::cout << "Ñïèñîê ïóñò" << std::endl;
        return;
    }

    Node* current = head;
    do {
        std::cout << current->value << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}

void DoublyLinkedList::clear() {
    if (isEmpty()) {
        return;
    }

    Node* current = head;
    do {
        Node* temp = current;
        current = current->next;
        delete temp;
    } while (current != head);

    head = tail = nullptr;
    size = 0;
}

Node* DoublyLinkedList::getLastNode() const {
    return tail;
}

bool DoublyLinkedList::isEmpty() const {
    return head == nullptr;
}
