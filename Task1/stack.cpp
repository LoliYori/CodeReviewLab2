#include "stack.h"

Stack::Stack() : top(nullptr), count(0) {}

void Stack::Push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    ++count;
}

void Stack::Pop() {
    if (top == nullptr) {
        std::cerr << "Îøèáêà: ñòåê ïóñò!" << std::endl;
        return;
    }

    Node* temp = top;
    std::cout << "Ïåðâûé ýëåìåíò ñòåêà: " << top->data << std::endl;

    top = top->next;
    std::cout << "Àäðåñ íîâîé âåðøèíû: " << top << std::endl;

    if (top != nullptr) {
        std::cout << "Çíà÷åíèå íîâîé âåðøèíû: " << top->data << std::endl;
    }

    delete temp;
    --count;
}

void Stack::Print() const {
    if (top == nullptr) {
        std::cout << "Ñòåê ïóñò" << std::endl;
        return;
    }

    Node* current = top;
    std::cout << "Ñîäåðæèìîå ñòåêà (" << count << " ýëåìåíòîâ):" << std::endl;

    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int Stack::Size() const {
    return count;
}

void PrintTopAddress(const Stack& stack) {
    std::cout << "Àäðåñ âåðøèíû ñòåêà: " << stack.top << std::endl;
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
