#include<iostream>
using namespace std;

//�ⲿ�����Ķ��崦
int a = 0;

//�ⲿ�����Ķ��崦
int f15(int n) 
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}