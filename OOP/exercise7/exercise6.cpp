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
		cout << "¬ведите часы: "; cin >> hours;
		cout << "¬ведите минуты: "; cin >> minutes;
		cout << "¬ведите секунды: "; cin >> seconds;
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
	Time operator - (Time s)
	{
		Time tmp;
		s.seconds += s.hours * 3600 + s.minutes * 60;
		tmp.seconds += hours * 3600 + minutes * 60 + seconds;
		tmp.seconds -= s.seconds;
		tmp.hours = (static_cast<int>(tmp.seconds / 3600));
		tmp.seconds -= tmp.hours * 3600;
		tmp.minutes = (static_cast<int>(tmp.seconds / 60));
		tmp.seconds -= tmp.minutes * 60;
		
		return tmp;

	}
	Time operator * (float s)
	{
		Time tmp;

		tmp.seconds += hours * 3600 + minutes * 60 + seconds;
		tmp.seconds *= s;
		tmp.hours = (static_cast<int>(tmp.seconds / 3600));
		tmp.seconds -= tmp.hours * 3600;
		tmp.minutes = (static_cast<int>(tmp.seconds / 60));
		tmp.seconds -= tmp.minutes * 60;

		return tmp;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Time a, b, c;

	a.PutTime();
	b.PutTime();

	c = a - b;
	c.GetTime();

	c = c * 2;
	c.GetTime();
}