#include <iostream>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Date D;
	char ch = '/';

	cout << "Введите дату в формате дд/мм/гггг: ";
	cin  >> D.day >> ch >> D.month >> ch >> D.year;

	cout << "Дата: " << D.day << ch << D.month << ch << D.year << endl;
}