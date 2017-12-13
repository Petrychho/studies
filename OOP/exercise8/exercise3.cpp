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
		cout << "¬ведите название книги: "; cin >> book;
		cout << "¬ведите цену книги: "; cin >> price;
	}
	void ShowPublication()
	{
		cout << book << endl;
		cout << "÷ена книги: " << price << endl;
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

		cout << "Ќомер мес€ца: "; cin >> i;
		
		price_for_the_month[i] += tmp;
	}
	void ShowSales()
	{
		int i;

		cout << "Ќомер мес€ца: "; cin >> i;
		cout << "ќбьем продаж за мес€ц є" << i << " равен: " << price_for_the_month[i] << endl;
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
		cout << "¬ведите кол-во страниц: "; cin >> pages;
		Sales::PutSales(Publication::price);
	}
	void ShowBook()
	{
		Publication::ShowPublication();
		cout << "„исло страниц в книге: " << pages << endl;		
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
		cout << "¬ведите врем€ записи (мм:сс): "; cin >> minutes >> ch >> seconds;
		Sales::PutSales(Publication::price);  
	}
	void ShowTime()
	{
		Publication::ShowPublication();
		cout << "¬рем€ аудиокниги: " << minutes << ':' << seconds << endl;		
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