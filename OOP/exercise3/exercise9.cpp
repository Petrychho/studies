#include <iostream>

using namespace std;

struct time
{
	int seconds;
	int minutes;
	int hours;
};

void main()
{
	setlocale (LC_ALL, "Russian");
	
	time Time;
	char ch = '.';
	long totalseconds;
	
	cout << "������� ����� � ������� ����.������.�������: ";
	cin >> Time.hours >> ch >> Time.minutes >> ch >> Time.seconds;

	totalseconds = Time.hours * 3600 + Time.minutes * 60 + Time.seconds;
	cout << "����� ���-�� ������: " << totalseconds << endl;
}