#include<iostream>
using namespace std;
#include<cmath> //包含math头文件

//判断是不是质数（大于1的自然数，除了1和它本身不再有其他因数的数）
int prime(int m) 
{
	for (int i = 2; i <= sqrt(m); i++)
	if (m % i == 0) return 0;
	return 1;
}

int main()
{
	int m;
	cout << "请输入一个正整数:";
	cin >> m;
	if (prime(m))
	{
		cout << m << "是质数\n";
	}
	else 
	{
		cout << m << "不是质数\n";
	}
	return 0;
}
