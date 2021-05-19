#include <iostream>
using namespace std;
/*
数组指针：指向数组的指针int (*p)[3]

*/
void main06()
{
	int a[2][3] = { 1,2,3,4,5,6 };
	int* p, i, j;
	int(*q)[3];
	//p指向一维数组第0行第0列，也就是数组首地址，也就是指向a[0][0]元素，
	p = a[0];
	for ( i = 0; i < 2; i++)
	{
		for (j=0;j<3;j++)
		{
			cout << *(p + 3 * i + j) << endl;
		}
	}


	//q指向第0行，指向第0行的的一维数组，是指针的指针
	q = a;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			//q[i][j]第i行数组的第j个元素
			cout << q[i][j] << endl;
		}
	}
}