#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	float mass[100];
	int cnt = 0;
	int ch = 10;

	while (cnt < ch)
	{
		cout << "Введите число: "; cin >> *(mass + cnt++);
		//cout << "Продолжить? (y/n): "; cin >> ch;
	}

	float asum = 0.0;

	for (int i = 0; i < cnt; i++)
		asum += *(mass + i);

	cout << "Средне арифмитическое = " << asum / cnt << endl;
}