#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	int people, place, var = 1;

	cout << "Введите кол-во людей: ";
	cin  >> people;
	cout << "Введите кол-во стульев: ";
	cin  >> place;

	for(int i = people; i > people - place; i--)
	{
		var *= i;
	}

	cout << "Кол-во возможных рассадок = " << var <<endl;
}