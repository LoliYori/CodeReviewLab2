#include "queue.h"

Queue::Queue() : head(nullptr), tail(nullptr) {}

Queue::~Queue() {
    Clear();
}

void Queue::Enqueue(int value) {
    Node* newNode = new Node(value);

    if (IsEmpty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void Queue::ExtractElements(int count) {
    std::cout << "\nИзвлечение элементов:\n";
    for (int i = 0; i < count && !IsEmpty(); ++i) {
        Node* temp = head;
        std::cout << temp->data << " " << temp->next << "\n";
        head = head->next;
        delete temp;

        if (head == nullptr) {
            tail = nullptr;
        }
    }
}

void Queue::PrintInitialState() const {
    if (IsEmpty()) {
        std::cout << "Очередь пуста!\n";
        return;
    }

    std::cout << "\nИсходный адрес первого элемента: " << head << " " << head->data << "\n";
    std::cout << "Исходная очередь: ";

    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << "\nИсходный адрес последнего элемента: " << tail << " " << tail->data << "\n";
}

void Queue::PrintFinalState() const {
    if (IsEmpty()) {
        std::cout << "\nОчередь после удаления элементов оказалась пустой\n";
        std::cout << "Начало очереди: nullptr\n";
        std::cout << "Конец очереди: nullptr\n";
        return;
    }

    std::cout << "\nНовое начало очереди: " << head << " " << head->data << "\n";
    std::cout << "Оставшиеся элементы очереди: ";

    Node* current = head;
    Node* last = nullptr;
    while (current != nullptr) {
        last = current;
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << "\nНовый конец очереди: " << last << " " << last->data << "\n";
}

bool Queue::IsEmpty() const {
    return head == nullptr;
}

void Queue::Clear() {
    while (!IsEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}