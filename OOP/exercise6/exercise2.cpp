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
		cout << "Введите имя: "; cin >> name;
		cout << "Введите номер: "; cin >> nomber;
	}
	void getedate()
	{
		cout << "Имя содтрудника: " << name << endl;
		cout << "Номер: " << nomber << endl;
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
		cout << "Хотите ввести еще сотрудника (Y/N)?  "; cin >> ch;
	}

	for (int i = 0; i < n; i++)
	{
		mass[i].getedate();
	}
}