#include <iostream>
using namespace std;
#include <cstring>
int indexof(const char* s1, const char* s2)
{
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int j = 0;
	for (int i = 0; i <= lens2 - lens1; ++i)
	{
		for ( j = 0; j < lens1; ++j)
		{
			if (s1[j] != s2[i + j])
			{
				break;
			}
		}
		if (j == lens1)
		{
			return i;
		}

	}
	return -1;
}
int main()
{
	char s1[100];
	char s2[100];
	cout << "Enter list1: ";
	cin.getline(s1, 100);
	cout << "Enter list2: ";
	cin.getline(s2, 100);
	int result = indexof(s1, s2);
	cout << "indexOf(s1,s2) is " << result << endl;
	return 0;
}