#include<iostream>

using namespace std;

int max(int x, int y)
{
	int z;
	if (x>y)
	{
		z = x;
	}
	else {
		z = y;
	}

	return z;
}

void main_09()
{
	int(*p)(int, int); //p是一个指向两个整形参数函数的整形指针

	int  a, b, c;

	p = max;  //指针指向max函数

	cin >> a >> b;

	c = (*p)(a, b); //调用p等价于调用max

	cout << "a=" << a << " b=" << b << " c=" << c <<endl;

}