#include <iostream>

using namespace std;

struct telephon
{
	int city;
	int tel;
	int ab;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	telephon my = {921, 882, 1350}, yours;

	cout << "������� ��� ������, ����� ������� � ����� ��������: \n";
	cin	 >> yours.city >> yours.tel >> yours.ab;

	cout << "��� �����: (" << my.city << ") " << my.tel << "-" << my.ab << endl;
	cout << "��� �����: (" << yours.city << ") " << yours.tel << "-" << yours.ab << endl;
}