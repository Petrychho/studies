#include <iostream>
#include <cstring>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");

	char* S1 = "Привет, как дела?";
	char* S2 = "ЯНормально";

	int Compstr(char*, char*);

	cout << Compstr(S1, S2) << endl;
}

int Compstr(char *S1, char *S2)
{
	if( *S1 < *S2)
		return -1;
	if( *S1 > *S2)
		return 1;
	if( *S1 == *S2)
		return 0;
};