#include <iostream>
using namespace std;

/*形参y,z带默认值*/
void point(int x, int y=0, int z =0)
{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}

int main_11()
{
	int x, y, z;
	cout << "请输入x，y，z坐标" << endl;
	cin >> x >> y >> z;
	point(x);
	point(x, y);
	point(x, y, z);
	return 0;
}