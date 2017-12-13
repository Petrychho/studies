#include <iostream>
#include <conio.h>

using namespace std;

class tollBooth
{
	private:
		unsigned int cnt;
		double allpay;
	public:
		tollBooth(): cnt(0), allpay(0)
		{};
		void payingCar()
		{cnt++; allpay += 0.5;};
		void nopayCar()
		{cnt++;};
		void printCar() const
		{
			cout << "AllCar: " << cnt
				<< "\nAllpay $ " << allpay
				<< endl;
		}
};

void main()
{
	tollBooth Car;
	char ch = ' ';
	do
	{
		ch = getch();
		switch(ch)
		{
			case 'y' : Car.payingCar(); break;
			case 'n' : Car.nopayCar();	break;
			case 27 :Car.printCar();	break;
		}
	} while(ch != 27);
}