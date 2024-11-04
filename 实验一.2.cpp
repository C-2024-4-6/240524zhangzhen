#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r = 0.0, h = 0.0;
	double V = 0.0;
	const double pi = acos(-1.0);
	cin >> r >> h;
	cout << "圆锥的底半径为" << r << '\t' << "圆锥的高为" << h << endl;
	V = (1.0 / 3.0) * pi * r * r * h;
	cout << "圆锥的体积为" << V << endl;
	return 0;
}