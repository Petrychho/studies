#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>

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
	void LD2Str(long double ld)
	{
		string str, str1;
		int i = 0;

		std::stringstream sstream;
		sstream << fixed << setprecision(0) << ld;
		sstream >> str;


		str1.operator+=('$');
		for (; i < static_cast<int>((str.size() - 2) / 3) - 1; i++)
		{
			str1.operator+=(str[i]);
		}
		str1.operator+=(',');


		for (int j = 0; i < str.size(); i++, j++)
		{
			
			if ((j % 3 == 0 && j != 0) && (i != str.size() - 2 && i != str.size() - 1)) str1.operator+=(',');
				 else if (i == str.size() - 2) str1.operator+=('.');
				 
			str1.operator+=(str[i]);
		}

		cout << str1 << endl;
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
	s = money.mstold(str);
	
	cout << fixed << setprecision(2) << s / 100 << endl;

	money.LD2Str(s);
}