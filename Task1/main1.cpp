/*
Дан указатель P1 на вершину непустого стека. Извлечь из стека первый (верхний)
элемент и вывести его значение D, а также адрес P2 новой вершины стека. Если после
извлечения элемента стек окажется пустым, то положить P2 = nullptr.
*/

#include "stack.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Stack stack;
    int elementsCount = 0;

    std::cout << "Введите количество элементов стека: ";
    while (!ValidateInput(elementsCount) || elementsCount <= 0) {
        std::cout << "Ошибка: введите положительное число: ";
    }

    for (int i = 0; i < elementsCount; ++i) {
        int elementValue = 0;
        std::cout << "Введите элемент стека #" << i + 1 << ": ";
        while (!ValidateInput(elementValue)) {
            std::cout << "Ошибка: введите целое число: ";
        }
        stack.Push(elementValue);
    }

    std::cout << "\nСодержимое стека:" << std::endl;
    stack.Print();

    std::cout << "\nИзвлечение элемента:" << std::endl;
    stack.Pop();

    PrintTopAddress(stack);

    return 0;
}
