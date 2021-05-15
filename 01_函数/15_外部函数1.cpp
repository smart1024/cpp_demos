#include<iostream>
using namespace std;

//外部变量的定义处
int a = 0;

//外部函数的定义处
int f15(int n) 
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}