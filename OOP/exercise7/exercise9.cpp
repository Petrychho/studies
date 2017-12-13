#include <iostream>

using namespace std;

class SafeArray
{
private:
	int arr[100];
	int up;
	int down;
public:
	SafeArray(int u, int d): up(u), down(d)
	{}
	int& operator [ ] (int n)
	{
		if( n < down || n > up)
		{
			cout << "Error" << endl; 
			exit(1);
		}
		return arr[n];
	}	
};

void main()
{
	SafeArray a(10,0);

	for( int i = 0; i < 10; i++)
		a[i] = i;

	cout << a[4] << endl;
	cout << a[11] << endl;
}