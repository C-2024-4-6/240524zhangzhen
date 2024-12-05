#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int a = 2;
	if (num <= 1)  cout << "true" << endl;
	else
	{
		for ( a = 2; a <= num; ++a)
		{
			if (num % a == 0) break;
		}
		a >= num ? cout << "true" : cout << "false";
	}
	return true;
}
int main()
{
	int a;
	cin >> a;
	is_prime(a);
	return 0;
}