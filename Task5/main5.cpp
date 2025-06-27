#include "container_operations.h"

int main() {
    try {
        std::deque<int> dequeContainer;
        std::list<int> listContainer;
        int containerSize = 0;

        std::cout << "Enter deque size (>=5): ";
        std::cin >> containerSize;
        FillContainer(dequeContainer, containerSize);

        std::cout << "Enter list size (>=5): ";
        std::cin >> containerSize;
        FillContainer(listContainer, containerSize);

        std::cout << "\nOriginal deque:\n";
        PrintContainer(dequeContainer);
        std::cout << "Original list:\n";
        PrintContainer(listContainer);

        InsertElements(dequeContainer, listContainer);

        std::cout << "\nAfter insertion:\n";
        std::cout << "Deque:\n";
        PrintContainer(dequeContainer);
        std::cout << "List:\n";
        PrintContainer(listContainer);

    }
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << "\n";
        return 1;
    }

    return 0;
}
