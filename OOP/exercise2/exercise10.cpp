#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	double diposit, percent, total;
	int time = 0;
	cout << "������� ��������� �����: ";
	cin  >> diposit;
	cout << "������� ���������� ������: ";
	cin  >> percent;
	cout << "������� ����� ������� ������� ��������: ";
	cin  >> total;

	while(diposit <= total)
	{
		time++;
		diposit += diposit * (percent / 100); 
	}

	cout << "����������� " <<  time << " ���" << endl;
}