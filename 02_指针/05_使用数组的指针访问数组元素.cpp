#include <iostream>
using namespace std;
/*
使用指针访问数组
*/
void main05()
{
	int array[10];
	int* p, i;
	cout << "请输入10个数字:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
		cout << endl;
	}

	for (p =array; p < array+10; p++)
	{
		cout << "*p="<< *p << endl;
	}

}