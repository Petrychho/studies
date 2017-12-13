#include <iostream>

using namespace std;

class angle
{
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		angle() : degrees(0), minutes(0), direction(0)
		{};
		void puteangle()
		{
			cout << "������� �������: "; cin >> degrees;
			cout << "������� ������: "; cin >> minutes;
			cout << "������� ������������: "; cin >> direction;
			while (minutes >= 60)
			{
				degrees++;
				minutes -= 60;
			}
		}
		void gateangle() const
		{
			cout << "����������: " << degrees << '\xB0' << minutes << "' " << direction
				<< endl;
		}
};

class ship
{
private:
	static int cnt;
	int nomber;
	angle dir1, dir2;
public:
	ship() : nomber(0)
	{};
	void pute_ship()
	{
		nomber = ++cnt;
		dir1.puteangle();
		dir2.puteangle();
	}
	void gete_ship() const
	{
		cout << "����� �������: " << nomber
			<<endl;
		dir1.gateangle();
		dir2.gateangle();
	}
};

int ship::cnt;

void main()
{
	setlocale (LC_ALL, "Russian");

	ship A, B, C;

	A.pute_ship();
	B.pute_ship();
	C.pute_ship();

	A.gete_ship();
	B.gete_ship();
	C.gete_ship();
}
