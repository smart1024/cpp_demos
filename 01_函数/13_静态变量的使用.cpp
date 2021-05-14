#include<iostream>
using namespace std;

/*
静态变量的值是全局的，每次调用都使用相同内存空间，变量保存原来的值
*/
void fun13(int a)
{
	cout << "第" << a + 1 << "调次用" << endl;
	int x = 0;
	static int y = 0;
	x = x + 1;
	y = y + 1;
	cout << "自动变量x=" << x << endl;
	cout << "静态变量y=" << y << endl;
}

int main13()
{
	
	for (int i = 0; i < 3; i++)
	{
		fun13(i);
	}
	return 0;
}