#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Москва" << setfill('.') << setw(12) << "8425785" << endl;
	cout << "Москва" << setw(12) << setfill('.') << "8425785" << endl;
}