
#include <iostream>

using namespace std;

int fun_fab(int n) 
{
	int z;
	if (n>2)
	{
		z = fun_fab(n - 1) + fun_fab(n - 2);
	}
	else if(n==0) {
		z = 0;
	}
	else
	{
		z = 1;
	}
	return z;
}

int main_08()
{
	cout << "쳲����������еĵ�20��Ϊ��" << fun_fab(20) << endl;
	return 0;
}