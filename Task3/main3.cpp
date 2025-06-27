/*
 * Äàí îäíîñâÿçíûé ëèíåéíûé ñïèñîê è óêàçàòåëü íà ãîëîâó ñïèñêà P1. Íåîáõîäèìî
 * âñòàâèòü çíà÷åíèå M ïîñëå êàæäîãî âòîðîãî ýëåìåíòà ñïèñêà, è âûâåñòè ññûëêó íà ïîñëåäíèé
 * ýëåìåíò ïîëó÷åííîãî ñïèñêà P2.
 */

#include "linked_list.h"

int main() {
    LinkedList list;
    int size = 0;
    int value = 0;
    int insertValue = 0;

    std::cout << "Äîáðî ïîæàëîâàòü!\n";
    std::cout << "Ïåðåä íàìè çàäà÷à:\n";
    std::cout << "Äàí îäíîñâÿçíûé ëèíåéíûé ñïèñîê\n";
    std::cout << "Íåîáõîäèìî âñòàâèòü çíà÷åíèå M ïîñëå êàæäîãî âòîðîãî ýëåìåíòà ñïèñêà\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "Âàì íåîáõîäèìî ââåñòè:\n";
    std::cout << "1. n (n >= 3) - êîëè÷åñòâî ýëåìåíòîâ â ñïèñêå\n";
    std::cout << "2. m - ÷èñëî äëÿ âñòàâêè\n";
    std::cout << "Çàòåì ââåäèòå ýëåìåíòû ñïèñêà ÷åðåç ïðîáåë\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ â ñïèñêå (>=3): ";
    std::cin >> size;

    std::cout << "Ââåäèòå " << size << " ýëåìåíòîâ ñïèñêà: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> value;
        list.Append(value);
    }

    std::cout << "Ââåäèòå çíà÷åíèå äëÿ âñòàâêè (m): ";
    std::cin >> insertValue;

    std::cout << "\nÈñõîäíûé ñïèñîê: ";
    list.Print();

    list.InsertAfterEverySecond(insertValue);

    std::cout << "Èçìåíåííûé ñïèñîê: ";
    list.Print();

    Node* lastNode = list.GetLastNode();
    std::cout << "Ññûëêà íà ïîñëåäíèé ýëåìåíò: " << lastNode << " (çíà÷åíèå: " << lastNode->data << ")\n";

    std::cout << "\nÕîòèòå óäàëèòü ýëåìåíòû? (1 - äà, 2 - íåò): ";
    int choice = 0;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Ñêîëüêî ýëåìåíòîâ óäàëèòü? ";
        int count = 0;
        std::cin >> count;

        for (int i = 0; i < count; ++i) {
            std::cout << "Ââåäèòå çíà÷åíèå ýëåìåíòà äëÿ óäàëåíèÿ: ";
            std::cin >> value;
            list.Remove(value);
            std::cout << "Ýëåìåíò " << value << " óäàëåí.\n";
        }

        std::cout << "Òåêóùèé ñïèñîê: ";
        list.Print();
    }

    std::cout << "Ïðîãðàììà çàâåðøåíà.\n";
    return 0;
}
