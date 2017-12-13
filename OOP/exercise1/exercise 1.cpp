#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");

	float	gallons, cubic_foot = 7.481;

	cout	<< "Введите число галлонов для вывода эквивалентного обьема в кубических футах:";
	cin		>> gallons;
	cout	<< "Объем в кубических футах = " <<  gallons / cubic_foot << endl;
}