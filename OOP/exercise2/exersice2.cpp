#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int var;
	double Cel = 0, Far = 0;
	cout << "��� �������������� �� ������� � ��������� ������� 1," << endl;
	cout << "��� �������������� �� ���������� � ������� ������� 2: ";
	cin >> var;

	if(var == 1)
	{
		cout << "������� �������� �� �������: ";
		cin >> Cel;
		cout << "�������� �� ����������: " <<  Cel * 9 / 5 + 32;
	}
	else
	{
		cout << "������� �������� �� ����������: ";
		cin >> Far;
		cout << "�������� �� �������: " <<  (Far - 32) * 5 / 9;
	}
}