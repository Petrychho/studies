#include <iostream>

using namespace std;

void main()
{
	int cnt = 1;
	int** mass = new int* [10];

	for (int i = 0; i < 10; i++)
		mass[i] = new int [10];

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			mass[i][j] = cnt++;

	for (int i = 0; i < 10; i++, cout << endl)
		for (int j = 0; j < 10; j++, cout << " ")
			cout << mass[i][j];

	for (int i = 0; i < 10; i++)
		delete mass[i];
}