#include <iostream>

int main(int argc, char const *argv[])
{
	int mask = 0x1;
	int num;
	int i = 0;
	int cnt = 0;

	std::cin >> num;

	while(i < 8)
	{
		if (((num >> i) & mask) == 1)
		{
			cnt++;
		}
		i++;
	}

	std::cout << "Cnt = " << cnt << std::endl;
	return 0;
}
