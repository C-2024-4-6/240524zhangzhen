#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int m, n;
    cout << "请输入两个整数: ";
    cin >> m >> n;
    int result1 = gcd(m, n);
    int result2 = m * n / result1;
    cout << m << "和" << n << "的最大公约数是: "<< result1 << endl;
    cout << m << "和" << n << "的最小公倍数是:" << result2 << endl;
    return 0;
}