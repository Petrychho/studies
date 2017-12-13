#include <iostream>

using namespace std;



void reversit( char mass[])
{
	int MAX = strlen(mass);
	for( int i = 0; i < MAX / 2; i++)
	{
		char ch = mass[i];
		mass[i] = mass[MAX - i - 1];
		mass[MAX - i - 1] = ch;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	const int MAX = 80;
	char mass[MAX];

	cout << "Введите строку: ";
	cin.get(mass,MAX);
	reversit(mass);
	cout << "Перевернутая строка: ";
	cout << mass << endl;
}