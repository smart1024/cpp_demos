#include<iostream>
using namespace std;

/*
����ʵ����һ���������ض��ֵ����
*/
void calc(double r,double&area,double&c)
{
	double p = 3.14;
	area = p * r * r;
	c = 2 * p * r;
}

int main()
{
	double r = 0, area = 0, c = 0;
	
	cout << "������뾶��";

	cin >> r;

	calc(r,area,c);

	cout << "Բ���ܳ�Ϊ:" << c << "��Բ�����Ϊ:" << area;

	return 0;
}