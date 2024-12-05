#include <iostream>
using namespace std;
int main()
{
    bool box[100];
    bool close = false;
    int boxNum;
    for (int i = 0; i <= 99; i++)
    {
        box[i] = false;
    }
    for (int StudentNum = 1; StudentNum <= 100; ++StudentNum)
    {
        int BOXNUM = StudentNum;
        for (; BOXNUM <= 100;)
        {
            
            box[BOXNUM - 1] = !box[BOXNUM - 1];
            BOXNUM = BOXNUM + StudentNum;
        }
    }
    for (int p = 0; p < 100; ++p)
    {
        if (box[p])
        {
            cout << p + 1 << " ";
        }
        

    }
    return 0;
}