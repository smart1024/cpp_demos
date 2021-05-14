#include<iostream>
using namespace std;

int max12(int x, int y, int z = -32768);

int main12()
{
	int i, j, k;
	cout << "请输入三个数:" << endl;
	cin >> i >> j >> k;
	cout << i << "和" << j << "中的大数为：" << max12(i, j) << endl;
	cout << i << "和" << j <<"和"<< k <<"中的大数为：" << max12(i, j,k) << endl;
}

int max12(int x,int y,int z) 
{
	int  temp = 0;
	temp = x > y ? x : y;
	return temp > z ? temp : z;
}
