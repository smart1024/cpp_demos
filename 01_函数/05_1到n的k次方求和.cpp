//����1^k + 2^k + 3^k + �� + n^k��ֵ
#include<iostream>
using namespace std;
int powers(int n,int k) //k��n���
{
	int m = 1;
	for (int i = 0; i < k; i++)
	{
		m *= n;
	}
	return m;
}

int sump(int k,int n)  //���1^k��n^k֮��
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
	cout << "1��" << n << "��" << k << "����֮��Ϊ: " << sump(4, 10) << endl;
	return 0;
}

