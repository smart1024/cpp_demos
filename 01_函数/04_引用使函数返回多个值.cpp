#include<iostream>
using namespace std;

/*
引用实现了一个函数返回多个值功能
*/
void calc(double r,double&area,double&c)
{
	double p = 3.14;
	area = p * r * r;
	c = 2 * p * r;
}

int main()
{
	double r = 0, area = 0, c = 0;
	
	cout << "请输入半径：";

	cin >> r;

	calc(r,area,c);

	cout << "圆的周长为:" << c << "，圆的面积为:" << area;

	return 0;
}