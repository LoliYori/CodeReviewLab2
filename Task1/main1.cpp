/*
��� ��������� P1 �� ������� ��������� �����. ������� �� ����� ������ (�������)
������� � ������� ��� �������� D, � ����� ����� P2 ����� ������� �����. ���� �����
���������� �������� ���� �������� ������, �� �������� P2 = nullptr.
*/

#include "stack.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Stack stack;
    int elementsCount;

    // ���� ���������� ���������
    std::cout << "������� ���������� ��������� �����: ";
    while (!ValidateInput(elementsCount) || elementsCount <= 0) {
        std::cout << "������: ������� ������������� �����: ";
    }

    // ���� ��������� �����
    for (int i = 0; i < elementsCount; ++i) {
        int elementValue;
        std::cout << "������� ������� ����� #" << i + 1 << ": ";
        while (!ValidateInput(elementValue)) {
            std::cout << "������: ������� ����� �����: ";
        }
        stack.Push(elementValue);
    }

    // ����� ����������� �����
    std::cout << "\n���������� �����:" << std::endl;
    stack.Print();

    // ���������� ��������
    std::cout << "\n���������� ��������:" << std::endl;
    stack.Pop();

    // ����� ������ �������
    PrintTopAddress(stack);

    return 0;
}