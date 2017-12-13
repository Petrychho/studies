#include <iostream>

using namespace std;

struct time
{
	int seconds;
	int minutes;
	int hours;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	time mass[3];
	char ch = '.';

	for (int i = 0; i < 2; i++)
	{
		cout << "Введите время: ";
		cin >> mass[i].hours >> ch >> mass[i].minutes >> ch >> mass[i].seconds;
		mass[i].seconds += mass[i].hours * 3600 + mass[i].minutes * 60;
	}

	mass[2].seconds = mass[1].seconds + mass[0].seconds;
	mass[2].hours = mass[2].seconds / 3600;
	mass[2].seconds -= mass[2].hours * 3600;
	mass[2].minutes = mass[2].seconds / 60;
	mass[2].seconds -= mass[2].minutes * 60;

	cout << "\nОбщее время равно: " << mass[2].hours << ch << mass[2].minutes << ch << mass[2].seconds << endl; 
}