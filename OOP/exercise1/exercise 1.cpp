#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");

	float	gallons, cubic_foot = 7.481;

	cout	<< "������� ����� �������� ��� ������ �������������� ������ � ���������� �����:";
	cin		>> gallons;
	cout	<< "����� � ���������� ����� = " <<  gallons / cubic_foot << endl;
}