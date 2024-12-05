#include <iostream>
using namespace std;
#include<cstring>
int parseHex(const char* const hexString) 
{
    int decimalValue = 0;
    int length = strlen(hexString);

    for (int i = 0; i < length; ++i) 
    {
        int digit;
        if (hexString[i] >= '0' && hexString[i] <= '9') 
        {
            digit = hexString[i] - '0';
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            digit = hexString[i] - 'A' + 10;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') 
        {
            digit = hexString[i] - 'a' + 10;
        }

        decimalValue += digit * (1 << (4 * (length - 1 - i)));
    }

    return decimalValue;
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    int result = parseHex(str);
    cout << result << endl;
    return 0;
}

