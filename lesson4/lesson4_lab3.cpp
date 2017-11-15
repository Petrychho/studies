#include <iostream>

void swap(int *a, int size_a, int* b, int size_b)
{
    int* c = new int[size_a + size_b];

    for(int i = 0, j = 0, k = 0; k < size_a + size_b;)
    {
        if(a[i] <= b[j])
        {
            c[k++] = a[i++];
        } else
        {
            c[k++] = b[j++];
        }
    }
    for (int i = 0; i < size_a + size_b; ++i)
    {
        std::cout << c[i] << ' ';
    }
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {0,6,7,8,9,10,11,12,13,14};

    swap(a, 10, b, 10);
}
