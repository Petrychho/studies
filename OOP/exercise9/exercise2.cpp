#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

class String
{
private:
	char* str;
public:
	String (char* s)
	{
		str = new char [strlen(s) + 1];
		strcpy(str, s);
	}
	~String()
	{
		cout << "Удаляем строку" << endl;
		delete [] str;
	}
	void Display()
	{
		cout << str << endl;
	}
	void Upit()
	{
		for (int i = 0; i < strlen(str); i++)
			*(str + i) = toupper(*(str + i));
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	String s = "Тише едешь - дальше будешь.";
	cout << "s = ";
	s.Display();

	s.Upit();
	cout << "s = ";
	s.Display();
}