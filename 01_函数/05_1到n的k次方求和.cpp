//计算1^k + 2^k + 3^k + … + n^k的值
#include<iostream>
using namespace std;
int powers(int n,int k) //k个n相乘
{
	int m = 1;
	for (int i = 0; i < k; i++)
	{
		m *= n;
	}
	return m;
}

int sump(int k,int n)  //求和1^k到n^k之和
{	
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += powers(i,k);
	}
	return sum;
}

int main_05()
{
	int k = 4, n = 10;
	cout << "1到" << n << "的" << k << "次幂之和为: " << sump(4, 10) << endl;
	return 0;
}

