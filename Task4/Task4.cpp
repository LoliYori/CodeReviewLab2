
/*
��� ����������� ���������� �������� ������ � ��������� ������
������� ����� ������. ���������� ������� � ������ ��� ��������, � ������� ������ �
����� ����� ���������. ���� ����� ��������� ���, �� �������� ������ ��� ���������.
������ � ��������� �������� ������� ��������. � ���������� ������� ������ ��
��������� ������� ����������� ������.

��� ������������ ��������� ������ ������������� ����� ������. �� ������������ STL.
��� ������ ������������ ��������� ������ ���� ������������ �����������
����� ������� - ����������/��������/������ ���������. �� ���� ������� ����������� �������
�������������� ����������. ���� ������ � ����������.
*/

#include <iostream>
using namespace std;
class Node
{
public:
    int y;
    Node* Next;
    Node* Prev;
    Node(int x) : y(x), Next(NULL), Prev(NULL) {}
};
class LinkedList
{
public:
    Node* Head;
    Node* Tail;
    LinkedList() : Head(NULL), Tail(NULL) {}
};

void AddLast(LinkedList& s, int x)
{
    Node* NewNode = new Node(x);
    NewNode->Next = NULL;
    NewNode->Prev = s.Tail;
    if (s.Tail == NULL)
        s.Head = NewNode;
    else
        s.Tail->Next = NewNode;
    s.Tail = NewNode;
    s.Tail->Next = s.Head;
    s.Head->Prev = s.Tail;
}
void F(LinkedList& s)
{
    if (s.Head == NULL)
        return;
    Node* MyNode = s.Head;
    Node* Next1 = NULL;

    do {
        Next1 = MyNode->Next;
        if ((MyNode->Prev->y == MyNode->Next->y) && (MyNode->Prev != MyNode->Next))
        {
            if (MyNode == s.Head && MyNode == s.Tail)
            {
                delete MyNode;
                s.Head = NULL;
                s.Tail = NULL;
                break;
            }
            else if (MyNode == s.Head)
            {
                s.Head = MyNode->Next;
            }
            MyNode->Prev->Next = MyNode->Next;
            MyNode->Next->Prev = MyNode->Prev;
            delete MyNode;
            MyNode = Next1->Prev;
        }
        else {
            MyNode = Next1;
        }
    } while (MyNode != s.Head);
}
void Show(LinkedList& s)
{
    if (s.Head == NULL)
    {
        cout << "������ ����" << endl;
        return;
    }
    Node* MyNode = s.Head;
    do
    {
        cout << MyNode->y << " ";
        MyNode = MyNode->Next;
    } while (MyNode != s.Head);
    cout << endl;
}
void Clear(LinkedList& s)
{
    if (s.Head == NULL)
        return;
    Node* MyNode = s.Head;
    do
    {
        Node* Temp = MyNode;
        MyNode = MyNode->Next;
        delete Temp;
    } while (MyNode != s.Head);
    s.Head = NULL;
    s.Tail = NULL;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    LinkedList spisok;
    int n, x;
    cout << "������� ���������� �����, ������� ���������� �������� � ������: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "������." << endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "������� " << i + 1 << " �����: ";
        cin >> x;
        AddLast(spisok, x);
    }
    cout << "�������� ������: ";
    Show(spisok);
    F(spisok);
    cout << "��������� ������: ";
    Show(spisok);
    Clear(spisok);
    return 0;
}