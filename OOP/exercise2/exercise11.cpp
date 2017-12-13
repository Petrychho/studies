#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	char op, point = '.';
	int funt, shil, penny, rez;
	int funt_, shil_ = 0, penny_ = 0;
	double var1;

	cout << "¬ведите первую сумму и операнд: ";
	cin  >> funt >> point >> shil >> point >> penny >> op;
	cout << "¬ведите вторую сумму или число: ";
	if (op == '+' || op == '-')
		cin >> funt_ >> point >> shil_ >> point >> penny_;
	else cin >> funt_;

	penny	+= (funt * 20	+ shil)	* 12;
	penny_	+= (funt_ * 20	+ shil_)* 12;	
	
	switch(op)
	{
		case '/' : static_cast<int>(var1 = penny / funt_);	break;
		case '*' : var1 = penny * funt_;					break;
		case '-' : var1 = penny - penny_;					break;
		case '+' : var1 = penny + penny_;					break;
	}	
	funt =	static_cast<int>(var1/20/12);
	shil =	static_cast<int>((var1 - funt*240)/12);
	penny = var1 - funt * 240 - shil * 12;
	cout << "–езультат J"	<< funt		<< point
							<< shil		<< point
							<< penny	<< endl;
}