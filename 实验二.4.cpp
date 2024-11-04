#include<iostream>
using namespace std;
int main()
{
	double x, y, z;
	char k;
	cout << "请输入第一个数字：";
	cin >> x;
	cout << "请输入运算符：";
	cin >> k;
	cout << "请输入第二个数字：";
	cin >> y;
	switch (k)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	case '*':
		cout << x * y << endl;
		break;
	case '/':
		if (y == 0)
		{
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << x / y << endl;
		}
		break;
	case '%':
		if (y == 0)
		{
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << (int)x % (int)y << endl;
		}
		break;
	default:
		cout << "输入的运算符不正确" << endl;
		break;
	}
	return 0;
}