#include <iostream>
#include <iomanip>
using namespace std;
#include "mytemperature.h"
int main()
{
	double cel = 40, fah ;
	cout << setw(10) << "Celsius" << " " << setw(10) << "Fahrenheit" << " " << "|" << setw(10) << "Fahrenheit" << " " << setw(10) << "Celsius" << endl;
	for (cel = 40; cel >= 31  ; --cel)
	{
		fah = 10 * cel - 280;
		cout << setw(10)<< cel << " " <<setw(10)<< celsius_to_fah(cel) <<" " << "|" << setw(10) <<fah<<" " <<setw(10) << fahrenheit_to_cels(fah) << endl;
	}
}