#include<iostream>
using namespace std;
/*
1���ڲ�����ֻ���ڵ�ǰ�ļ���ʹ����static����eg�� static fun(int a,int b)
2���ⲿ����������static����Ϊ�ⲿ����

ʹ���ⲿ�������ⲿ���������һ�����Ľ׳�
*/
int main15()
{	
	//�����ⲿ������
	extern int f15(int i);
	//�����ⲿ������
	extern int a;

	cout << "����������n:";
	//ʹ���ⲿ����
	cin >> a;

	long s = 0;
	//ʹ���ⲿ����
	s = f15(a);

	cout << a << "!=" << s << endl;
	return 0;
}