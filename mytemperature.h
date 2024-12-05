#include <iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double fah;
	return fah = (9* cel/5 ) + 32;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	return cel = (fah - 32) * 5 / 9;
}