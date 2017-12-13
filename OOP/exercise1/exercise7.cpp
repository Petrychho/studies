#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");

	double C, F;

	cout << "Введите температуру в С: ";
	cin	 >> C;
	F = C * (9.0 / 5.0) + 32;
	cout << "Градусы в С: " << C << setw(2) << " C" <<  endl;
	cout << "Градусы в F: " << F << setw(2) << " F" <<  endl;
}