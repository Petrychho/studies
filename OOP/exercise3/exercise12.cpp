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
	char div = '/', op, flag = 'y';
	
	cout	<< "¬ведите первый операнд, действие, второй операнд (a/b + c/d): " << endl;
	cin		>> mass[0].num >> div >> mass[0].denom >> op >> mass[1].num >> div >> mass[1].denom;
	cout	<< "–езультат: ";
	switch(op)
	{
			case '+' : cout << (mass[0].num * mass[1].denom + mass[0].denom * mass[1].num) << div << (mass[0].denom * mass[1].denom) << endl;	 break;
			case '-' : cout << (mass[0].num * mass[1].denom - mass[0].denom * mass[1].num) << div << (mass[0].denom * mass[1].denom) << endl;	 break;
			case '*' : cout << (mass[0].num * mass[1].num)	<< div << (mass[0].denom * mass[1].denom) << endl;	 break;
			case '/' : cout << (mass[0].num * mass[1].denom)<< div << (mass[0].denom * mass[1].num) << endl;	 break;
	}
}