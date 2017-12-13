#include <iostream>

using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date() : day(0), month(0), year(0) {};
		void getDate(int d, int m, int y)
		{
			day = d;
			month = m;
			year = y;
		}
		void showDate() const
		{
			cout << day << "/" << month << "/" << year
				<< endl;
		}
};

void main ()
{
	Date A;
	int d,m,y;
	char ch = '/';
	cin >> d >> ch >> m >> ch >> y;
	A.getDate(d,m,y);
	A.showDate();
}