#include <iostream>

int main()
{
    int mass[10] = {1,2,3,4,5,6,7,8,9,10};
    int max = mass[0] * mass[0];
    int a = 0, b = 0;

    for(int i = 0; i < 10 - 1; ++i)
    {
        for(int j = i + 1; j < 10; ++j)
        {
            if(max < mass[i] * mass[j])
            {
                max = mass[i] * mass[j];
                a = i;
                b = j;
            }
        }
    }

    std::cout << "a = " << a << " b = " << b << std::endl;

    return 0;
}
