#include<iostream>
using namespace std;

double area(double rad) 
{
	double s = 0;
	s = 3.14 * rad * rad;
	return s;
}

double area(double w,double h)
{
	double s = 0;
	s = w * h;
	return s;
}

double area(double i,double j,double h)
{
	double	s = 0;
	s = (i + j) * h / 2;
	return s;
}

int main_10()
{
	double i = 3, j = 4, k = 5,a1;
	a1 = area(i);
	cout << "Բ�ĵ����Ϊ��" << a1 << endl;
	a1 = area(i,j);
	cout << "���ε����Ϊ��" << a1 << endl;
	a1 = area(i,j,k);
	cout << "�����ε����Ϊ��" << a1 << endl;
	return 0;
}


