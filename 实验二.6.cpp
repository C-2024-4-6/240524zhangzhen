#include<iostream>
using namespace std;
int main()
{
	int a, b, c, m, n, x, y;
	cout << "请确保输入的是两个正整数！" << endl;
	cin >> a >> b;
	n = a;
	x = b;
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}

	while ((m = a % b) != 0)
	{
		a = b;
		b = m;
	}
	cout << "最大公约数为" << '\n' << b << endl;
	y = n * x / b;
	cout << "最小公倍数为" << '\n' << y << endl;
	return 0;
}