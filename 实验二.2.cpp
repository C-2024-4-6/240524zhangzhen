#include<iostream>
using namespace std;
int main()
{
	double x = 0.0, y = 0.0;
	cin >> x;
	if (0.0 < x < 10.0)
	{
		if (x < 1.0) y = 3.0 - 2.0 * x, cout << "y=" << y << endl;
		else if (x < 5.0) y = 2.0 / (4.0 * x) + 1.0, cout << "y=" << y << endl;
		else  y = x * x, cout << "y=" << y << endl;

	}
	return 0;
}