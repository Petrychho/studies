#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");

	double C, F;

	cout << "������� ����������� � �: ";
	cin	 >> C;
	F = C * (9.0 / 5.0) + 32;
	cout << "������� � �: " << C << setw(2) << " C" <<  endl;
	cout << "������� � F: " << F << setw(2) << " F" <<  endl;
}