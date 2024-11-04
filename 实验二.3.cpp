#include<iostream>
using namespace std;
int main()
{
	double x = 0.0, y = 0.0, z = 0.0, c = 0.0;
	cin >> x >> y >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		c = x + y + z;
		cout << "三角形的周长为" << c << endl;
		if (x == y || x == z || y == z)
		{
			cout << "等腰三角形" << endl;
		}
	}
	else cout << "不能构成三角形" << endl;
}