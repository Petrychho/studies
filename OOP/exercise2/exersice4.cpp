#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	double r, var1, var2;
	char op;

	cout << "������� ������ �������, ��������, ������ ������� ";
	cin >> var1 >> op >> var2;

	switch(op)
	{
		case '/' : r = var1 / var2; break;
		case '*' : r = var1 * var2;	break;
		case '-' : r = var1 - var2;	break;
		case '+' : r = var1 + var2;	break;
	}

	cout << "��������� ��������: " << r << endl;
}