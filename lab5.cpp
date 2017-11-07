#include <iostream>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	double sum = 0;
	int num;

	while (std::cin >> num)
	{
		sum += num;
		cnt++;
	}
	sum = sum / cnt;

	std::cout << "= " << sum << std::endl;

	return 0;
}