#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	int people, place, var = 1;

	cout << "������� ���-�� �����: ";
	cin  >> people;
	cout << "������� ���-�� �������: ";
	cin  >> place;

	for(int i = people; i > people - place; i--)
	{
		var *= i;
	}

	cout << "���-�� ��������� �������� = " << var <<endl;
}