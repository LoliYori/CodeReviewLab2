#include "container_operations.h"

template <typename Container>
bool ContainerOperations::FillContainer(Container& container, int size) {
    if (size < 5) {
        std::cerr << "Ошибка: Размер контейнера должен быть не менее 5\n";
        return false;
    }

    int method = 0;
    std::cout << "Выберите способ заполнения контейнера: \n"
              << "1) Ввод с клавиатуры.\n"
              << "2) Ввод с помощью рандомайзера.\n"
              << "3) Ввод данных из текстового файла.\n";
    std::cin >> method;

    switch (method) {
    case 1: {
        for (int i = 0; i < size; ++i) {
            int value = 0;
            std::cout << "Введите элемент " << i + 1 << ": ";
            if (!(std::cin >> value)) {
                std::cerr << "Ошибка ввода данных\n";
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
            std::cerr << "Ошибка: Не удалось открыть файл\n";
            return false;
        }
        for (int i = 0; i < size; ++i) {
            int value = 0;
            if (!(inputFile >> value)) {
                std::cerr << "Ошибка: Недостаточно данных в файле\n";
                return false;
            }
            container.insert(container.end(), value);
        }
        break;
    }
    default:
        std::cerr << "Ошибка: Неверный метод ввода\n";
        return false;
    }
    return true;
}

template <typename Container>
void ContainerOperations::PrintContainer(const Container& container) {
    std::cout << "Элементы (прямой порядок): ";
    
    // Итератор для прямого прохода (ожидаемый тип: Container::const_iterator)
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "Элементы (обратный порядок): ";
    
    // Обратный итератор (ожидаемый тип: Container::const_reverse_iterator)
    for (auto rit = container.rbegin(); rit != container.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "\n";
}

void ContainerOperations::InsertElements(std::deque<int>& sourceDeque, std::list<int>& targetList) {
    // Итератор на элемент списка ( ожидаемый тип: std::list<int>::iterator)
    auto insertPosition = targetList.end();
    std::advance(insertPosition, -5);
    targetList.insert(insertPosition, sourceDeque.rbegin(), sourceDeque.rbegin() + 5);
}

// Явная инстанциация шаблонов
template bool ContainerOperations::FillContainer(std::deque<int>&, int);
template bool ContainerOperations::FillContainer(std::list<int>&, int);
template void ContainerOperations::PrintContainer(const std::deque<int>&);
template void ContainerOperations::PrintContainer(const std::list<int>&);
