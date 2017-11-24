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
    while(start->Next != NULL)
    {
        tmp = start;
        while(tmp->Next->Next != NULL)
        {
            tmp = tmp->Next;
        }
        delete tmp->Next;
        tmp->Next = NULL;
    }
    delete start;
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
