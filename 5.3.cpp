#include <iostream>
using namespace std;
class Volume
{
private:
	int length1, length2, length3;
	int width1, width2, width3;
	int height1, height2, height3;
	int volume1, volume2, volume3;
public:
	int get_volume()
	{
		cout << "�������һ��������ĳ�������" << endl;
		cin >> length1 >> width1 >> height1;
		cout << "������ڶ���������ĳ�������" << endl;
		cin >> length2 >> width2 >> height2;
		cout << "�����������������ĳ�������" << endl;
		cin >> length3 >> width3 >> height3;
		volume1 = length1 * width1 * height1;
		volume2 = length2 * width2 * height2;
		volume3 = length3 * width3 * height3;
		cout << "��һ������������Ϊ" << volume1<<endl;
		cout << "�ڶ�������������Ϊ" << volume2<<endl;
		cout << "����������������Ϊ" << volume3<<endl;
		return 0;
	}
};
int main()
{
	Volume kasen;
	kasen.get_volume();
	return 0;
}