#include <iostream>
using namespace std;
#include <cstring>
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= (len2 - len1); ++i) 
    {
        int j;
        for (j = 0; j < len1; ++j) 
        {
            if (s2[i + j] != s1[j]) 
            {
                break;
            }
        }
        if (j == len1) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    char s1[100];
    char s2[100];    
    cout << "Enter list1: ";   
    cin.getline (s1,100);    
    cout << "Enter list2: ";
    cin.getline (s2,100);
    int result = indexOf(s1, s2);      
    cout << "indexOf(s1,s2) is " << result << endl;            
    return 0;
}
