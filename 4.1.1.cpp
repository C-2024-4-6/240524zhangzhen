#include <iostream>
int main() 
{
    int numbers[10];
    int uniqueNumbers[10];
    int uniqueCount = 0;

    std::cout << "请输入10个数：" << std::endl;
    for (int i = 0; i < 10; ++i) 
    {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        bool isUnique = true;
        for (int j = 0; j < uniqueCount; ++j) 
        {
            if (numbers[i] == uniqueNumbers[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            uniqueNumbers[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }

    std::cout << "不同的数为：" << std::endl;
    for (int i = 0; i < uniqueCount; ++i) 
    {
        std::cout << uniqueNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}