#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    for (int i = 0; i < size1; i++)
    {
        list3[i] = list1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        list3[size1 + i] = list2[i];
    }
    bool change;
    int t;
    do
    {
        change = false;
        for (int j = 0; j < size1 + size2 - 1; j++)
        {
            if (list3[j] > list3[j + 1])
            {
                t = list3[j];
                list3[j] = list3[j + 1];
                list3[j + 1] = t;
                change = true;
            }
        }
    } 
    while (change);
}

int main()
{
    int size1, size2, list1[80], list2[80], list3[160];
    cout << "Eenter list1:";
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    cout << "Eenter list2:";
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    cout << "The merge list is ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << list3[i] << " ";
    }

    return 0;
}
