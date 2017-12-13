#include<iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	char div = '/', op, flag = 'y';
	float a,b,c,d;

	while(flag == 'y')
	{
		cout	<< "Введите первый операнд, действие, второй операнд (a/b + c/d): " << endl;
		cin		>> a >> div >> b >> op >> c >> div >> d;
		cout	<< "Результат: ";
		switch(op)
		{
			 case '+' : cout << (a * d + b * c) << div << (b * d) << endl;	 break;
			 case '-' : cout << (a * d - b * c) << div << (b * d) << endl;	 break;
			 case '*' : cout << (a * c)			<< div << (b * d) << endl;	 break;
			 case '/' : cout << (a * d)			<< div << (b * c) << endl;	 break;
		}
		cout << "Выполнить еще одно дйствие?(y/n): ";
		cin  >> flag;
	}
}