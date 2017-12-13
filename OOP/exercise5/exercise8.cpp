#include <iostream>

using namespace std;


class Nom
{	
		static int cnt;
		int nom;
	public:
		Nom() : nom(0)
		{nom = ++cnt;}
		void printNom()
		{
			cout << "Порядковый номер №:" << nom
				<<endl;
		}
};

int Nom::cnt;

void main()
{
	setlocale (LC_ALL, "Russian");

	Nom A, B, C;

	A.printNom();
	C.printNom();
	B.printNom();
}