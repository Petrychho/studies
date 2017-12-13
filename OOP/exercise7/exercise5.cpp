#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(): hours(0), minutes(0), seconds(0)
	{}
	Time(int h, int m, int s): hours(h), minutes(m), seconds(s)
	{}
	void PutTime()
	{
		cout << "������� ����: "; cin >> hours;
		cout << "������� ������: "; cin >> minutes;
		cout << "������� �������: "; cin >> seconds;
	}
	void GetTime()
	{
		 cout << hours <<":";
		 cout << minutes <<":";
		 cout << seconds <<endl;
	}
	Time operator ++ ()
	{
		return Time(hours, minutes, ++seconds);
	}
	Time operator ++ (int)
	{
		return Time(hours, minutes, seconds++);
	}
	Time operator -- ()
	{
		return Time(hours, minutes, --seconds);
	}
	Time operator -- (int)
	{
		return Time(hours, minutes, seconds--);
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Time a, b;

	a.PutTime();
	b.PutTime();

	++a;
	b = ++a;

	a.GetTime();
	b.GetTime();

	a++;
	b = a++;

	a.GetTime();
	b.GetTime();

	--a;
	b = --a;

	a.GetTime();
	b.GetTime();

	a--;
	b = a--;

	a.GetTime();
	b.GetTime();
}