#include <iostream>

using namespace std;

struct sterling 
{
	int pounds;
	int shillings;
	int pence;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	sterling old;
	char ch = '.';
	double pounds;

	cout << "Введите сумму в новых десятичных футах (p.pen) J : ";
	cin >> pounds;

	old.pounds		= floor(pounds);
	old.shillings	= (pounds - old.pounds) * 2.4 * 100 / 12;
	old.pence		= (pounds - old.pounds) * 2.4 * 100 - old.shillings * 12;

	cout << "В старой системе J: " << old.pounds << ch << static_cast<int>(old.shillings) << ch << static_cast<int>(old.pence) << endl;
}