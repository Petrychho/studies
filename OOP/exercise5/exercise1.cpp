#include <iostream>

using namespace std;

class Int
{
	private:
		int num;
	public:
		Int(): num(0)
		{}
		Int(int n): num(n)
		{}
		void PrintInt()
		{
			cout << "Int = " << num 
				<< endl;
		}
		void smuInt(Int a, Int b)
		{
			num = a.num + b.num;
		}		
};

void main()
{
	Int A;
	Int B(9);
	Int C(11);

	A.smuInt(B,C);
	A.PrintInt();
}