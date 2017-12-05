#include <iostream>

template<typename T>
struct MinMax
{
    T Min;
    T Max;
};

template<typename T>
MinMax<int> revers(const T* mass, size_t iter_start, size_t iter_end)
{
    MinMax<T> result;
    result.Min = result.Max = mass[iter_start];

    for(size_t i = iter_start; i < iter_end; ++i)
    {
        if(mass[i] <= result.Min)
        {
            result.Min = mass[i];
        }
        else
        {
            result.Max = mass[i];
        }

    }
    return result;
}

int main()
{
    int mass[10] = {1,2,3,4,5,6,7,8,9,10};
    MinMax<int> result = revers<int>(mass,4,8);

    std::cout << "Min = " << result.Min
              << " Max = " << result.Max << "\n";

    return 0;
}



