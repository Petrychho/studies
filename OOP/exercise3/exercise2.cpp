#include <iostream>

using namespace std;

struct point
{
	int x;
	int y;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	point p1, p2, p3;

	cout << "������� ���������� ����� �1: ";
	cin  >> p1.x >> p1.y;
	cout << "������� ���������� ����� �2: ";
	cin  >> p2.x >> p2.y;

	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y; 
	cout << "����� ��������� �1+�2 = " << p3.x << " " << p3.y << endl; 
}

