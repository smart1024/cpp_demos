#include <iostream>
using namespace std;
/*
ʹ��ָ���������
*/
void main05()
{
	int array[10];
	int* p, i;
	cout << "������10������:" << endl;
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