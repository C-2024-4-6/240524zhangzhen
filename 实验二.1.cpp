#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		c = c - 32;
		cout << c << endl;
	}
	else {
		cout << (int)c << endl;
	}
	return 0;
}