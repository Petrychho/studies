#include <iostream>

void reverse(int* first, int* last)
{
    for(;first <= last; ++first, --last)
    {
        std::swap(*first, *last);
    }

}

int main()
{
   int mass[] = {1, 2, 3, 4, 5, 6};

   reverse(mass, mass + 5);

   for(int i = 0; i < 6; ++i)
   {
       std::cout << mass[i];
   }

   for (const int &x : mass)
   {
       std::cout << x;
   }

   return 0;
}

