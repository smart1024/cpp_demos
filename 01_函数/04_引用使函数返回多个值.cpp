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

/*
��ֵ���þ���ӡ���α�ʵ���䡣
�����õ��þ���һ���˵Ĵ�����С�����α�ʵ���䡣
��Ϊ���ô��ݣ�����ռ�õ���ͬ�洢�ռ䡣
*/
int main()
{
	double r = 0, area = 0, c = 0;
	
	cout << "������뾶��";

	cin >> r;

	calc(r,area,c);

	cout << "Բ���ܳ�Ϊ:" << c << "��Բ�����Ϊ:" << area;

	return 0;
}