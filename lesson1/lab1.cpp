#include <iostream>

int main()
{
	int sum = 0;
	int cnt;

	while(1)
	{
		std::cin >> cnt;

		if ((cnt % 7) == 0)
		{
			break;
		}
		sum += cnt;
	}

	std::cout << sum << std::endl;

	return 0;
}