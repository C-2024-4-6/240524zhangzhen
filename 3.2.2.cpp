#include <iostream>
using namespace std;
bool is_Prime(int num) 
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    int total = 0;
    int num = 2;
    int n = 1;
    cout << "前两百个素数为：" << endl;
    while (total < 200) 
    {
        if (is_Prime(num)) 
        {
            cout << num << " ";
            total++;
        }
        if (total % 10 == 0)
        {
            cout << endl;
        }
        num++;
    }
    return 0;
}