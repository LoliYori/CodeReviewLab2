/*
 * ��� ����������� �������� ������ � ��������� �� ������ ������ P1. ����������
 * �������� �������� M ����� ������� ������� �������� ������, � ������� ������ �� ���������
 * ������� ����������� ������ P2.
 */

#include "linked_list.h"

int main() {
    LinkedList list;
    int size, value, insertValue;

    std::cout << "����� ����������!\n";
    std::cout << "����� ���� ������:\n";
    std::cout << "��� ����������� �������� ������\n";
    std::cout << "���������� �������� �������� M ����� ������� ������� �������� ������\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "��� ���������� ������:\n";
    std::cout << "1. n (n >= 3) - ���������� ��������� � ������\n";
    std::cout << "2. m - ����� ��� �������\n";
    std::cout << "����� ������� �������� ������ ����� ������\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "������� ���������� ��������� � ������ (>=3): ";
    std::cin >> size;

    std::cout << "������� " << size << " ��������� ������: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> value;
        list.Append(value);
    }

    std::cout << "������� �������� ��� ������� (m): ";
    std::cin >> insertValue;

    std::cout << "\n�������� ������: ";
    list.Print();

    list.InsertAfterEverySecond(insertValue);

    std::cout << "���������� ������: ";
    list.Print();

    Node* lastNode = list.GetLastNode();
    std::cout << "������ �� ��������� �������: " << lastNode << " (��������: " << lastNode->data << ")\n";

    std::cout << "\n������ ������� ��������? (1 - ��, 2 - ���): ";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "������� ��������� �������? ";
        int count;
        std::cin >> count;

        for (int i = 0; i < count; ++i) {
            std::cout << "������� �������� �������� ��� ��������: ";
            std::cin >> value;
            list.Remove(value);
            std::cout << "������� " << value << " ������.\n";
        }

        std::cout << "������� ������: ";
        list.Print();
    }

    std::cout << "��������� ���������.\n";
    return 0;
}