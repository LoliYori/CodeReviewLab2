#include "doubly_linked_list.h"
#include <iostream>

int main() {
    DoublyLinkedList list;
    int count = 0; 
    int value = 0;

    std::cout << "����� ����������!\n";
    std::cout << "��������� ������� �������� � ����������� �������� � ����������� ���������� ������\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "������� ���������� ��������� � ������: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "������: ���������� ��������� ������ ���� �������������\n";
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        std::cout << "������� " << i + 1 << "-� �������: ";
        std::cin >> value;
        list.append(value);
    }

    std::cout << "\n�������� ������: ";
    list.print();

    list.removeNodesWithEqualNeighbors();

    std::cout << "���������� ������: ";
    list.print();

    Node* lastNode = list.getLastNode();
    if (lastNode != nullptr) {
        std::cout << "������ �� ��������� �������: " << lastNode << " (��������: " << lastNode->value << ")\n";
    } else {
        std::cout << "������ ����\n";
    }

    return 0;
}