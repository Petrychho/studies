#include <iostream>

int main()
{
	int num;
	int max = RAND_MAX;
	int min = 0;
	int num_rand = rand();

	std::cout << "Enter the number you want to find: ";
	std::cin >> num;

	while (num != (num_rand % max))
	{
		if (num_rand > num & num_rand <= max)
		{
			max = num_rand;
		}
		if (num_rand < num & num_rand >= min)
		{
			min = num_rand;
		}

//		std::cout << "Min = " << min << "	Num = " << (num_rand % max) << "	Max = " << max << std::endl;
		num_rand = rand();
	}
	std::cout << "Number is: " << num_rand % max << std::endl;
	return 0;
}