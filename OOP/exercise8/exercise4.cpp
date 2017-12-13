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

class Disk: private Publication
{
private:
	enum type {cd, dvd};
	type cd_dvd;
public:
	void PutDisk()
	{
		char ch;
		Publication::PutPublication();
		cout << "CD ��� DVD(c/d): "; cin >> ch;
		switch(ch)
		{
			case 'c' : cd_dvd = cd; break;
			case 'd' : cd_dvd = dvd; break;
		}
	}
	void ShowDisk()
	{
		Publication::ShowPublication();
		cout << "��� �����: ";
		switch(cd_dvd)
		{
			case 0: cout << "CD" << endl; break;
			case 1: cout << "DVD" << endl; break;
		}
	}
};

void main()
{
	setlocale (LC_ALL, "Russian");

	Disk C;

	C.PutDisk();
	C.ShowDisk();
}