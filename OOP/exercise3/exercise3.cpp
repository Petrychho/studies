#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Volume Room;
	char ch = '-';
	float feet, inches;

	cout << "������� � ���������� ������� ������ �������: ";
	cin  >> Room.length.feet >> ch >> Room.length.inches;
	cout << "������� ������ �������: ";
	cin  >> Room.width.feet >> ch >> Room.width.inches;
	cout << "������� ������ �������: ";
	cin  >> Room.height.feet >> ch >> Room.height.inches;

	feet	= Room.length.feet * Room.width.feet * Room.height.feet;
	inches  = Room.length.inches * Room.width.inches * Room.height.inches;

	while(inches >= 12)
	{
		inches -=12;
		feet++;
	}

	cout << "����� ������� �����: " << feet << ch << inches << endl;
}