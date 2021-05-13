#include<iostream>
using namespace std;

int fun_jc(int n) 
{
	int z;
	if (n > 1) {
		z = n* fun_jc(n - 1);
	}else
	{
		z = 1;
	}

	return z;
}

int main_07() 
{
	cout << "10! = " << fun_jc(10) << endl;
	return 0;
}