#include <iostream>
using namespace std;

/*�β�y,z��Ĭ��ֵ*/
void point(int x, int y=0, int z =0)
{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}

int main_11()
{
	int x, y, z;
	cout << "������x��y��z����" << endl;
	cin >> x >> y >> z;
	point(x);
	point(x, y);
	point(x, y, z);
	return 0;
}