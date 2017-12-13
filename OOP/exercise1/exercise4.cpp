#include <iostream>
#include <ctype.h>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");
	char var;
	
	cout	<< "¬ведите любую букву" << endl;
	cin		>> var;
	cout	<< islower(var)			 << endl;
	
}