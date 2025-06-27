#include "container_operations.h"
#include <iostream>

int main() {
    try {
        std::deque<int> dequeContainer;
        std::list<int> listContainer;
        int containerSize;

        // Fill deque
        std::cout << "Enter deque size (>=5): ";
        std::cin >> containerSize;
        FillContainer(dequeContainer, containerSize);

        // Fill list
        std::cout << "Enter list size (>=5): ";
        std::cin >> containerSize;
        FillContainer(listContainer, containerSize);

        // Print original containers
        std::cout << "\nOriginal deque:\n";
        PrintContainer(dequeContainer);
        std::cout << "Original list:\n";
        PrintContainer(listContainer);

        // Insert elements
        InsertElements(dequeContainer, listContainer);

        // Print results
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