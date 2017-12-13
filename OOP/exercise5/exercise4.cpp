#include <iostream>

using namespace std;

class employee
{
	private:
		int number;
		float pay;
	public:
		employee() : pay(0)
		   {};
		void addWorker(int a, float p)
		{
			number = a;
			pay = p;
		};
		void print() const
		{
			cout << "¹" << number
				<< "\nPay: " << pay
				<< endl;
		};
};


void main()
{
	employee A, B, C;
	float f;
	int cnt = 1;
	cin >> f;
	A.addWorker(cnt++, f);
	cin >> f;
	B.addWorker(cnt++, f);
	cin >> f;
	C.addWorker(cnt++, f);

	cin >> f;

	B.print();
}