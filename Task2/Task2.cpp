/*
���� ����� N (> 0) � ��������� P1 � P2 �� ������ � ����� �������� �������. �������
�� ������� N ��������� ��������� � ������� �� �������� (���� ������� �������� ����� N
���������, �� ������� ��� �� ��������). ������� ����� ����� ������ ������ � ����� �������
(��� ������ ������� ������ ������� nullptr). ����� ���������� ��������� �� �������
����������� ������, ������� ��� ��������.


��� ������ ������������ ��������� ������ ���� ������������ ����������� ����� ������� -
����������/��������/������ ���������.
�� ���� ������� ����������� ������� �������������� ����������. ���� ������ � ����������.



� �������� ������ ��������� ��������� ��������� (queue) ������������ �������� ���������
�����-������� ���� TNode. ���� Next ���������� �������� ������� ����� nullptr. �������
������� (��������, head) ��������� ������ ������� �������, ������ (��������, tail) � ��
��������� �������. ��� ����������� �������� ���������� � ����� ������� ������ ��������
������ �������, ������ ��������� �� ������ �������, ����� � ��������� �� �� �����. � ������
������ ������� ��������� �� �� ������ � ����� ���������� ������� nullptr. ��� � ��� �����,
��������� �������� ������� ��������� �������� ��� ���� Data.


*/


# include <windows.h>
# include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;
};
typedef Node* PNode;

void add(int data, PNode& Head, PNode& Tail)
{
	PNode Temp;
	if (Head == NULL)
	{
		Head = new Node;
		Tail = Head;
		Head->next = NULL;

	}
	else
	{
		Temp = new Node;
		Tail->next = Temp;
		Tail = Temp;
		Tail->next = NULL;
	}
	Tail->data = data;
}

void show1(PNode head)
{
	PNode temp = head;
	cout << endl << "�������� ����� ������� ��������: " << head << " " << head->data;

	cout << endl << "�������� �������: ";
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	PNode last = head;
	while (last->next != nullptr)
	{
		last = last->next;
	}

	cout << endl << "�������� ����� ���������� ��������: " << last << " " << last->data << endl;
}



void del(int m, PNode& Head)
{
	PNode temp;
	for (int i = 0; i < m; i++)
	{
		temp = Head;
		cout << temp->data << " " << temp->next << " ";
		Head = Head->next;
		delete temp;
		cout << endl;
	}
	cout << endl;
}

void show2(PNode head)
{
	PNode temp = nullptr;
	PNode temp2 = head;
	if (head == nullptr)
	{
		cout << "������� ����� �������� ��������� ��������� ������" << endl;
		int* ptr = nullptr;
		cout << "������ �������: " << ptr << endl;
		cout << "����� �������: " << ptr << endl;
	}
	else
	{
		cout << "����� ������ �������: " << temp2 << " " << temp2->data << endl;
		cout << "���������� �������� �������: ";
		while (head != nullptr)
		{
			temp = head;
			cout << temp->data << " ";
			head = head->next;
			//delete temp;
		}
		cout << endl << "����� ����� �������: " << temp << " " << temp->data << endl;
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int m, n;
	PNode p1 = nullptr;
	PNode p2 = nullptr;
	cout << "����� ����������!" << endl;
	cout << "����� ���� ����� ������:" << endl;
	cout << "���� ����� N (> 0) � ��������� P1 � P2 �� ������ � ����� �������� �������." << endl;
	cout << "������� �� ������� N ��������� ���������" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "��� ���������� ������ ���������� ��������� ������� � �� �������� ����� ������ " << endl;
	cout << "�� ������� ����� ������ ������ � ����� �������, �������� n �������� � ������� �� �����" << endl;
	cout << endl << endl << "----------------------------------------------------------------------------" << endl;
	cout << "������� ����� m - ���������� ��������� �������: ";
	cin >> m;
	cout << endl << "������� " << m << " �������� ��������� ������� ����� ������ ";
	for (int i = 0; i < m; i++)
	{
		int j;
		cin >> j;
		add(j, p1, p2);
	}
	cout << endl << endl << "������� ����� n(n>0) - ���������� ���������" << endl;
	cout << "�������, ������� ����� ������� �� �������: ";
	cin >> n;
	show1(p1);
	del(n, p1);
	show2(p1);
	return 0;
}
