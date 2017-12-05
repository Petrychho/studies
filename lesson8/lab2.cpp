#include <iostream>

template<typename T>
double revers(const T* mass, const size_t mass_size)
{
    double result = 0;

    for(int i = 0; i < mass_size; ++i)
    {
        result += mass[i];
    }

    return result / mass_size;
}

int main()
{
    int mass[10] = {1,2,3,4,5,6,7,8,9,10};
    double mass1[10] = {1.1,2,3,4.4,5.5,6,7,8,9,10};

    std::cout << revers<int>(mass,10) << "\n";
    std::cout << revers<double>(mass1,10) << "\n";

    return 0;
}


