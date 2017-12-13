#include <iostream>

using namespace std;

enum etype { laborer, secretary, maneger, accountant, execute, researcher};

struct date
{
	int day;
	int month;
	int year;
};

struct employee 
{	
	int ID;
	float Allow;
	etype person;
	date Date;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	employee mass[3];
	char ch, p = '.';

	for (int i = 0; i < 3; i++)
	{
		mass[i].ID = i + 1;
		cout << "������� ��������� ���������� � ID � (���������� ������ �����) "<< mass[i].ID << ": ";
		cin >> ch;
		switch (ch)
		{
			case 'l' : mass[i].person = laborer;	break; 
			case 's' : mass[i].person = secretary;	break; 
			case 'm' : mass[i].person = maneger;	break; 
			case 'a' : mass[i].person = accountant;	break; 
			case 'e' : mass[i].person = execute;	break; 
			case 'r' : mass[i].person = researcher;	break;
		}
		cout << "������� ���� ��� ������ �� ������ � ������� ��.��.��: ";
		cin >> mass[i].Date.day >> p >> mass[i].Date.month >> p >> mass[i].Date.year;
		cout << "������� ��� ��: ";
		cin >> mass[i].Allow;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "��������� ID � " << mass[i].ID << "\n���������: "; 
		switch(mass[i].person)
		{
			case 0: cout << "laborer" << endl;		break;
			case 1:	cout << "secretary" << endl;	break;
			case 2:	cout << "maneger" << endl;		break;
			case 3:	cout << "accountant" << endl;	break;
			case 4:	cout << "execute" << endl;		break;
			case 5:	cout << "researcher" << endl;	break;
		}
		cout << "���� ������ �� ������: " << mass[i].Date.day << "." << mass[i].Date.month << "." << mass[i].Date.year << endl;
		cout << "�� :" << mass[i].Allow << endl << endl;
	}
}