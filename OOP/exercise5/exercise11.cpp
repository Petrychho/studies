#include <iostream>
#include <math.h>

using namespace std;

class fraction
{
private:
	int znam;
	int chisl;
	int gcd;
public:
	fraction() : znam(0), chisl(0), gcd(0)
	{};
	void putefraction()
	{
		char ch = '/';
		cout << "Введите дробь: "; cin >> chisl >> ch >> znam;
	}
	void getefraction() const
	{
		cout << "Текущая сумма: " << gcd << chisl << "/" << znam
			<<endl;
	}
	void fabb(fraction A, fraction B)
	{
		chisl = (A.chisl * B.znam) + (B.chisl * A.znam);
		znam = A.znam * B.znam;
	}
	void fsub(fraction A, fraction B)
	{
		chisl = A.chisl * B.znam - A.znam * B.chisl;
		znam = A.znam * B.znam;
	}
	void fmul(fraction A, fraction B)
	{
		chisl = A.chisl * B.chisl;
		znam = A.znam * B.znam;
	}
	void fdiv(fraction A, fraction B)
	{
		chisl = A.chisl * B.znam;
		znam = A.znam * B.chisl;
	}
	void lowterms()
	{
		long tnum, tden, temp, gcd;
		tnum = labs(chisl);
		tden = labs(znam);
		if( tden == 0)
		{cout << "Недоступный знаменатель"; exit(1);}
		else if (tnum == 0)
		{chisl = 0; znam = 1; return;}
		
		while(tnum != 0)
		{
			if (tnum < tden)
			{ temp = tnum; tnum = tden; tden = temp;}
			tnum = tnum - tden;
		}
		gcd = tden;
		chisl = chisl / gcd;
		znam = znam / gcd;
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	fraction A, B, C;

	A.putefraction();
	B.putefraction();
	C.fabb(A, B);
	C.getefraction();
	C.lowterms();
	C.getefraction();
  }