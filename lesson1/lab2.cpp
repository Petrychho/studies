#include <iostream>

int main()
{
	int mass[10] = {0,1,2,3,4,5,6,7,8,9};
	int mod;
	int i = 0;
	int min = mass[0];
	int max = mass[0];
	int i_min = 0;
	int i_max = 0;

	std::cin >> mod;

	while(i < 10)
	{
		if(mass[i] % mod < min)
		{
			min = mass[i];
			i_min = i;
		}
		if(mass[i] % mod > max)
		{
			max = mass[i];
			i_max = i;
		}
		i++;		
	}

	std::cout << "Max = " << mass[i_max] << std::endl;
	std::cout << "Min = " << mass[i_min] << std::endl;

	return 0;
}