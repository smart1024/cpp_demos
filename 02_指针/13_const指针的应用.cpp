#include<iostream>
using namespace std;

void main_13() 
{
	int a = 1;
	int b = 2;
	int c = 3;

	//const����ָ��ָ������ݣ�����Ϊ����
	const int* p1 = 0;
	//p1��ָ�������ָ�����ݲ��ɱ�
	p1 = &a;
	a = 0; 

	//*p1 = 0; ָ��ָ��������ǳ����������޸�


	//const����ָ��p2��ָ���ָ���ܸı䣬ָ������ݿɱ�
	int* const p2 = &b;
	*p2 = 0;

	//p2 = &c;  p2��ָ�볣����ָ�򲻿ɱ�
}