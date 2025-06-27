/*
 * Дан односвязный линейный список и указатель на голову списка P1. Необходимо
 * вставить значение M после каждого второго элемента списка, и вывести ссылку на последний
 * элемент полученного списка P2.
 */

#include "linked_list.h"

int main() {
    LinkedList list;
    int size, value, insertValue;

    std::cout << "Добро пожаловать!\n";
    std::cout << "Перед нами задача:\n";
    std::cout << "Дан односвязный линейный список\n";
    std::cout << "Необходимо вставить значение M после каждого второго элемента списка\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "Вам необходимо ввести:\n";
    std::cout << "1. n (n >= 3) - количество элементов в списке\n";
    std::cout << "2. m - число для вставки\n";
    std::cout << "Затем введите элементы списка через пробел\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "Введите количество элементов в списке (>=3): ";
    std::cin >> size;

    std::cout << "Введите " << size << " элементов списка: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> value;
        list.Append(value);
    }

    std::cout << "Введите значение для вставки (m): ";
    std::cin >> insertValue;

    std::cout << "\nИсходный список: ";
    list.Print();

    list.InsertAfterEverySecond(insertValue);

    std::cout << "Измененный список: ";
    list.Print();

    Node* lastNode = list.GetLastNode();
    std::cout << "Ссылка на последний элемент: " << lastNode << " (значение: " << lastNode->data << ")\n";

    std::cout << "\nХотите удалить элементы? (1 - да, 2 - нет): ";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Сколько элементов удалить? ";
        int count;
        std::cin >> count;

        for (int i = 0; i < count; ++i) {
            std::cout << "Введите значение элемента для удаления: ";
            std::cin >> value;
            list.Remove(value);
            std::cout << "Элемент " << value << " удален.\n";
        }

        std::cout << "Текущий список: ";
        list.Print();
    }

    std::cout << "Программа завершена.\n";
    return 0;
}