#include <iostream>

int main(int argc, char const *argv[])
{
	//long int tmp = 0xFFFFFFFF;
	long int tmp = 0x4655434B;
	char ch;
	char* start = &ch + sizeof(long int) - 3;


	int cnt = 0;

	std::cout << "tmp =\t" << &tmp << std::endl;
	//std::cout << "ch = " << static_cast<void *>(ch) << std::endl;
	std::cout << "start = " << *start << std::endl;
	std::cout << "&start = " << static_cast<void *>(start)<< std::endl;
	std::cout << "start = " << *(start + 1) << std::endl;
	std::cout << "&start = " << static_cast<void *>(start + 1)<< std::endl;
	//std::cout << "start =\t" << static_cast<void *>(start) + 5 << std::endl;
	//std::cout << ">> " << sizeof(tmp) << std::endl;

/*
	for (int i = 0; i < sizeof(tmp); ++i)
	{
		for (int i = 0; i < sizeof(char); ++i)
		{
			if (((*start >> i) & 1) == 1)
			{
				cnt++;
			}
		}
		*start++;
	}

	std::cout << "cnt = " << cnt << endl;
*/
	return 0;
}