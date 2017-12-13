#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int var;
	double Cel = 0, Far = 0;
	cout << "Для преобразования из Цельсия в Фарингейт нажмите 1," << endl;
	cout << "Для преобразования из Фаренгейта в Цельсия нажмите 2: ";
	cin >> var;

	if(var == 1)
	{
		cout << "Введите значения по Цельсию: ";
		cin >> Cel;
		cout << "Значение по Фарингейту: " <<  Cel * 9 / 5 + 32;
	}
	else
	{
		cout << "Введите значения по Фарингейту: ";
		cin >> Far;
		cout << "Значение по Цельсию: " <<  (Far - 32) * 5 / 9;
	}
}