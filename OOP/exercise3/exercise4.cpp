#include <iostream>

using namespace std;

struct employee 
{
	int ID;
	float Allow;
};

void main()
{
	setlocale (LC_ALL, "Russian");

	employee mass[3];
	int id = 1, i = 0;

	for(int i = 0; i < 3; i++)
	{
		cout << "������� ������� ��� ���������� � ID �" << id << " :";
		mass[i].ID = id++;
		cin  >> mass[i].Allow;
	}

	for (int i = 0; i < 3; i++)
		cout << "��������� ID �" << mass[i].ID << " ��� �������: " << mass[i].Allow << " $" << endl;
}