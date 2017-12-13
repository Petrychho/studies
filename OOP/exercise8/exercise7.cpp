#include <iostream>

using namespace std;

class Counter
{
protected:
	unsigned int counter;
public:
	Counter() : counter(0)
	{}
	Counter(int c) : counter(c)
	{}
	unsigned int ShowCounter() const
	{ return counter;}
	Counter operator ++ ()
	{ return Counter(++counter);}
};

class CounterDn: public Counter
{
public:
	CounterDn() : Counter()
	{}
	CounterDn(int c) : Counter(c)
	{}
	CounterDn operator -- ()
	{return CounterDn(--counter);}
	CounterDn operator ++ ()
	{return CounterDn(++counter);}
	CounterDn operator ++ (int)
	{return CounterDn(counter++);}
	CounterDn operator -- (int)
	{return CounterDn(counter--);}
};

void main()
{
	CounterDn A(10);


	A.ShowCounter();

	A++;
	cout << A.ShowCounter() << endl;
	A--;
	cout << A.ShowCounter() << endl;
	++A;
	cout << A.ShowCounter() << endl;
	--A;
	cout << A.ShowCounter() << endl;
}