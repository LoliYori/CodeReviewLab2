/*��� ����������� �������� ������ � ��������� �� ������ ������ P1. ����������
�������� �������� M ����� ������� ������� �������� ������, � ������� ������ �� ���������
������� ����������� ������ P2.

��� ������ ������������ ��������� ������ ���� ������������ ����������� ����� ������� -
����������/��������/������ ���������.
�� ���� ������� ����������� ������� �������������� ����������. ���� ������ � ����������.

*/



# include <windows.h>
# include <iostream>
using namespace std;

class Node
{
public:
	int x;
	Node* next;
};
typedef Node* PNode;

void add(int data, PNode& Head, PNode& LastNode)
{
	PNode Temp;
	if (Head == nullptr)
	{
		Head = new Node;
		LastNode = Head;
		Head->next = nullptr;
	}
	else
	{
		Temp = new Node;
		LastNode->next = Temp;
		LastNode = Temp;
		LastNode->next = nullptr;
	}
	LastNode->x = data;
}

void show(PNode& Head)
{
	PNode Mynode = Head;
	cout << "��� ����� �� ������: ";

	while (Mynode != nullptr)
	{
		cout << Mynode->x << " ";
		Mynode = Mynode->next;
	}

}

void addafter(int data, PNode& Head)
{
	PNode Temp = Head;
	PNode MyNode;
	int count = 1;
	while (Temp != nullptr)
	{
		count++;
		if (count == 4)
		{
			MyNode = new Node;
			MyNode->x = data;
			MyNode->next = Temp->next;
			Temp->next = MyNode;
			count = 0;
		}
		Temp = Temp->next;
	}
}

void showafter(PNode& Head)
{
	PNode Mynode = Head;
	cout << endl;
	cout << "��� ����� �� ����������� ������: ";
	while (Mynode != nullptr)
	{
		cout << Mynode->x << " ";
		Mynode = Mynode->next;

	}
	cout << endl;
}

PNode showlast(PNode& Head)
{
	PNode Mynode2 = Head;
	while (Mynode2 != nullptr && Mynode2->next != nullptr)
	{
		Mynode2 = Mynode2->next;
	}
	return Mynode2;
}

PNode Find(PNode Head, int data)
{
	PNode q = Head;
	while (q && q->x != data)
		q = q->next;
	return q;
}


void DeleteNode(PNode& Head, PNode OldNode)
{
	PNode q = Head;
	if (Head == OldNode)
		Head = OldNode->next;  // ������� ������ ������� 
	else
	{
		while (q->next != OldNode) // ���� ������� 
			q = q->next;
		q->next = OldNode->next;
	}
	delete OldNode; // ����������� ������ 
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PNode H1 = NULL;
	PNode LastNode = NULL;
	cout << "����� ����������!" << endl;
	cout << "����� ���� ������: " << endl;
	cout << "��� ����������� �������� ������" << endl;
	cout << "���������� �������� �������� M ����� ������� �������� �������� ������," << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "��� ���������� ������ ��� ��������: " << endl;
	cout << "1. n(n>=3) - ���������� ��������� � ������" << endl;
	cout << "2. m - �����, ������� �� ����� ���������. " << endl;
	cout << "����� ����� ������ ������ �������� ������, ���������� ������� ����� ��������� � ���, ��� �� ����� �����," << endl;
	cout << "����� �� ������� ���������� ��������� �� ����� � ������ �� ��������� �������. " << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "������� �����(������ 3) - ���������� ��������� � �������: ";
	int n, x, m;;
	cin >> n;
	cout << "������� " << n << " ��������� ������ ";
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		add(x, H1, LastNode);
	}
	cout << endl;
	cout << "������� �������� m ��� ������� ����� ������� �������� ��������: ";
	cin >> m;
	cout << endl;
	show(H1);
	cout << endl;
	addafter(m, H1);
	showafter(H1);
	cout << endl;
	PNode last = showlast(H1);
	cout << "������ �� ��������� �������: " << last << " " << last->x;

	int choice;
	cout << endl << "������ ������� �����-������ �������?" << endl;
	cout << "���� ��, �� �������� 1" << endl;
	cout << "���� ���, �� �������� 2" << endl;
	cout << "��� �����: ";
	cin >> choice;
	cout << endl;
	switch (choice)	
	{
	case 1:
	{
		cout << "������� ����� - ���������� ��������� ������� �� ������ �������: ";
		int num;
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cout << "������� �������� ��������, ������� �� ������ �������: ";
			int x;
			cin >> x;
			PNode p = Find(H1, x);
			cout << endl;
			cout << "��������...." << endl;
			DeleteNode(H1, p);
		}
		show(H1);
	}break;

	case 2:
	{
		{
			cout << "������� �� ��������!!!" << endl;
			cout << "�� ��������!!!" << endl;
		}
	}
	default:
	{
		cout << "������� �������� �����"; break;
	}
	}
	return 0;
}
