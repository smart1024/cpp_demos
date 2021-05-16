#include<iostream>
using namespace std;
//内联函数只是向编译器提出内联请求，是否当做内联函数处理由编译器决定
inline int m16(int, int);

/*
1、内联函数本质:空间换时间
2、只有简单、频繁调用的函数才有必要声明为内联函数
3、内联函数不能包含循环、switch语句
4、必须调用前声明或定义
5、不能抛异常
*/
int main16() 
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	int tmp = a[0];
	for (int i = 1; i < 10; i++)
	{
		tmp = m16(tmp,a[i]);
	}

	cout << "10个数中最大数为:" << tmp << endl;
	return 0;
}

inline int m16(int x,int y) 
{
	return x > y ? x : y;
}



