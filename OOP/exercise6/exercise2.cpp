#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class employee
{
private:
	long nomber;
	string name;
	
public:
	employee() : nomber(0) {};

	void putdate()
	{
		cout << "������� ���: "; cin >> name;
		cout << "������� �����: "; cin >> nomber;
	}
	void getedate()
	{
		cout << "��� �����������: " << name << endl;
		cout << "�����: " << nomber << endl;
	}
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	employee mass[100];
	int n = 0;
	char ch = 'y';

	while (ch != 'n' && ch != 'N')
	{
		mass[n++].putdate();
		cout << "������ ������ ��� ���������� (Y/N)?  "; cin >> ch;
	}

	for (int i = 0; i < n; i++)
	{
		mass[i].getedate();
	}
}