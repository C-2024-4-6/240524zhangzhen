#include <iostream>
using namespace std;
void swap(double& refa, double& refb)
{
	double temp;
	temp = refa;
	refa = refb;
	refb = temp;
}
int main()
{
	double list[10];
	int listSize = 10;
	for (int j = 0; j < 10; ++j)
	{
		cin >> list[j];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	} 
	while (changed);
	for (int j = 0; j < 10; ++j)
	{
		cout << list[j] << endl;
	}
	return 0;
}