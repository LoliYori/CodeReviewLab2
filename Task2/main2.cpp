
#include "queue.h"
#include <iostream>

int main() {
    Queue queue;
    int queueSize = 0;
    int elementsToExtract = 0;

    std::cout << "����� ����������!\n";
    std::cout << "����� ���� ����� ������:\n";
    std::cout << "���� ����� N (> 0) � ��������� P1 � P2 �� ������ � ����� �������� �������.\n";
    std::cout << "������� �� ������� N ��������� ���������\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << "��� ���������� ������ ���������� ��������� ������� � �� �������� ����� ������\n";
    std::cout << "�� ������� ����� ������ ������ � ����� �������, �������� N �������� � ������� �� �����\n";
    std::cout << "\n----------------------------------------------------------------------------\n";

    std::cout << "������� ������ �������: ";
    std::cin >> queueSize;

    std::cout << "������� " << queueSize << " �������� ��������� ������� ����� ������: ";
    for (int i = 0; i < queueSize; ++i) {
        int value;
        std::cin >> value;
        queue.Enqueue(value);
    }

    std::cout << "\n������� ���������� ��������� ��� ���������� (N > 0): ";
    std::cin >> elementsToExtract;

    queue.PrintInitialState();
    queue.ExtractElements(elementsToExtract);
    queue.PrintFinalState();

    return 0;
}