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
	void AddItem(int d)
	{
		Link* newLink = new Link;
		newLink ->date = d;
		newLink ->next = first;
		first = newLink;
	}
	void AddItemEnd(int d)
	{
		if (!first)
		{
			Link* newLink = new Link;
			newLink ->date = d;
			newLink ->next = first;
			first = newLink;
		}
		else
		{
			Link* newLink = new Link;
			Link* current = first;
			while ((current->next))
				current = current ->next;
			newLink ->date = d;
			newLink ->next = current ->next;
			current ->next = newLink;
		}
	}
	void Display()
	{
		Link* current = first;
		while (current)
		{
			cout << current ->date << endl;
			current = current ->next;
		}
	}
};

void main()
{
	LinkList li, li2;

	li.AddItem(25);
	li.AddItem(36);
	li.AddItem(49);
	li.AddItem(64);

	li2.AddItemEnd(25);
	li2.AddItemEnd(36);
	li2.AddItemEnd(49);
	li2.AddItemEnd(64);

	li.Display();
	li2.Display();
}