#include <iostream>
using namespace std;

int max(int x[],int n)  //参数1：整形数组 参数2：数组元素个数
{
	int i, m;
	m = x[0];
	for (i = 0; i < n; i++)
	{
		if (m < x[i]) m = x[i];
	}
	return m;
}

void main() 
{
	int i, array[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "The array is" << endl;
	for ( i = 0; i < 10; i++)
	{
		cout << array[i] << ",";
	}
	cout << endl;
	cout << " The max is:" << endl;
	cout << max(array, 10) << endl;
}