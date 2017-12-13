#include <iostream>
#include <string>

using namespace std;

class String
{
private:
	char str[90];
public:
	String(){strcpy(str,"");}
	String(char s[]){strcpy(str,s);}
	void PutString()
	{
		cout << "¬ведите строку: "; cin >> str;
	}
	void GetString()
	{
		cout << str;
	}
	String operator += (String s)
	{
		strcat(str, " ");
		return strcat(str, s.str);
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	String str1, str2;

	str1.PutString();
	str2.PutString();

	str2 += str1;

	str2.GetString();
}