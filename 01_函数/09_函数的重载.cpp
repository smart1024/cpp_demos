#include<iostream>
using namespace std;

int max(int,int);
double max(double,double);
int max(int, int, int);

int main_09()
{
	int i = 5, j = 9, k = 10, p = 0;
	double m = 33.4, n = 8.9, q = 0;

	p = max(i,j);
	cout << i << "," << j << "两个数中的大数为：" << p << endl;
	p = max(i, j, k);
	cout << i << "," << j << "," << k << "三个数中的大数为：" << p << endl;
	q = max(m, n);
	cout << m << "," << n << "两个数中的大数为：" << q << endl;
	return 0;
}

int max(int x, int y) 
{
	return x > y ? x : y;
}

double max(double x, double y) 
{
	return x > y ? x : y;
}

int max(int x, int y, int z)
{
	int temp = (x > y ? x : y);
	return temp > z ? temp : z;
}
