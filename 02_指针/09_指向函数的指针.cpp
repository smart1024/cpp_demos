#include<iostream>

using namespace std;

int max(int x, int y)
{
	int z;
	if (x>y)
	{
		z = x;
	}
	else {
		z = y;
	}

	return z;
}

void main_09()
{
	int(*p)(int, int); //p��һ��ָ���������β�������������ָ��

	int  a, b, c;

	p = max;  //ָ��ָ��max����

	cin >> a >> b;

	c = (*p)(a, b); //����p�ȼ��ڵ���max

	cout << "a=" << a << " b=" << b << " c=" << c <<endl;

}