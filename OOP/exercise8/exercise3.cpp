#include <iostream>
#include <string>

using namespace std;

class Publication
{
protected:
	string book;
	float price;
public:
	Publication(): book("N/A"), price(0.0)
	{};
	void PutPublication()
	{
		cout << "������� �������� �����: "; cin >> book;
		cout << "������� ���� �����: "; cin >> price;
	}
	void ShowPublication()
	{
		cout << book << endl;
		cout << "���� �����: " << price << endl;
	}
};

class Sales
{
private:
	float price_for_the_month[3];
public:
	Sales()
	{for (int i = 0; i < 3; i++) price_for_the_month[i] = 0.0;}
	void PutSales(float tmp)
	{
		int i;

		cout << "����� ������: "; cin >> i;
		
		price_for_the_month[i] += tmp;
	}
	void ShowSales()
	{
		int i;

		cout << "����� ������: "; cin >> i;
		cout << "����� ������ �� ����� �" << i << " �����: " << price_for_the_month[i] << endl;
	}
};

class Book : private Publication, private Sales
{
private:
	int pages;
public:
	Book() : Publication(), pages(0)
	{}
	void PutBook()
	{
		Publication::PutPublication();
		cout << "������� ���-�� �������: "; cin >> pages;
		Sales::PutSales(Publication::price);
	}
	void ShowBook()
	{
		Publication::ShowPublication();
		cout << "����� ������� � �����: " << pages << endl;		
		Sales::ShowSales();
	}
};

class Type : private Publication, private Sales
{
private:
	int minutes;
	int seconds;
	char ch;
public:
	Type() : Publication(), minutes(0), seconds(0)
	{}
	void PutTime()
	{
		Publication::PutPublication();
		cout << "������� ����� ������ (��:��): "; cin >> minutes >> ch >> seconds;
		Sales::PutSales(Publication::price);  
	}
	void ShowTime()
	{
		Publication::ShowPublication();
		cout << "����� ����������: " << minutes << ':' << seconds << endl;		
		Sales::ShowSales();
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Book A;
	Type B;

	A.PutBook();
	A.ShowBook();

	B.PutTime();
	B.ShowTime();
}