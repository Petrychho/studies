#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL,"Russian");

	double deposit, time, percent;

	cout << "������� ��������� �����: ";
	cin  >> deposit;
	cout << "������� ����� ���: ";
	cin  >> time;
	cout << "������� ���������� ������: ";
	cin  >> percent;

	for (int i = 0; i < time; i++)
	{
		deposit = deposit + (deposit * (percent / 100));
		cout << deposit << endl;
	}

	cout << "����� " << time << " �� �������� " << deposit << endl;
}