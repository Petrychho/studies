#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double funt		= 1.487;
	double frank	= 0.172;
	double marka	= 0.584;
	double iena		= 0.00955;
	double dollar, var = 1;

	cout	<< "������� �������� ����� � �������� :";
	cin		>> dollar;
	var = dollar * funt;
	cout	<< setw(12) <<"���������� � ������	 : " << setw(7) << var << endl;
	var = dollar * frank;
	cout	<< setw(12) << "���������� � �������	 : " << setw(7) << var << endl;
	var = dollar * marka;
	cout	<< setw(12) << "���������� � ������	 : " << setw(7) << var << endl;
	var = dollar * iena;
	cout	<< setw(12) << "���������� � �����	 : " << setw(7) << var << endl;

}