#include <iostream>

using namespace std;

class SafeAray
{
private:
	int LIMIT[100];
public:
	SafeAray(){};
	void Put( int index, int a)
	{
		if (index >= 0 && index <= 100 - 1)
		{
			LIMIT[index] = a;
		}
	}
	int Get(int index)
	{
		if (index >= 0 && index <= 100 - 1)
		{
			return LIMIT[index];
		}
	}
};

void main()
{
	SafeAray mass;

	mass.Put(-1,99);
	cout << mass.Get(0) << endl;
}