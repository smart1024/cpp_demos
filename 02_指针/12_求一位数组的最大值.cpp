#include <iostream>
using namespace std;

int max(int x[],int n)  //����1���������� ����2������Ԫ�ظ���
{
	int i, m;
	m = x[0];
	for (i = 0; i < n; i++)
	{
		if (m < x[i]) m = x[i];
	}
	return m;
}

//ʹ��ָ�����һά����
int max1(int* x, int n) 
{
	int i,m;
	m = *x;
	for ( i = 0; i < n; i++)
	{
		if (m < *(x + i)) m = *(x + i);
	}
	return m;
}

void main_12() 
{
	int i, array[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "The array is" << endl;
	for ( i = 0; i < 10; i++)
	{
		cout << array[i] << ",";
	}
	cout << endl;
	cout << " The max is:" << endl;
	cout <<"max(array, 10)�����ֵΪ��" << max(array, 10) << endl;
	cout << "max1(array, 10)�����ֵΪ��" << max1(array, 10) << endl;
}