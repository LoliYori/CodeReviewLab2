#include "stack.h"

Stack::Stack() : top(nullptr), count(0) {}

void Stack::Push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    count++;
}

void Stack::Pop() {
    if (top == nullptr) {
        std::cerr << "������: ���� ����!" << std::endl;
        return;
    }

    Node* temp = top;
    std::cout << "������ ������� �����: " << top->data << std::endl;

    top = top->next;
    std::cout << "����� ����� �������: " << top << std::endl;

    if (top != nullptr) {
        std::cout << "�������� ����� �������: " << top->data << std::endl;
    }

    delete temp;
    --count;
}

void Stack::Print() const {
    if (top == nullptr) {
        std::cout << "���� ����" << std::endl;
        return;
    }

    Node* current = top;
    std::cout << "���������� ����� (" << count << " ���������):" << std::endl;

    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int Stack::Size() const {
    return count;
}

void PrintTopAddress(const Stack& stack) {
    std::cout << "����� ������� �����: " << stack.top << std::endl;
}

bool ValidateInput(int& value) {
    std::cin >> value;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}