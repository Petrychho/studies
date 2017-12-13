#include <iostream>

using namespace std;

class Fraction
{
private:
	int dividend;
	int devider;
public:
	Fraction()
	{dividend = 0; devider = 0;}
	void GetFraction()
	{
		cout << "¬ведите делимое: "; cin >> dividend;
		cout << "¬ведите делитель: "; cin >> devider;
	}
	void ShowFraction()
	{
		cout << dividend << " / " << devider << endl;
	}
	void DivFraction(Fraction a, int count)
	{
		dividend = a.dividend;
		devider = a.devider * count;
	}
	void AddFraction(Fraction a, Fraction b)
	{
		if (dividend == 0)
		{
			dividend = b.dividend;
			devider = b.devider;
		}
		else
		{
			if (a.devider != b.devider)
			{
				dividend = a.dividend * b.devider + b.dividend * a.devider;
				devider = a.devider * b.devider;
			}
			else
			{
				dividend = a.dividend + b.dividend;
				devider = a.devider;
			}
		}
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Fraction mass[10];
	Fraction a;
	int n = 0;
	char ch = 'y';

	while (ch == 'y')
	{
		mass[n++].GetFraction();
		cout << "≈ще? (y/n) "; cin >> ch;
	}

	for (int i = 0; i < n; i++)
	{
		a.AddFraction(a, mass[i]);
	}

	a.DivFraction(a, n);
	a.ShowFraction();

}