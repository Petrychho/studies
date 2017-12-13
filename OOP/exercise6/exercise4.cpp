#include <iostream>

using namespace std;

int MaxInt(int a[], int cnt)
{
	int max = a[0];
	int maxcnt = 0;

	for (int i = 1; i < cnt; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			maxcnt = i;
		}
	}
	return maxcnt;
};

void main()
{
	setlocale (LC_ALL, "Russian");
	int mass[10] = { 1, 3, 5, 10, 8, 99, 4, 2, 15, 6};
	int cnt;

	cnt = MaxInt(mass,10);

	cout << "Мах в массиве имеет индекс " << cnt << endl << "Его значение " << mass[cnt] << endl;
}