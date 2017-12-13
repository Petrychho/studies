#include <iostream>

using namespace std;

class fraction
{
private:
	int znam;
	int chisl;
public:
	fraction() : znam(0), chisl(0)
	{};
	void putefraction()
	{
		char ch = '/';
		cout << "Введите дробь: "; cin >> chisl >> ch >> znam;
	}
	void add_fraction (fraction A, fraction B)
	{
		chisl = (A.chisl * B.znam) + (B.chisl * A.znam);
		znam = A.znam * B.znam;
	}
	void getefraction() const
	{
		cout << "Текущая сумма: " << chisl << "/" << znam
			<<endl;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	fraction A, B, C;
	int cnt = 0;
	
	while (cnt++ < 3)
	{
		A.putefraction();
		B.putefraction();
		C.add_fraction(A, B);
		C.getefraction();
	}
}