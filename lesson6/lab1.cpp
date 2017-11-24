#include <iostream>

struct List
{
    int Index;
    int Date;
    List* Next;
    List* Prev;
};

class DoubleList
{
private:
    int Index;
    List *Head;
    List *Tail;
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
        List *tmp = new List;
        tmp->Date = date;
        tmp->Index = ++Index;
        tmp->Prev = NULL;
        tmp->Next = NULL;

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
        List *tmp = new List;
        tmp->Date = date;
        tmp->Index = ++Index;
        tmp->Next = NULL;
        tmp->Prev = NULL;

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
    List *at(int index)
    {
        if(Index != 0)
        {
            List *tmp = Head;
            while(tmp->Index != index)
            {
                tmp = tmp->Next;
            }
            return tmp;
        }
        else
        {
            std::cout << "List are empty.\n";
        }
    }
};


int main()
{
    DoubleList A;
    A.AddToTail(555);
    A.AddToTail(444);
    A.AddToHead(111);

    List *tmp = A.at(1);

    std::cout << tmp->Date << std::endl;

    return 0;
}

