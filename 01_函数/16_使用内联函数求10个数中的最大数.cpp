#include<iostream>
using namespace std;
//��������ֻ���������������������Ƿ����������������ɱ���������
inline int m16(int, int);

/*
1��������������:�ռ任ʱ��
2��ֻ�м򵥡�Ƶ�����õĺ������б�Ҫ����Ϊ��������
3�������������ܰ���ѭ����switch���
4���������ǰ��������
5���������쳣
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

	cout << "10�����������Ϊ:" << tmp << endl;
	return 0;
}

inline int m16(int x,int y) 
{
	return x > y ? x : y;
}



