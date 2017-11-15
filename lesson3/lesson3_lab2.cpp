#include <iostream>

int main(int argc, char const *argv[])
{
	long int tmp = 0x6C6C6F; // "llo"
	int cnt = 0;
	char* ptr_char = (char *)&tmp;

	for (int i = 0; i < 3; ++i, ++ptr_char)
	{
		std::cout << "ptr_char = " << *ptr_char << std::endl;
		for (char res = *ptr_char; res; res >>= 1)
		{
			cnt += ((res & 1) == 1);
		}
	}
	std::cout << "cnt = " << cnt << std::endl;

	return 0;
}
