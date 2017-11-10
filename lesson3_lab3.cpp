#include <iostream>

int main(int argc, char const *argv[])
{
	int a;
	int* start = &a;
	int* end = &a + 2;
	int cnt = 0;

	if (start > end)
	{
		int* tmp = start;
		start = end;
		end = tmp;
	}

	do
	{
		for (int tmp = *start ^ *(start + 1); tmp; tmp >>= 1)
		{
			cnt += ((tmp & 1) == 0);
		}
		std::cout << "cnt = " << cnt << std::endl;
		cnt = 0;
		*start++;
	}	
	while(start < end);

	return 0;
}
