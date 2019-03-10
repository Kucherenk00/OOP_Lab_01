#include <iostream>
#include <cmath>
//18
using namespace std;

class Time
{
private:
	int h;
	int m;
	int s;


public:
	Time(int h, int m, int s);
	Time();
	~Time();
	void Seth(int h);
	void Setm(int m);
	void Sets(int s);
	int GetH();
	int GetM();
	int GetS();
	void Print(void);
	void Print1(void);

};

Time::Time(int a, int b, int c)
{
	h = a;
	m = b;
	s = c;
}
Time::Time()
{
	h = m = s = 0;
}


Time::~Time() {}

void Time::Print(void)
{
	cout << h << ':' << m << ':' << s << endl;
}
void Time::Print1(void)
{
	cout << h << " годин " << m << " хвилин " << s << " секунд " << endl;
}
int Time::GetH()
{
	return h;
}
int Time::GetM()
{
	return m;
}
int Time::GetS()
{
	return s;
}

void Time::Seth(int b)
{
	if (b < 0 || b > 24)
	{
		cout << b << "Incorrect value" << endl;
	}

	h = b;
}
void Time::Setm(int a)
{
	if (a <= 0 || a > 59)
	{
		throw "Incorrect value";
	}
	m = a;
}

void Time::Sets(int c)
{
	if (c <= 0 || c > 59)
	{
		throw "Incorrect value";
	}
	s = c;
}


int main()
{
	setlocale(LC_CTYPE, "ukr");
	Time obj1(1, 2, 3);
	Time obj2;
	obj1.Print();

	obj2.Seth(2);
	obj2.Setm(3);
	obj2.Sets(4);
	obj2.Print1();

	getchar(); getchar();
	return 0;
}