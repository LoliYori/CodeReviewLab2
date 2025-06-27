#include "container_operations.h"

template <typename Container>
void FillContainer(Container& container, int size) {
    if (size < 5) {
        std::cerr << "������: ������ ���������� ������ ���� �� ����� 5\n";
        return false;
    }

    int method;
    std::cout << "�������� ������ ���������� ����������: \n"
        << "1)���� � ����������.\n"
        << "2)���� � ������� ������������.\n"
        << "3)���� ������ �� ���������� �����.\n";
    std::cin >> method;

    switch (method) {
    case 1: {
        for (int i = 0; i < size; ++i) {
            int value;
            std::cout << "������� ������� " << i + 1 << ": ";
            if (!(std::cin >> value)) {
                std::cerr << "������ ����� ������\n";
                return false;
            }
            container.insert(container.end(), value);
        }
        break;
    }
    case 2: {
        std::srand(std::time(nullptr));
        for (int i = 0; i < size; ++i) {
            container.insert(container.end(), std::rand() % 101 - 50);
        }
        break;
    }
    case 3: {
        std::ifstream inputFile("input.txt");
        if (!inputFile) {
            std::cerr << "������: �� ������� ������� ����\n";
            return false;
        }
        for (int i = 0; i < size; ++i) {
            int value;
            if (!(inputFile >> value)) {
                std::cerr << "������: ������������ ������ � �����\n";
                return false;
            }
            container.insert(container.end(), value);
        }
        break;
    }
    default:
        std::cerr << "������: �������� ����� �����\n";
        return false;
    }
    return true;
}

template <typename Container>
void PrintContainer(const Container& container) {
    std::cout << "�������� (������ �������): ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "�������� (�������� �������): ";
    for (auto rit = container.rbegin(); rit != container.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "\n";
}

void InsertElements(std::deque<int>& sourceDeque, std::list<int>& targetList) {
    auto insertPosition = targetList.end();
    std::advance(insertPosition, -5);
    targetList.insert(insertPosition, sourceDeque.rbegin(), sourceDeque.rbegin() + 5);
}

template void FillContainer(std::deque<int>&, int);
template void FillContainer(std::list<int>&, int);
template void PrintContainer(const std::deque<int>&);
template void PrintContainer(const std::list<int>&);