#include <iostream>
using namespace std;
/*
����ָ�룺ָ�������ָ��int (*p)[3]

*/
void main06()
{
	int a[2][3] = { 1,2,3,4,5,6 };
	int* p, i, j;
	int(*q)[3];
	//pָ��һά�����0�е�0�У�Ҳ���������׵�ַ��Ҳ����ָ��a[0][0]Ԫ�أ�
	p = a[0];
	for ( i = 0; i < 2; i++)
	{
		for (j=0;j<3;j++)
		{
			cout << *(p + 3 * i + j) << endl;
		}
	}


	//qָ���0�У�ָ���0�еĵ�һά���飬��ָ���ָ��
	q = a;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			//q[i][j]��i������ĵ�j��Ԫ��
			cout << q[i][j] << endl;
		}
	}
}