#include<iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	char div = '/', op, flag = 'y';
	float a,b,c,d;

	while(flag == 'y')
	{
		cout	<< "������� ������ �������, ��������, ������ ������� (a/b + c/d): " << endl;
		cin		>> a >> div >> b >> op >> c >> div >> d;
		cout	<< "���������: ";
		switch(op)
		{
			 case '+' : cout << (a * d + b * c) << div << (b * d) << endl;	 break;
			 case '-' : cout << (a * d - b * c) << div << (b * d) << endl;	 break;
			 case '*' : cout << (a * c)			<< div << (b * d) << endl;	 break;
			 case '/' : cout << (a * d)			<< div << (b * c) << endl;	 break;
		}
		cout << "��������� ��� ���� �������?(y/n): ";
		cin  >> flag;
	}
}