#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	double diposit, percent, total;
	int time = 0;
	cout << "Введите начальный вклад: ";
	cin  >> diposit;
	cout << "Введите процентную ставку: ";
	cin  >> percent;
	cout << "Введите сумму которую желаете получить: ";
	cin  >> total;

	while(diposit <= total)
	{
		time++;
		diposit += diposit * (percent / 100); 
	}

	cout << "Потребуется " <<  time << " лет" << endl;
}