#include "container_operations.h"

template <typename Container>
void FillContainer(Container& container, int size) {
    if (size < 5) {
        std::cerr << "Îøèáêà: Ðàçìåð êîíòåéíåðà äîëæåí áûòü íå ìåíåå 5\n";
        return false;
    }

    int method = 0;
    std::cout << "Âûáåðåòå ñïîñîá çàïîëíåíèÿ êîíòåéíåðà: \n"
        << "1)Ââîä ñ êëàâèàòóðû.\n"
        << "2)Ââîä ñ ïîìîùüþ ðàíäîìàéçåðà.\n"
        << "3)Ââîä äàííûõ èç òåêñòîâîãî ôàéëà.\n";
    std::cin >> method;

    switch (method) {
    case 1: {
        for (int i = 0; i < size; ++i) {
            int value = 0;
            std::cout << "Ââåäèòå ýëåìåíò " << i + 1 << ": ";
            if (!(std::cin >> value)) {
                std::cerr << "Îøèáêà ââîäà äàííûõ\n";
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
            std::cerr << "Îøèáêà: Íå óäàëîñü îòêðûòü ôàéë\n";
            return false;
        }
        for (int i = 0; i < size; ++i) {
            int value = 0;
            if (!(inputFile >> value)) {
                std::cerr << "Îøèáêà: Íåäîñòàòî÷íî äàííûõ â ôàéëå\n";
                return false;
            }
            container.insert(container.end(), value);
        }
        break;
    }
    default:
        std::cerr << "Îøèáêà: Íåâåðíûé ìåòîä ââîäà\n";
        return false;
    }
    return true;
}

template <typename Container>
void PrintContainer(const Container& container) {
    std::cout << "Ýëåìåíòû (ïðÿìîé ïîðÿäîê): ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "Ýëåìåíòû (îáðàòíûé ïîðÿäîê): ";
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
