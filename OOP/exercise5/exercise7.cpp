#include <iostream>

using namespace std;

class angle
{
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		angle (int a, float b, char c) : degrees(a), minutes(b), direction(c)
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

void main()
{
	setlocale (LC_ALL, "Russian");

	angle A(179,59.9,'E');
	A.gateangle();

	int cnt = 0;

	while (cnt++ < 4)
	{
		A.puteangle();
		A.gateangle();
	}
}