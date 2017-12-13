#include <iostream>

using namespace std;
const int DAYS = 7;

void main()
{
	setlocale (LC_ALL, "Russian");
	char* mass[DAYS] = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

	void BSort (char**, int n);

	BSort(mass, DAYS);
		
	for (int i = 0; i < DAYS; i++)
		cout << mass[i] << endl;
}

void BSort (char** mass, int n)
{
	void Order (char**, char**);

	for (int i = 0; i < DAYS; i++)
		for (int j = i + 1; j < DAYS; j++)
				Order ((mass + i), (mass + j));	
}

void Order (char** a, char** b)
{
	if (**a >= **b)
	{
		char* tmp = *a;
		*a = *b;
		*b = tmp;
	}
}