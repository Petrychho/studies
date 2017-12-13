#include <iostream>

using namespace std;

enum etype {laborer, secretary, maneger, accountant, execute, researcher};

class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date() : day(0), month(0), year(0) {};
		void getDate()
		{
			char ch = '/';
			cout << "Введите дату в формате дд/мм/гг: ";
			cin >> day >> ch >> month >> ch >> year;
		}
		void showDate() const
		{
			cout << day << "/" << month << "/" << year
				<< endl;
		}
};

class employee
{
	private:
		int number;
		float pay;
		etype person;
		Date date;
	public:
		employee() : number(0), pay(0)
		   {};
		void putemploy(int a)
		{
			number = a;
			char ch;
			cout << "Введите первую букву должности (laborer, secretary, maneger, accountant, execute, researcher): "; cin >> ch;
			switch(ch)
			{
				case 'l' : person = laborer;	break;
				case 's' : person = secretary;	break;
				case 'm' : person = maneger;	break;
				case 'a' : person = accountant;	break;
				case 'e' : person = execute;	break;
				case 'r' : person = researcher;	break;
			}
			date.getDate();
			cout << "Введите ЗП: "; cin >> pay;
		};
		void getemploy() const
		{
			cout << "№" << number 
				<< endl;
			cout << "Должность сотрудника: ";
			switch(person)
			{
				case 0: cout << "laborer" << endl;		break;
				case 1:	cout << "secretary" << endl;	break;
				case 2:	cout << "maneger" << endl;		break;
				case 3:	cout << "accountant" << endl;	break;
				case 4:	cout << "execute" << endl;		break;
				case 5:	cout << "researcher" << endl;	break;
			}
			cout << "Время приема на работу: ";
			date.showDate();
			cout << "ЗП: " << pay
				<< endl;
		};
};

void main()
{
	setlocale( LC_ALL, "Russian");

	employee A, B, C;
	int cnt = 1;
	A.putemploy(cnt++);
	B.putemploy(cnt++);
	C.putemploy(cnt++);

	A.getemploy();
	C.getemploy();
	B.getemploy();
}
