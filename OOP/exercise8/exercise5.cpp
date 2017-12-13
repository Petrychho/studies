#include <iostream>

using namespace std;

class Employee
{
private:
	char name[80];
	unsigned long number;
public:
	void PutEmployee()
	{
		cout << "������� ��� ����������: "; cin >> name;
		cout << "������� ����� ����������: "; cin >> number;
	}
	void ShowEmployee()
	{
		cout << "���������: " << name << endl;
		cout << "����� ���������� " << number << endl;
	}
};

class Compensation: private Employee
{
private:
	double compensation;
	enum Period {hourly, weekly, monthly};
	Period period;
public:
	void PutCompensation()
	{
		char ch;
		Employee::PutEmployee();
		cout << "������� �������� ������: "; cin >> compensation;
		cout << "������� ������ ������ hourly, weekly, monthly (h/w/m)"; cin >> ch;
		switch(ch)
		{
			case 'h' : period = hourly; break;
			case 'w' : period = weekly; break;
			case 'm' : period = monthly; break;
		}
	}
	void ShowCompensation()
	{
		Employee::ShowEmployee();
		cout << "��������� ������: " << compensation << endl;
		cout << "������ ������: ";
		switch(period)
		{
			case 0: cout << "hourly" << endl; break;
			case 1: cout << "weekly" << endl; break;
			case 2: cout << "monthly" << endl; break;
		}
	}
};

class Maneger : private Compensation
{
private:
	char titile[80];
	double dues;
public:
	void PutMeneger()
	{
		Compensation::PutCompensation();
		cout << "���������: "; cin >> titile;
		cout << "����� �������: "; cin >> dues;
	}
	void ShowManeger()
	{
		Compensation::ShowCompensation();
		cout << "���������: " << titile << endl;
		cout << "����� �������: " << dues << endl;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Maneger A;

	A.PutMeneger();
	A.ShowManeger();
}