#include <iostream>

int main(int argc, char const *argv[])
{
	int num = 0x2D8;
	int cnt = 0;
	int mask = 3;

	while (num)
	{
		std::cout << ">> " << num << std::endl;

		if ((num & mask == 1) || (num & mask == 2))
		{
			cnt++;
		}
		num = num >> 2;
	}
	std::cout << "Cnt = " << cnt << std::endl;
	return 0;
}