#include <iostream>

using namespace std;

class Queue
{
private:
	int head;
	int tail;
	static const int MAX = 5;
	int st[MAX];
public:
	Queue(){head = 0; tail = 0;};
	void Put(int a)
	{
		if (tail + 1 == head || (tail == MAX && head == 0)) cout << "Стек полный " << endl;
		else 
			if (tail == MAX) tail = 0;
			else st[tail++] = a;
	}
	void Get()
	{
		if (head == tail) cout << "Стек пустой " << endl;
		else 
			if (head == MAX)
			{
				head = 0;
				cout << st[head] << endl;
			}
			else cout << st[head++] << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Queue s1;
	char ch = 'p';
	int a;

	while (ch != 'n')
	{
		if (ch == 'p') 
		{
			cin >> a;
			s1.Put(a);
		}
		if (ch == 'g')
		{
			s1.Get();
		}
		cin >> ch;
	}
}