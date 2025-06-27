
#include "queue.h"
#include <iostream>

int main() {
    Queue queue;
    int queueSize = 0;
    int elementsToExtract = 0;

    std::cout << "Äîáðî ïîæàëîâàòü!\n";
    std::cout << "Ïåðåä íàìè íîâàÿ çàäà÷à:\n";
    std::cout << "Äàíî ÷èñëî N (> 0) è óêàçàòåëè P1 è P2 íà íà÷àëî è êîíåö íåïóñòîé î÷åðåäè.\n";
    std::cout << "Èçâëå÷ü èç î÷åðåäè N íà÷àëüíûõ ýëåìåíòîâ\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << "Âàì íåîáõîäèìî ââåñòè êîëè÷åñòâî ýëåìåíòîâ î÷åðåäè è èõ çíà÷åíèÿ ÷åðåç ïðîáåë\n";
    std::cout << "Ìû âûâåäåì íîâûå àäðåñà íà÷àëà è êîíöà î÷åðåäè, èçâëå÷åì N çíà÷åíèé è âûâåäåì íà ýêðàí\n";
    std::cout << "\n----------------------------------------------------------------------------\n";

    std::cout << "Ââåäèòå ðàçìåð î÷åðåäè: ";
    std::cin >> queueSize;

    std::cout << "Ââåäèòå " << queueSize << " çíà÷åíèé ýëåìåíòîâ î÷åðåäè ÷åðåç ïðîáåë: ";
    for (int i = 0; i < queueSize; ++i) {
        int value = 0;
        std::cin >> value;
        queue.Enqueue(value);
    }

    std::cout << "\nÂâåäèòå êîëè÷åñòâî ýëåìåíòîâ äëÿ èçâëå÷åíèÿ (N > 0): ";
    std::cin >> elementsToExtract;

    queue.PrintInitialState();
    queue.ExtractElements(elementsToExtract);
    queue.PrintFinalState();

    return 0;
}
