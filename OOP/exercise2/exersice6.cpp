#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");
	
	while (1)
	{
		unsigned int num   = 1;
		unsigned long fact = 1;
		cout << "������� ����� �����: ";
		cin >> num;

		if (num == 0) break;

		for (int j = num; j > 0; j--)
			fact *= j;
		cout << "��������� ����� " << num << " = " << fact << endl; 
	}
}