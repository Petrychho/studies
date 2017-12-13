#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	float salary;
public:
	void setDate()
	{
		cout << "Введите имя: "; cin >> name;
		cout << "Введите зарплату: "; cin >> salary;
	}
	void printDate()
	{
		cout << "Работник: " << name << endl;
		cout << "Зарплата: " << salary << endl;
	}
	string gateName()
	{return name;}
	float gateSalary()
	{return salary;}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	void sasort(Person**, int);
	Person* pers[100];
	char ch = 'y';
	int n = 0;

	while (ch == 'y')
	{
		pers[n] = new Person;
		pers[n++] ->setDate();
		cout << "(y/n)?: "; cin >> ch;
	}
	
	for (int i = 0; i < n; i++)
		pers[i] ->printDate();
	cout << endl;

	sasort(pers, n);

	for (int i = 0; i < n; i++)
		pers[i] ->printDate();
	cout << endl;
}

void sasort(Person** pp, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if ( (*pp + i) ->gateSalary() > (*pp + j) ->gateSalary())
			{
				Person* tmp = *(pp + i);
				*(pp + i) = *(pp + j);
				*(pp + j) = tmp;
			}
		}
}
