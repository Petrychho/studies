#include <iomanip>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");

	int number, count = 1, var;
	cout << "¬ведите число: ";
	cin	 >> number;

	cout << setfill('-') << setw(171) << "-" << setfill(' ') << endl;

	for(int i = 0; i < 20; i++)
	{
		cout << "| ";
		for(int j = 0; j < 10; j++, count++)
		{
			cout << number
				 << " x "
				 << setw(3)
				 << count
				 << " = "
				 << setw(4)
				 << (var = number * count);
			cout << " | ";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(171) << "-" << setfill(' ') << endl;
}

