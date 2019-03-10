#include <iostream>
#include <cmath>
//8
using namespace std;
const double pi = 3.14159265;

class Cone {

private:
	double radius;
	double height;

public:

	Cone() { radius = height = 0; }

	Cone(double r, double h)
	{
		radius = r;
		height = h;
	}

	void setRadius(double r)
	{
		radius = r;
	}

	void setHeight(double h)
	{
		height = h;
	}


	double getRadius()
	{
		return radius;
	}


	double getHeight()
	{
		return height;
	}

	double area()
	{
		double l = sqrt(height*height + radius * radius);
		return pi * radius*(radius + l);
	}

	double volume()
	{
		return pi * radius*radius*height / 3;
	}

};

int main()
{
	setlocale(LC_CTYPE, "ukr");

	Cone c1(3, 7);


	cout << "Площа поверхні: " << c1.area() << endl;
	cout << "Об'єм: " << c1.volume() << endl;

	getchar();
	return 0;

}
