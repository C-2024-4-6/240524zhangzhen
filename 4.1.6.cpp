#include <iostream>
using namespace std;
#include <cctype>
void count(const char s[], int counts[])
{
	char a[100];
	for (int i = 0; i < 100; ++i)
	{
		a[i] = (char)tolower(s[i]);
	}	
	
	int num[100];
	for (int g = 0; g < 26; ++g)
	{
		for (int p = 0,m=0; p < 100; ++p)
		{
			if (a[p] == counts[g])
			{
				num[g] = ++m;

			}
			if (num[g] == -858993460)
			{
				num[g] =0;
			}
		}
	}

	for (int g = 0; g < 26; ++g)
	{
		if (num[g] != 0)
		{
			cout << (char)counts[g]<<":" << num[g] <<" times"<<endl;
		}
	}
}
int main()
{
	char s1[100];
    int counts[26];
	for (int n = 0; n < 26; ++n)
	{
		counts[n] = n + 'a';
	}
	cin.getline(s1, 100);
	count(s1,counts);
	return 0;
}