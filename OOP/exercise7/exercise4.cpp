#include <iostream>

using namespace std;

class Int
{
private:
	int num;
public:
	Int(): num(0)
	{}
	Int(int n)
	{num = n;}
	void PutInt()
	{
		cout << "������� �����: "; cin >> num;
	}
	void GetInt()
	{
		cout << "���������: " << num << endl;
		num = 0;
	}
	Int operator + (Int a)
	{
		Int tmp;
		tmp.num = num + a.num;
		return tmp;
	}
	Int operator - (Int a)
	{
		Int tmp;
		tmp.num = num - a.num;
		return tmp;
	}
	Int operator * (Int a)
	{
		Int tmp;
		tmp.num = num * a.num;
		return tmp;
	}
	Int operator / (Int a)
	{
		Int tmp;
		tmp.num = num / a.num;
		return tmp;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Int a, b, c;

	a.PutInt();
	b.PutInt();

	c = a + b;
	c.GetInt();

	c = a - b;
	c.GetInt();

	c = a * b;
	c.GetInt();

	c = a / b;
	c.GetInt();
}
