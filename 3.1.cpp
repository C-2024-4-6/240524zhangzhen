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
    cout << "��������������: ";
    cin >> m >> n;
    int result1 = gcd(m, n);
    int result2 = m * n / result1;
    cout << m << "��" << n << "�����Լ����: "<< result1 << endl;
    cout << m << "��" << n << "����С��������:" << result2 << endl;
    return 0;
}