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
    std::cout << "\n���������� ���������:\n";
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
        std::cout << "������� �����!\n";
        return;
    }

    std::cout << "\n�������� ����� ������� ��������: " << head << " " << head->data << "\n";
    std::cout << "�������� �������: ";

    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << "\n�������� ����� ���������� ��������: " << tail << " " << tail->data << "\n";
}

void Queue::PrintFinalState() const {
    if (IsEmpty()) {
        std::cout << "\n������� ����� �������� ��������� ��������� ������\n";
        std::cout << "������ �������: nullptr\n";
        std::cout << "����� �������: nullptr\n";
        return;
    }

    std::cout << "\n����� ������ �������: " << head << " " << head->data << "\n";
    std::cout << "���������� �������� �������: ";

    Node* current = head;
    Node* last = nullptr;
    while (current != nullptr) {
        last = current;
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << "\n����� ����� �������: " << last << " " << last->data << "\n";
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