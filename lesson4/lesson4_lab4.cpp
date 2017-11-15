#include <iostream>

int main()
{
    int mass[10] = {1,2,3,4,5,6,7,8,9,10};
    int tmp;
    int start = 0;
    int end = 9;
    int middle = (end + 1) / 2;

    std::cin >> tmp;

    while(middle != start || middle != end)
    {
        if (tmp < mass[middle])
        {
            end = middle;
            middle = (end + 1) / 2;
        } else if(tmp > mass[middle])
               {
                    start = middle;
                    middle = (middle + end + 1) / 2;
               }else
                {
                        std::cout << "Number = " << mass[middle] << std::endl;
                        break;
                }
    }
    return 0;
}
