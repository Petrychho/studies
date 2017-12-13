#include <iostream>
#include <ctime>

using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
private:
	int number;
	Suit suit;
public:
	Card() {};
	void Set(int n, Suit s)
	{
		number = n;
		suit = s;
	}
	void Display()
	{
		if (number >= 2 && number <= 10)
		{
			cout << number;
		}
		else
		{
			switch(number)
			{
				case jack: cout << "J"; break;
				case queen: cout << "Q"; break;
				case king: cout << "K"; break;
				case ace: cout << "A"; break;
			}
		}
		switch(suit)
		{
			case clubs: cout << static_cast<char>(5); break;
			case diamonds: cout << static_cast<char>(4); break;
			case hearts: cout << static_cast<char>(3); break;
			case spades: cout << static_cast<char>(6); break;
		}
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Card desk[52];
	Card player[4][13];
	cout << endl;

	for (int i = 0; i < 52; i++)
	{
		int num = (i % 13) + 2;
		Suit su = Suit (i / 13);
		desk[i].Set(num, su);
	}

	cout << "Исходная колода:" << endl;
	for (int i = 0; i < 52; i++)
	{
		desk[i].Display();
		cout << " ";
		if ((i + 1) % 13 == 0) cout << endl;
	}
	cout << endl;

	srand(time (NULL));
	for (int i = 0; i < 52; i++)
	{
		int k = rand() % 52;
		Card temp = desk[i];
		desk[i] = desk[k];
		desk[k] = temp;
	}

	cout << "Перемешанная колода:" << endl;
	for (int i = 0, j = 0; i < 52; i++)
	{
		desk[i].Display();
		player[j][(i + 1) % 13] = desk[i];
		cout << " ";
		if ((i + 1) % 13 == 0) 
		{
			j++;
			cout << endl;
		}
	}
	cout << endl;
	cout << endl;
	for (int j = 0; j < 4; j++)
	{
		cout << "Номер игрока № " << j + 1 << endl;
		for (int i = 0; i < 13; i++)
		{
			player[j][i].Display();
			cout << " ";
		}
		cout << endl;
	}
}