#include <iostream>
using namespace std;

int main03()
{
	int a, b;
	int* p = &a;

	cout << "��������������" << endl;
	cin >> a >> b;
	cout << "p=&aʱ��" << endl;
	//��ӡָ�������ֵ������ӡ��ͨ����û������
	cout << "p=" << p << endl;
	cout << "&a=" << &a << endl;
	//ȡָ��ָ��ñ�����ֵ
	cout << "*p=" << *p << endl;
	//��ӡָ��ĵ�ַ
	cout << "&p=" << &p << endl;

	p = &b;
	cout << endl;
	cout << "p=&bʱ" << endl;
	cout << "p=" << p << endl;
	cout << "&b=" << &b << endl;
	cout << "*p=" << *p << endl;
	cout << "&p=" << &p << endl;
 	return 0;
}