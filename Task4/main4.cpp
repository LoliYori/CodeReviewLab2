#include "doubly_linked_list.h"

int main() {
    DoublyLinkedList list;
    int count = 0; 
    int value = 0;

    std::cout << "Äîáðî ïîæàëîâàòü!\n";
    std::cout << "Ïðîãðàììà óäàëÿåò ýëåìåíòû ñ îäèíàêîâûìè ñîñåäÿìè â öèêëè÷åñêîì äâóñâÿçíîì ñïèñêå\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ â ñïèñêå: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Îøèáêà: êîëè÷åñòâî ýëåìåíòîâ äîëæíî áûòü ïîëîæèòåëüíûì\n";
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        std::cout << "Ââåäèòå " << i + 1 << "-é ýëåìåíò: ";
        std::cin >> value;
        list.append(value);
    }

    std::cout << "\nÈñõîäíûé ñïèñîê: ";
    list.print();

    list.removeNodesWithEqualNeighbors();

    std::cout << "Èçìåíåííûé ñïèñîê: ";
    list.print();

    Node* lastNode = list.getLastNode();
    if (lastNode != nullptr) {
        std::cout << "Ññûëêà íà ïîñëåäíèé ýëåìåíò: " << lastNode << " (çíà÷åíèå: " << lastNode->value << ")\n";
    } else {
        std::cout << "Ñïèñîê ïóñò\n";
    }

    return 0;
}
