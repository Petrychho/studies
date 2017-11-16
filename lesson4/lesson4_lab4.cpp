#include <iostream>

int main()
{
    int mass[10] = {1,2,3,4,5,6,7,8,9,10};
    int tmp;
    int start = 0;
    int end = sizeof(mass)/sizeof(mass[0]);
   
    std::cin >> tmp;

    while(middle != start || middle != end)
    {
        int middle = (start + end + 1) / 2;
        
        if (tmp < mass[middle])
        {
            end = middle;
        } else if(tmp > mass[middle])
               {
                    start = middle;
               }else
                {
                        std::cout << "Number = " << mass[middle] << std::endl;
                        break;
                }
    }
    return 0;
}
