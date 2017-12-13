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

	cout	<< "¬ведите денежную сумму в долларах :";
	cin		>> dollar;
	var = dollar * funt;
	cout	<< setw(12) <<"Ёквивалент в фунтах	 : " << setw(7) << var << endl;
	var = dollar * frank;
	cout	<< setw(12) << "Ёквивалент в франках	 : " << setw(7) << var << endl;
	var = dollar * marka;
	cout	<< setw(12) << "Ёквивалент в марках	 : " << setw(7) << var << endl;
	var = dollar * iena;
	cout	<< setw(12) << "Ёквивалент в ийнах	 : " << setw(7) << var << endl;

}