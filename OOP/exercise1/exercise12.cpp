#include <iostream>
#include <iomanip>

using namespace std; 

void main()
{
	setlocale(LC_ALL, "Russian");

	char point = '.';
	int funt, shil, penny,k;
	float var1, var2;

	cout << "������� ����� ���������� ������: ";
	cin >> funt >> point >> penny;

	var1 = penny * 2.4;
	var2 = var1 / 12;
	shil = static_cast<int>(var2);
	penny =static_cast<int>(var1) - shil * 12;

	cout << "������������� ����� � ����� ����� ������ :" << funt << point << shil << point << penny << 
		endl;

}