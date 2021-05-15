#include<iostream>
using namespace std;
/*
1、内部函数只能在当前文件中使用用static修饰eg： static fun(int a,int b)
2、外部函数：不用static修饰为外部函数

使用外部变量和外部函数完成求一个数的阶乘
*/
int main15()
{	
	//声明外部函数处
	extern int f15(int i);
	//声明外部变量处
	extern int a;

	cout << "请输入整数n:";
	//使用外部变量
	cin >> a;

	long s = 0;
	//使用外部函数
	s = f15(a);

	cout << a << "!=" << s << endl;
	return 0;
}