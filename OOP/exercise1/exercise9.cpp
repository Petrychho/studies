#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");
	
	int a,b,c,d,var1,var2;
	char slash = '/';


	cout << "������� ������ �����: ";
	cin >> a >> slash >> b;
	cout << "������� ������ �����: ";
	cin >> c >> slash >> d;
	
	var1 = a * d + b * c;
	var2 = b* d;

	cout << "����� �����:" << var1 << slash << var2 << endl;
}