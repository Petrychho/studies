#include <iostream>
#include <cstring>

using namespace std;

class String 
{
protected:
	enum {SZ = 80};
	char str[SZ];
public:
	String()
	{str[0] = '\0';}
	void PutString()
	{
		cout << "Введите строку: "; cin >> str;
	}
	void ShowString()
	{
		cout << "Ведена строка: " << str << endl;
	}
	operator char*()
	{
		return str;
	}
};

class Pstring : public String
{
public:
	Pstring(char s[])
	{
		if( strlen(s) > SZ-1)
		{
			for( int i = 0; i < SZ - 1; i++)
				str[i] = s[i];
			str[SZ - 1] = '\0';
		}
		else 
			strcpy(str,s);
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Pstring A ("khlkhsdlfkhdsl ldskfldshflds dlskfhsd");
	A.ShowString();
}