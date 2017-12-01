#include <iostream>

struct Unit
{
    int Index;
    int Date;
    Unit* Next;
    Unit* Prev;

    Unit():Index(0),Date(0),Next(NULL),Prev(NULL)
    {}
};

class DoubleList
{
private:
    int Index;
    Unit *Head;
    Unit *Tail;
public:
    DoubleList():Index(0),Head(NULL),Tail(NULL)
    {}
    ~DoubleList()
    {
        while(Head)
        {
            Tail = Head->Next;
            delete Head;
            Head = Tail;
        }
    }
    void AddToHead(int date)
    {
        Unit *tmp = new Unit;
        tmp->Date = date;
        tmp->Index = ++Index;

        if(Head != NULL)
        {
            tmp->Next = Head;
            Head->Prev = tmp;
            Head = tmp;
        }
        else
        {
            Head = Tail = tmp;
        }
    }
    void AddToTail(int date)
    {
        Unit *tmp = new Unit;
        tmp->Date = date;
        tmp->Index = ++Index;

        if(Tail != NULL)
        {
            tmp->Prev = Tail;
            Tail->Next = tmp;
            Tail = tmp;
        }
        else
        {
            Head = Tail = tmp;
        }
    }
    Unit *at(int index)
    {
        if(Index != 0)
        {
            Unit *tmp = Head;
            while(tmp->Index != index)
            {
                tmp = tmp->Next;
            }
            return tmp;
        }
        else
        {
            return NULL;
        }
    }
};


int main()
{
    DoubleList A;
    A.AddToTail(555);
    A.AddToTail(444);
    A.AddToHead(111);

    Unit *tmp = A.at(1);

    if(tmp)
        std::cout << tmp->Date << std::endl;

    return 0;
}

