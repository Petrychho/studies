#include <iostream>

int main(int argc, char const *argv[])
{
	int start;
	int* a = &start;
	int* b = &start - 1;

	if (a > b)
	{
		int* tmp = a;
		a = b;
		b = tmp;
	}

	do
	{
		std::cout << a <<std::endl;
		++a;
	}	
	while(a <= b);
	
	
	return 0;
}
