#include <iostream>

using namespace std;

struct fraction
{
	int num;
	int denom;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	fraction mass[2];
	char ch = ' / ';
	int i = 0, var1, var2;

	for (int i = 0; i < 2; i++)
	{
		cout << "¬ведите дробь в формате а/b: ";
		cin  >> mass[i].num >> ch >> mass[i].denom;
	}

	cout << mass[i].num << ch << mass[i].denom << " + " << mass[i+1].num << ch << mass[i+1].denom << " = ";
	var1 = mass[i].num * mass[i+1].denom + mass[i+1].num * mass[i].denom;
	var2 = mass[i].denom * mass[i+1].denom;
	cout << var1 << ch << var2 << endl;
}