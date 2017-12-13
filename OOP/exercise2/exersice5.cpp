#include <iostream>

using namespace std;

void main()
{
	setlocale (LC_ALL,"Russian");

	int cnt = 1;
	int str;

	cout << "¬ведите кол-во строк: ";
	cin >> str;

	for (int j = 0; j < str; j++)
	{
		for (int i = 0; i < str - j; i++)
		{
			cout << " ";
		}
		for (int i = 0; i < cnt; i++)
		{
			cout << "X";
		}
		cnt += 2;
		cout << endl;		
	}
}