#include<iostream>
using namespace std;

/*
辗转相除法求最大公约数
1、如果被除数小于除数就交换，否则一直除以余数，直到能整除,最后的除数为最大公约数
1、求24和60的最大公约数，先分解质因数，
得24=2×2×2×3，60=2×2×3×5，24与60的全部公有的质因数是2、2、3，
它们的积是2×2×3=12，所以，（24，60）=12

2、最小公倍数
提取公有的质因数 2,2,3，24独有质数为2,60独有的质数5，所以最小公倍数为2*2*3*2*5 = 120；

求6和15的最小公倍数
6 = 2*3   
15 = 3*5

公有3 ，6独有 2   15独有5 ，最小公倍数为3*2*5 = 30；
最大公约数 3

可见最大公约数*最小公倍数 = 两个数的积
*/

int gcd;
/*最大公约数*/
void mui(int m,int n) 
{
	if (m < n) 
	{
		mui(n, m);
	}
	else
	{
		int temp;
		while (n!=0) {
			temp = m % n;
			m = n;
			n = temp;
		}
		gcd = m;
	}	
}

/*最小公倍数*/
int dividor(int m,int n)
{
	int temp;
	temp = m * n / gcd;
	return temp;
}

int main19()
{
	mui(6,15);
	int d = dividor(6,15);
	cout << "最大公约数为：" << gcd << endl;
	cout << "最小公倍数为：" << d << endl;
	return 0;
}