#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");
	
	char point = '.';
	int funt, shil, penny,k;
	double var1;

	cout << "������� ���-�� ������, ��������, ���� ����� ����� � ������� �.�.�" <<
		endl;
	cin >> funt >> point >> shil >> point >> penny;

	var1 = ((shil * 12) + penny) / 2.4; 

	cout << "���������� �����: J" << funt << point << floor(var1) <<
		endl; 
}