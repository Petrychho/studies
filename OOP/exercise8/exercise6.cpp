#include <iostream>

using namespace std;

class SafeArray
{
protected:
	int arr[100];
public:
	int& operator [ ] (int n)
	{
		if( n < 0 || n > 100)
		{
			cout << "Error" << endl; 
			exit(1);
		}
		return arr[n];
	}	
};

class SafeHilo : private SafeArray
{
private:
	int up;
	int down;
public:
	SafeHilo(int u, int d): up(u), down(d)
	{}
	int& operator [ ] (int n)
	{
		if( n < down || n > up)
		{
			cout << "Error" << endl; 
			exit(1);
		}
		return SafeArray::arr[n];
	}
};

void main()
{
	SafeHilo A(10,0);

	for (int i = 0; i < 12; i++)
	{A[i] = i; cout << A[i] << endl;}

}