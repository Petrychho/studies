#include <iostream>

using namespace std;

class Fraction
{
private:
	int dividend;
	int devider;
public:
	Fraction(): dividend(0), devider(0)
	{}
	Fraction(int div, int dev): dividend(div), devider(dev)
	{}
	void PutFraction()
	{
		cout << "¬ведите делимое: "; cin >> dividend;
		cout << "¬ведите делитель: "; cin >> devider;
	}
	void GetFraction()
	{
		cout << dividend << " / " << devider << endl;
	}
	Fraction operator + (Fraction f)
	{
		Fraction tmp;

		if (devider != f.devider)
		{
			tmp.dividend = dividend * f.devider + f.dividend * devider;
			tmp.devider = devider * f.devider;
		}
		else
		{
			tmp.dividend = dividend + f.dividend;
			tmp.devider = devider;
		}
		return tmp;
	}
	Fraction operator - (Fraction f)
	{
		Fraction tmp;

		if (devider != f.devider)
		{
			tmp.dividend = dividend * f.devider - f.dividend * devider;
			tmp.devider = devider * f.devider;
		}
		else
		{
			tmp.dividend = dividend - f.dividend;
			tmp.devider = devider;
		}
		return tmp;
	}
	Fraction operator * (Fraction f)
	{
		Fraction tmp;

		tmp.dividend = dividend * f.dividend;
		tmp.devider = devider * f.devider;

		return tmp;
	}
	Fraction operator / (Fraction f)
	{
		Fraction tmp;

		tmp.dividend = dividend * f.devider;
		tmp.devider = devider * f.dividend;

		return tmp;
	}
	bool operator == (Fraction f)
	{
		Fraction tmp;

		if (devider != f.devider)
		{
			tmp.dividend = dividend * f.devider;
			f.dividend  *= devider;
			tmp.devider = devider * f.devider;
		}
		
		return (tmp.dividend == f.dividend) ? true : false;
	}
	bool operator != (Fraction f)
	{
		Fraction tmp;

		if (devider != f.devider)
		{
			tmp.dividend = dividend * f.devider;
			f.dividend  *= devider;
			tmp.devider = devider * f.devider;
		}
		
		return (tmp.dividend != f.dividend) ? true : false;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Fraction a, b, c;

	a.PutFraction();
	b.PutFraction();

	c = a + b;
	c.GetFraction();

	c = a - b;
	c.GetFraction();

	c = a * b;
	c.GetFraction();

	c = a / b;
	c.GetFraction();

	if (a == b) cout << "true" << endl; 
	else cout << "false" << endl;
	if (a != b) cout << "true" << endl;
	else cout << "false" << endl;
}