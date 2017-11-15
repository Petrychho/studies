#include <iostream>

template <typename T>
void reverse(T* first, T* last)
{
    for(;first <= last; ++first, --last)
    {
        std::swap(*first, *last);
    }
}

int main()
{
    int *mass = new int[10];
    for(int i = 0; i < 10; i++)
    {
        mass[i] = i;
    }

    reverse(mass, mass + 9);

    for (int i = 0; i < 10; i++)
    {
        std::cout <<mass[i];
    }
    delete [] mass;
    return 0;
}
