#include "container_operations.h"

int main() {
    try {
        std::deque<int> dequeContainer; 
        std::list<int> listContainer;   
        int containerSize = 0;      

        std::cout << "Введите размер дека (>=5): ";
        std::cin >> containerSize;
        FillContainer(dequeContainer, containerSize);

        std::cout << "Введите размер списка (>=5): ";
        std::cin >> containerSize;
        FillContainer(listContainer, containerSize);

        std::cout << "\nИсходный дек:\n";
        PrintContainer(dequeContainer);
        std::cout << "Исходный список:\n";
        PrintContainer(listContainer);

        InsertElements(dequeContainer, listContainer);

        std::cout << "\nПосле вставки:\n";
        std::cout << "Дек:\n";
        PrintContainer(dequeContainer);
        std::cout << "Список:\n";
        PrintContainer(listContainer);

    }
    catch (const std::exception& error) {
        std::cerr << "Ошибка: " << error.what() << "\n";
        return 1;
    }

    return 0;
}
