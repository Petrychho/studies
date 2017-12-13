#include <iostream>

using namespace std;

struct Link
{
	int date;
	Link* next;
};

class LinkList
{
private:
	Link* first;
public:
	LinkList()
	{first = NULL;}
	~LinkList()
	{
		Link* current = first;
		while (current != NULL)
		{
			Link* tmp = current;
			current = current ->next;
			delete tmp;
			cout << "Del" << endl;
		}
	}
	void AddItem(int d)
	{
		Link* newlink = new Link;
		newlink->date = d;
		newlink->next = first;
		first = newlink;
	}
	void Display()
	{
		Link* current = first;
		while (current)
		{
			cout << current->date << endl;
			current = current->next;
		}
	}
};

void main()
{
	LinkList li;

	li.AddItem(32);
	li.AddItem(45);
	li.AddItem(12);

	li.Display();
}