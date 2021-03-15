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

/*
传值调用就像复印，形变实不变。
传引用调用就像一个人的大名和小名，形变实即变。
因为引用传递，它们占用的相同存储空间。
*/
int main()
{
	double r = 0, area = 0, c = 0;
	
	cout << "请输入半径：";

	cin >> r;

	calc(r,area,c);

	cout << "圆的周长为:" << c << "，圆的面积为:" << area;

	return 0;
}