#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

class Money
{
private:
	long double money;
	string _money;
public:
	Money(): money(0) {};
	long double mstold(string strin)
	{
		string str;
		for (int i = 0; i < strin.size(); i++)
		{
			if(strin[i] != '$' && strin[i] != ',' && strin[i] != '.') 
			{
				str.operator+=(strin[i]);
			}
		}
		return stold(str);
	}
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Money money;
	string str;
	long double s;

	cin >> str;
	cout << str << endl;
	s = money.mstold(str) / 100;
	
	cout << fixed << s << endl;
}