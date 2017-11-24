#include <iostream>
#include <bitset>
#include <climits>

int main()
{
    double number = 23.23;
    char* ptr_char = (char *)&number;
    int mask = 1;
    ++ptr_char;
    std::cout << std::bitset<sizeof(number)*8>(number) << "\n";

    for(int i = 1; i <= sizeof(number); ++i, ++ptr_char)
    {
        std::cout << std::bitset<sizeof(char)*CHAR_BIT>(*ptr_char) << "\n";
        *ptr_char ^= mask;
        std::cout << std::bitset<sizeof(char)*CHAR_BIT>(*ptr_char) << "\n";
        std::cout << std::bitset<sizeof(number)*8>(number) << "\n";
    }
    return 0;
}
