#include "doubly_linked_list.h"
#include <iostream>

int main() {
    DoublyLinkedList list;
    int count = 0; 
    int value = 0;

    std::cout << "Добро пожаловать!\n";
    std::cout << "Программа удаляет элементы с одинаковыми соседями в циклическом двусвязном списке\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "Введите количество элементов в списке: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Ошибка: количество элементов должно быть положительным\n";
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        std::cout << "Введите " << i + 1 << "-й элемент: ";
        std::cin >> value;
        list.append(value);
    }

    std::cout << "\nИсходный список: ";
    list.print();

    list.removeNodesWithEqualNeighbors();

    std::cout << "Измененный список: ";
    list.print();

    Node* lastNode = list.getLastNode();
    if (lastNode != nullptr) {
        std::cout << "Ссылка на последний элемент: " << lastNode << " (значение: " << lastNode->value << ")\n";
    } else {
        std::cout << "Список пуст\n";
    }

    return 0;
}