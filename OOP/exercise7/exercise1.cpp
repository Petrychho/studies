#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{}
	Distance( int f, float inc) : feet(f), inches(inc)
	{};
	void PutDist()
	{
		cout << "Ââåäèòå ôóòû: "; cin >> feet;
		cout << "Ââåäèòå äþéìû: "; cin >> inches;
	}
	void GetDist()
	{
		cout << "Ôóòû: " << feet << endl;
		cout << "Äþéìû: " << inches << endl;
	}
	Distance operator - (Distance b)
	{
		feet -= b.feet;
		inches -= b.inches;
		return Distance (feet, inches);
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Distance a1, a2, a3;
	a1.PutDist();
	a2.PutDist();

	a3 = a1 - a2;

	a3.GetDist();
}