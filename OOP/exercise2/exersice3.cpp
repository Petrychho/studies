#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


void main()
{
	setlocale (LC_ALL, "Russian");

	char ch;
	unsigned long total = 0;

	cout << "������� �����:  ";

	while ((ch = getche()) != '\r')
	{
		total = total * 10 + ch - '0';
	}


	cout << '\n' << "�� ����� �����: " << total << endl;

}