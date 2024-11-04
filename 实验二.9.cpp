#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	double n = 2.0;
	double sumN = 0.0;
	double sumM = 0.0;
	double day = 0.0;
	double aver = 0.0;
	for (a = 0.8; sumN < 100; n = n * 2, day++)
		sumN = sumN + n;
	sumM = (sumN - n / 2) * a;
	aver = sumM / (day - 1);
	cout << aver << endl;
}