#include <iostream>

using namespace std;

class Date {
private:
	int MM;
	int DD;
	int YY;

public:
	Date(int dy, int mn, int yr) {
		DD = dy;
		MM = mn;
		YY = yr;
	}
	int getMM();
	void setMM(int mn);
	int getDD();
	void setDD(int dy);
	int getYY();
	void setYY(int yr);

	~Date() {}
};

int Date::getMM() {
	return Date::MM;
}
void Date::setMM(int mn) {
	MM = mn;
}
int Date::getDD() {
	return Date::DD;
}
void Date::setDD(int dy) {
	DD = dy;
}
int Date::getYY() {
	return Date::YY;
}
void Date::setYY(int yr) {
	Date::YY = yr;
}

int d, m, y;

void NextDD() {
	cout << "Наступний день\n";
	d = d + 1;
	if (d > 31) {
		m = m + 1;
		d = 1;
	}
	if (m > 12) {
		y = y + 1;
		m = 1;
	}
	cout << d << "." << m << "." << y << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "ukr");
	while (1) {
	b:
		cout << "Введіть день, місяць та рік \n";
		cin >> d >> m >> y;
		if (1 < d > 31 || 1 < m > 12) {
			cout << "Неправильно введена дата, спробуйте ще раз\n";
			goto b;
		}
		Date Mydate(d, m, y);
		d = Mydate.getDD();
		m = Mydate.getMM();
		y = Mydate.getYY();
		cout << d << "/" << m << "/" << y << "\n";
		cout << y << "-" << m << "-" << d << "\n";
		NextDD();
	}
	system("pause");
}