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
    DoubleList(const DoubleList& original)
    {
        Unit *tmp_original = original.Head;
        Unit *tmp;
        this->Index = original.Index;

        while(tmp_original)
        {
            tmp = new Unit;
            tmp->Date = tmp_original->Date;
            tmp->Index = tmp_original->Index;

            tmp_original = tmp_original->Next;

            if(!Head && tmp_original->Next)
            {
                Head = Tail = tmp;
            }
            else
            {
                tmp->Prev = Tail;
                Tail->Next = tmp;
                Tail = tmp;
            }
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
    DoubleList& operator = (const DoubleList& rigth)
    {
        Unit *tmp_rigth = rigth.Head;
        Unit *tmp;
        this->Index = rigth.Index;

        while(tmp_rigth)
        {
            tmp = new Unit;
            tmp->Date = tmp_rigth->Date;
            tmp->Index = tmp_rigth->Index;

            tmp_rigth = tmp_rigth->Next;

            if(!Head && tmp_rigth->Next)
            {
                this->Head = this->Tail = tmp;
            }
            else
            {
                tmp->Prev = this->Tail;
                this->Tail->Next = tmp;
                this->Tail = tmp;
            }
        }
        return *this;
    }
    DoubleList& operator += (const DoubleList& rigth)
    {
        if(&rigth == this)
        {
            Tail->Next = operator =(rigth).Head;

            return *this;
        }
        Index += rigth.Index;
        Tail->Next = rigth.Head;
        rigth.Head->Prev = Tail;
        Tail = rigth.Tail;
        return *this;
    }
//    DoubleList & operator + (const DoubleList& left, const DoubleList& rigth)
//    {
//        if(&left == this)
//        {
//            DoubleList tmp_left(left);
//        }
//        if(&rigth == this)
//        {
//            DoubleList tmp_rigth(rigth);
//        }
//        left.Tail->Next = rigth.Head;
//        rigth.Head->Prev = left.Tail;
//        Head = left.Head;
//        Tail = rigth.Tail;
//        return *this;
//    }
    Unit & operator [] (int i)
    {
        return *at(i);
    }
};


int main()
{
    DoubleList A,C;
    A.AddToTail(555);
    A.AddToTail(444);
    A.AddToHead(111);

    DoubleList B(A);
    C = B;

    std::cout << A.at(1)->Date << std::endl;
    std::cout << B.at(1)->Date << std::endl;
    std::cout << C.at(1)->Date << std::endl;
    std::cout << C[1].Date << std::endl;

    A += C;
    B += B;

//    DoubleList D = C + B;

    return 0;
}

