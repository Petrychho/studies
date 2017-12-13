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
		cout << "������� �������� �����: "; cin >> book;
		cout << "������� ���� �����: "; cin >> price;
	}
	void ShowPublication()
	{
		cout << book << endl;
		cout << "���� �����: " << price << endl;
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
		cout << "������� ���-�� �������: "; cin >> pages;
	}
	void ShowBook()
	{
		Publication::ShowPublication();
		cout << "����� ������� � �����: " << pages << endl; 
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
		cout << "������� ����� ������ (��:��): "; cin >> minutes >> ch >> seconds;  
	}
	void ShowTime()
	{
		Publication::ShowPublication();
		cout << "����� ����������: " << minutes << ':' << seconds << endl;
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