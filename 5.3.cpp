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
		cout << "请输入第一个长方体的长，宽，高" << endl;
		cin >> length1 >> width1 >> height1;
		cout << "请输入第二个长方体的长，宽，高" << endl;
		cin >> length2 >> width2 >> height2;
		cout << "请输入第三个长方体的长，宽，高" << endl;
		cin >> length3 >> width3 >> height3;
		volume1 = length1 * width1 * height1;
		volume2 = length2 * width2 * height2;
		volume3 = length3 * width3 * height3;
		cout << "第一个长方体的体积为" << volume1<<endl;
		cout << "第二个长方体的体积为" << volume2<<endl;
		cout << "第三个长方体的体积为" << volume3<<endl;
		return 0;
	}
};
int main()
{
	Volume kasen;
	kasen.get_volume();
	return 0;
}