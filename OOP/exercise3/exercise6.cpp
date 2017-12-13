#include <iostream>

using namespace std;

enum etype { laborer, secretary, maneger, accountant, execute, researcher};

void main()
{
	setlocale (LC_ALL, "Russian");

	char ch;
	etype person;

	cout << "¬ведите первую букву должности: ";
	cin  >> ch;

	switch(ch)
	{
		case 'l' : person = laborer;	break;
		case 's' : person = secretary;	break;
		case 'm' : person = maneger;	break;
		case 'a' : person = accountant;	break;
		case 'e' : person = execute;	break;
		case 'r' : person = researcher;	break;
	}
	switch(person)
	{
		case 0: cout << "laborer" << endl;		break;
		case 1:	cout << "secretary" << endl;	break;
		case 2:	cout << "maneger" << endl;		break;
		case 3:	cout << "accountant" << endl;	break;
		case 4:	cout << "execute" << endl;		break;
		case 5:	cout << "researcher" << endl;	break;
	}
}