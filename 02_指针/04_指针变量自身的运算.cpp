#include <iostream>

using namespace std;

int main04()
{
	int* p1, * p2, a = 1, b = 10;
	p1 = &a;
	p2 = &b;
	cout << "p1=" << p1 << endl;
	cout << "p2=" << p2 << endl;
	cout << "p1ָ�������ֵ��" << *p1 << endl;
	cout << "p2ָ�������ֵ��" << *p2 << endl;
	//p1-1ָ��ı������� �ܿ�������������
	cout << "p1-1ָ�������ֵ��" << *(p1 - 1) << endl;
	cout << "p1ָ�������ֵ-1��" << *p1 - 1 << endl;
	return 0;
}