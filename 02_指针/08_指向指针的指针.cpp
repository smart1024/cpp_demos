#include<iostream>
using namespace std;

/*
* 
ָ��ָ���ָ��
����pָ��һ��char����ָ��
*/
void main_08() {
	//���峣�ַ�ָ������
	const char* arr[] = {"abc","12345","language"};
	const char** p;
	int i;
	for ( i = 0; i < 3; i++)
	{
		p = arr + i;
		cout << *p << endl; //��������е�ÿ���ַ���
	}
}