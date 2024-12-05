#include <iostream>
using namespace std;
void swap(int& refa, int& refb)
{
	int temp;
	temp = refa;
	refa = refb;
	refb = temp;
}
int exchange(int*list,int listSize)
{
    for (int i = 0; i < listSize - 1; i++) 
	{
        for (int j = 0; j < listSize - i - 1; j++) 
		{
            if (list[j] > list[j + 1]) 
			{
                swap(list[j], list[j + 1]);
            }
        }
    }
	cout << "after exchange" << endl;
	for (int j = 0; j < listSize; ++j)
	{
		cout << &list[j] << " ";
	}
	return 0;
}
int main()
{
	int* p;
	int m;
	cout << "The numbers of element:" << endl;
	cin >> m;
	p = new int[m];
	cout << "The number:" << endl;
	for (int i = 0; i < m; ++i)
	{
		cin >> p[i];
	}
	exchange(p, m);
	delete[] p;
	return 0;
}