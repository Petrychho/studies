#include <iostream>
#include <Windows.h>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance()
	{feet = 0; inches = 0;}
	Distance(int fe, float inc)
	{feet = fe; inches = inc;}
	void gedDist()
	{
		cout << "������� ����� �����: "; cin >> feet;
		cout << "������� ����� ������: "; cin >> inches;
		while (feet > 0)
		{
			feet--;
			inches += 12;
		}
	}
	void showDist()
	{
		while (inches >= 12)
		{
			feet++;
			inches -= 12;
		}
		cout << "����: " << feet << endl;
		cout << "�����: " << inches << endl;
	}
	void addDist(Distance d1)
	{
		inches += d1.inches;
	}
	void divDist(Distance d1, int divisor)
	{
		inches = d1.inches / divisor;
	}
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Distance mass[100];
	Distance summ(0, 0.0);

	char ch = 'y';
	int n = 0;

	while( ch != 'n' && ch != 'N')
	{
		mass[n++].gedDist();
		cout << "����� ��� ���� ������ (y/n)? "; cin >> ch;
	}

	for (int i = 0; i < n; i++)
	{
		summ.addDist(mass[i]);
	}
	
	summ.divDist(summ, n);

	cout << "������� �������������� ������: " << endl;
	summ.showDist();
}