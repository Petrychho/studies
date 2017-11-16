#include <iostream>

void swap(int *a, int size_a, int* b, int size_b)
{
    int* out_mass = new int[size_a + size_b];

    while(*a != size_a || *b != size_b)
    {
    	*out_mass++ = (*a <= *b) ? *a++ : *b++;
    }
    while(*a != size_a)
    {
    	*out_mass++ = *a++; 
    }
    while(*b != size_b)
    {
    	*out_mass++ = *b++;
    }
    
    for (int i = 0; i < size_a + size_b; ++i)
    {
        std::cout << out_mass[i] << ' ';
    }
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {0,6,7,8,9,10,11,12,13,14};

    swap(a, sizeof(a)/sizeof(a[0]), b, sizeof(b)/sizeof(b[0]));
}
