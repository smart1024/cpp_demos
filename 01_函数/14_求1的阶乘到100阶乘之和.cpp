#include <iostream>
using namespace std;

/*���þ�̬���������ϴν׳˵�ֵ*/
/*
staticӦ�ó���
1�����������ϴε��ý��
2�����������ϴ�ʹ��ֵ
3����̬ȫ�ֱ���������Ϊ��ǰ�ļ�
*/
int f14(int n)
{
	static int s = 1;
	s = s* n;
	return s;
}


int main14()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += f14(i);
	}

	cout << "1!+2!+3!+....+10!=" << sum << endl;
	return 0;
}