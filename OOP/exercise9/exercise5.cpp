#include <iostream>

using namespace std;

const int MAX = 10;

void main()
{
	float Mass1[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float Mass2[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float Mass3[MAX];

	void AddArrays(float*, float*, float*, const int);

	AddArrays(Mass1, Mass2, Mass3, MAX);

	cout << "Mass3 = {";
	for (int i = 0; i < MAX; i++)
		cout << *(Mass3 + i) << ", ";
	cout << "}" << endl;

	
}

void AddArrays(float* M1, float* M2, float* M3, const int End)
{
	for (int i = 0; i < End; i++)
		*(M3 + i) = *(M1 + i) + *(M2 + i);
}