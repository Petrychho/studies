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
	Pstring() : String()
	{}
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

class Pstring2: public Pstring
{
public:
	Pstring2() : Pstring()
	{}
	Pstring2(char s[]) : Pstring(s)
	{}
	void Left( char s[], int n)
	{
		/*for (int i = 0; i < strlen(str); i++)
			str[i] */
		if( n < SZ-1)
		{
			for (int i = 0, j = 0; i < n; i++)
				str[j++] = s[i];
			str[n] = '\0';
		}
		else cout << "Error Left" << endl;
	}
	void Mid( char s[], int m, int n)
	{
		if( n < SZ-1 && m >= 0)
		{
			for (int i = m, int j = 0; i < n; i++)
				str[j++] = s[i];
			str[n] = '\0';
		}
		else cout << "Error Mid" << endl;
	}
	void Right( char s[], int n)
	{
		if( n >= 0)
		{
			for (int i = n, int j = 0; i < SZ - 1; i++)
				str[j++] = s[i];
			str[SZ-1 - n] = '\0';
		}
		else cout << "Error Right" << endl;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Pstring2 A ("0123456789876543210123456789876543210");
	Pstring2 B;
	A.ShowString();

	B.Left(A, 10);
	B.ShowString();
	B.Mid(A, 9, 17);
	B.ShowString();
	B.Right(A, 16);
	B.ShowString();
}