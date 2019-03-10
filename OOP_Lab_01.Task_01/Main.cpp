#include <iostream>
#include <cmath>
//11

using namespace std;


class Kvadrat {

private:
	int ab;
	double st;
	double pl;
	double pe;

public:
	Kvadrat(int diagonal, int storona, double ploscha, double perimetr);
	Kvadrat();
	~Kvadrat();
	void Formula();


};

Kvadrat::Kvadrat(int diagonal, int storona, double ploscha, double perimetr)
{
	ab = diagonal;
	st = storona;
	pl = ploscha;
	pe = perimetr;
	diagonal = 4;

}

Kvadrat::Kvadrat()
{
	if (this->ab <= 0)
	{
		throw "Incorrect value";
	}
}

Kvadrat::~Kvadrat() {}


void Kvadrat::Formula()
{
	st = ab / (sqrt(2));
	cout << "Довжина сторони =  " << st << endl;
	pl = (ab*ab) / 2.;
	cout << "Площа =  " << pl << endl;
	pe = st * 4;
	cout << "Периметр =  " << pe << endl;
}


int main()
{
	setlocale(LC_CTYPE, "ukr");
	Kvadrat A(4, 0, 0, 0);

	A.Formula();
	getchar();
}







