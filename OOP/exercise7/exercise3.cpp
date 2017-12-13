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
	Time( int h, int m, int s)
	{ hours = h; minutes = m; seconds = s;}
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
	Time operator + (Time t)
	{
		seconds += t.seconds;
		minutes += t.minutes;
		if (seconds > 59 ) 
		{
			minutes++;
			seconds -= 60;
		}
		hours +=t.hours;
		if (minutes > 59)
		{
			hours++;
			minutes -= 60;
		}
		return Time(hours, minutes, seconds);
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Time t1, t2;

	t1.PutTime();
	t2.PutTime();

	t2 = t1 + t2;

	t2.GetTime();
}