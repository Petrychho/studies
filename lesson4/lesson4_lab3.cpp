#include <iostream>

void swap(int *a, int *size_a, int *b, int *size_b, int *out_mass)
{
    while(*a != *size_a || *b != *size_b)
    {
    	*out_mass++ = (*a <= *b) ? *a++ : *b++;
    }
    while(*a != *size_a)
    {
    	*out_mass++ = *a++; 
    }
    while(*b != *size_b)
    {
    	*out_mass++ = *b++;
    }
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {0,6,7,8,9,10,11,12,13,14};
    int out_mass[20];

    swap(a, a + sizeof(a)/sizeof(a[0]), b, b + sizeof(b)/sizeof(b[0]), out_mass);
    for( const int &x : out_mass)
    {
    	std::cout << x << " ";
    }
}
