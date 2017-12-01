#include <iostream>

struct list
{
    int data;
    list *Next;
};

void add(list *start, int number)
{
    list *tmp;
    tmp = start;
    list* next = new list;

    while(tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = next;
    next->data = number;
}

void del_all(list* start)
{
    list *tmp;
    while(start)
    {
        tmp = start->Next;
        delete start;
        start = tmp;
    }
}


int main()
{
    list* start = new list;
    start->data = 0;
    start->Next = NULL;

    for(int i = 1; i < 3; ++i)
    {
        add(start,i);
    }
    del_all(start);
}
