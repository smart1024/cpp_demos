#include<iostream>
using namespace std;

/*
��̬������ֵ��ȫ�ֵģ�ÿ�ε��ö�ʹ����ͬ�ڴ�ռ䣬��������ԭ����ֵ
*/
void fun13(int a)
{
	cout << "��" << a + 1 << "������" << endl;
	int x = 0;
	static int y = 0;
	x = x + 1;
	y = y + 1;
	cout << "�Զ�����x=" << x << endl;
	cout << "��̬����y=" << y << endl;
}

int main13()
{
	
	for (int i = 0; i < 3; i++)
	{
		fun13(i);
	}
	return 0;
}