#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	char point = '.', flag = 'y';
	int funt, shil, penny, rez;
	int funt_, shil_, penny_;
	double var1;


	while (flag == 'y')
	{
		cout << "Введите кол-во фунтов, шилингов, пени через точку в формате ф.ш.п J";
		cin >> funt >> point >> shil >> point >> penny;
		cout << "Введите кол-во фунтов, шилингов, пени через точку в формате ф.ш.п J";
		cin >> funt_ >> point >> shil_ >> point >> penny_;

		var1 = static_cast<int>((penny + penny_) / 12);
		shil += var1 + shil_;
		penny = (penny + penny_) - var1 * 12;
		var1 = static_cast<int>((shil + shil_) / 20);
		funt += funt_ + var1;
		shil = shil  - var1 * 20;

		cout << "Всего: J" << funt << point << shil << point << penny << endl;

		cout << "Повторить? (y/n)";
		cin  >> flag;
	}
}