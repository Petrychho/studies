#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL,"Russian");

	double deposit, time, percent;

	cout << "¬ведите начальный вклад: ";
	cin  >> deposit;
	cout << "¬ведите число лет: ";
	cin  >> time;
	cout << "¬ведите процентную ставку: ";
	cin  >> percent;

	for (int i = 0; i < time; i++)
	{
		deposit = deposit + (deposit * (percent / 100));
		cout << deposit << endl;
	}

	cout << "„ерез " << time << " вы получите " << deposit << endl;
}