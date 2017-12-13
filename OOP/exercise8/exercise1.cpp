#include <iostream>
#include <string>

using namespace std;

class Publication
{
private:
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

class Book : private Publication
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
	}
	void ShowBook()
	{
		Publication::ShowPublication();
		cout << "„исло страниц в книге: " << pages << endl; 
	}
};

class Type : private Publication
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
	}
	void ShowTime()
	{
		Publication::ShowPublication();
		cout << "¬рем€ аудиокниги: " << minutes << ':' << seconds << endl;
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