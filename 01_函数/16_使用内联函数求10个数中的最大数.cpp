#include<iostream>
using namespace std;
//内联函数只是向编译器提出内联请求，是否当做内联函数处理由编译器决定
inline int m16(int, int);

int main() 
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



