#include <iostream>
using namespace std;

void C(int num) {
	double f, k;
	f = (num * (9.0 / 5.0)) + 32;
	k = num + 273.15;
	cout << "Temperature in Fahrenheit : " << f << endl;
	cout << "Temperature in Kelvin : " << k << endl;
}

void F(double num) {
	double c, k;
	c = (num - 32) * 5.0 / 9.0;
	k = c + 273.15;
	cout << "Temperature in Degree Celsius : " << c << endl;
	cout << "Temperature in Kelvin : " << k << endl;
}

void K(int num) {
	double f, c;
	c = num - 273.15;
	f = (c * 9.0 / 5.0) + 32;
	cout << "Temperature in Fahrenheit : " << f << endl;
	cout << "Temperature in Degree Celsius : " << c << endl;
}

int main()
{
	double n;
	char t;
	//cin >> n >> t;
	bool b = false;
	cout << "Enter temperature value and its original unit of measurement" << endl;
	while (!b) {
		cin >> n >> t;
		switch (t) {
		case 'C':
		case 'c':
			b = true;
			C(n);
			break;
		case 'F':
		case 'f':
			b = true;
			F(n);
			break;
		case 'K':
		case 'k':
			b = true;
			K(n);
			break;
		default:
			cout << "Invalid unit, please enter C, F, or K." << endl;
		}
	}
}
