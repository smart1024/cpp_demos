#include<iostream>
using namespace std;

int max12(int x, int y, int z = -32768);

int main12()
{
	int i, j, k;
	cout << "������������:" << endl;
	cin >> i >> j >> k;
	cout << i << "��" << j << "�еĴ���Ϊ��" << max12(i, j) << endl;
	cout << i << "��" << j <<"��"<< k <<"�еĴ���Ϊ��" << max12(i, j,k) << endl;
}

int max12(int x,int y,int z) 
{
	int  temp = 0;
	temp = x > y ? x : y;
	return temp > z ? temp : z;
}
