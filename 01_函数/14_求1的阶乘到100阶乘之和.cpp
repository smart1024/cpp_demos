#include <iostream>
using namespace std;

/*巧用静态变量保留上次阶乘的值*/
/*
static应用场景
1、保留函数上次调用结果
2、保留变量上次使用值
3、静态全局变量作用域为当前文件
*/
int f14(int n)
{
	static int s = 1;
	s = s* n;
	return s;
}


int main14()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += f14(i);
	}

	cout << "1!+2!+3!+....+10!=" << sum << endl;
	return 0;
}