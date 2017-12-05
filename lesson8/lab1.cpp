#include <iostream>
#include <cstring>

template<typename T>
T revers(T number)
{
    T result = 0;

    while(number != 0)
    {
        result += number % 10;
        result *= 10;
        number /= 10;
    }
    return result / 10;
}

template <>
char* revers(char* first)
{
    for(int i = 0, j = strlen(first) - 1; i <= j; ++i, j--)
    {
        std::swap(first[i],first[j]);
    }
    return first;
}

int main()
{
    char* mass = new char[5];
    mass[0] = 'a'; mass[1] = 'b'; mass[2] = 'c'; mass[3] = 'D';
    mass[4] = 'E';

    std::cout << revers<size_t>(123456789) << "\n";
    std::cout << revers(mass) << "\n";
    return 0;
}

