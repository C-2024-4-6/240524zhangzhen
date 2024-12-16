#include<iostream>
using namespace std;
class Time            
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void settime(int hour=0,int minute=0,int sec=0)
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time tl;           
	tl.settime();
}
