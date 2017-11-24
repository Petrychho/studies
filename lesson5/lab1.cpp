#include <iostream>
#include <cstring>

void remove(char *src, char *substr)
{
   int size_src = 0;
   int size_substr = 0;

   for(int i = 0; src[i] != '\0'; ++i, ++size_src){}
   for(int i = 0; substr[i] != '\0'; ++i, ++size_substr){}

   for(int i = 0; i < size_src; ++i)
   {
       bool flag = 0;

       for(int j = 0; j < size_substr; ++j)
       {
          if(src[i + j] == substr[j])
          {
              flag = 1;
          }
          else
          {
              flag = 0;
              break;
          }
       }
       if(flag == 1)
       {
           for(int j = i + size_substr, k = i; j <= size_src; ++j, ++k)
           {
               char tmp = src[k];
               src[k] = src[j];
               src[j] = tmp;
           }
           size_src -= size_substr;
       }
   }
}

int main()
{
    char src[8] = "abcdefg";
    char substr[4] = "cde";

    remove(src, substr);

    std::cout << src << "\n";
}
