#include <iostream>

using namespace std; 

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:	
		Time() : hours(0), minutes(0), seconds(0)
		{};
		Time(int a, int b, int c) : hours(a), minutes(b), seconds(c)
		{};
		void addTime(Time a, Time b) 
		{
			hours = a.hours + b.hours;
			minutes = a.minutes + b.minutes;
			seconds = a.seconds + b.seconds;

			if (a.seconds + b.seconds > 60)
			{
				minutes++;
				seconds -= 60;
			}
			if (a.minutes + b.minutes > 60)
			{
				hours++;
				minutes -= 60;
			}
		};
		void printTime()const
		{
			cout << hours << ":"
				<< minutes << ":"
				<< seconds 
				<< endl;
		};
};

void main()
{
	const Time A(11, 0, 6);
	const Time B(9, 59, 55);
	Time C;

	C.addTime(A, B);
	C.printTime();
}