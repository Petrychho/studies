#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	cout << setiosflags(ios::left) << setw(10) << "�������" 
		 << setw(10) << "���" 
		 << setw(15) << "�����" 
		 << setw(15) << "�����"
		 << endl; 
	cout << '-' 
		<< setw(50) << setfill('-')  
		<< '-' << setfill(' ') 
		<< endl;
	cout << setiosflags(ios::left) << setw(10) << "������"
		 << setw(10) << "�������"
		 << setw(15) << "�������� 16"
		 << setw(15) << "�����-���������"
		 << endl;
	cout << setiosflags(ios::left) << setw(10) << "������"
		 << setw(10) << "������"
		 << setw(15) << "�������� 3"
		 << setw(15) << "�������"
		 << endl;
	cout << setiosflags(ios::left) << setw(10) << "�������"
		 << setw(10) << "����"
		 << setw(15) << "��������� 21"
		 << setw(15) << "�����������"
		 << endl;
}