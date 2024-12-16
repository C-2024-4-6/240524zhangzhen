#include <iostream>
using namespace std;

class Student 
{
public:
    Student(int n, int s) : num(n), score(s) 
    {
        ;
    }
    int getScore() 
    { 
        return score; 
    }
    int getNum() 
    { 
        return num;
    }
private:
    int num;
    int score;
};

void max(Student* students) 
{
    int maxScore = students[0].getScore();
    int maxIndex = 0;
    for (int i = 1; i < 5; ++i) 
    {
        if (students[i].getScore() > maxScore) 
        {
            maxScore = students[i].getScore();
            maxIndex = i;
        }
    }
    cout << "最高成绩者的学号是: " << students[maxIndex].getNum() << endl;
}

int main() 
{
    Student students[5] = { Student(897, 46), Student(612, 95), Student(623, 56), Student(956, 64), Student(645, 31) };
    max(students);
    return 0;
}