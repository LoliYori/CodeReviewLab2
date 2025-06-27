
#include "queue.h"
#include <iostream>

int main() {
    Queue queue;
    int queueSize = 0;
    int elementsToExtract = 0;

    std::cout << "Добро пожаловать!\n";
    std::cout << "Перед нами новая задача:\n";
    std::cout << "Дано число N (> 0) и указатели P1 и P2 на начало и конец непустой очереди.\n";
    std::cout << "Извлечь из очереди N начальных элементов\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << "Вам необходимо ввести количество элементов очереди и их значения через пробел\n";
    std::cout << "Мы выведем новые адреса начала и конца очереди, извлечем N значений и выведем на экран\n";
    std::cout << "\n----------------------------------------------------------------------------\n";

    std::cout << "Введите размер очереди: ";
    std::cin >> queueSize;

    std::cout << "Введите " << queueSize << " значений элементов очереди через пробел: ";
    for (int i = 0; i < queueSize; ++i) {
        int value;
        std::cin >> value;
        queue.Enqueue(value);
    }

    std::cout << "\nВведите количество элементов для извлечения (N > 0): ";
    std::cin >> elementsToExtract;

    queue.PrintInitialState();
    queue.ExtractElements(elementsToExtract);
    queue.PrintFinalState();

    return 0;
}