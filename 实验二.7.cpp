#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 0;
    for (a = 1; a < 6; ++a, cout << endl)
        for (b = 0; b < a; ++b)
        {
            cout << '*';
        }
    return 0;
}