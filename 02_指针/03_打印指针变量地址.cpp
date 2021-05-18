#include <iostream>
using namespace std;

int main03()
{
	int a, b;
	int* p = &a;

	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	cout << "p=&a时：" << endl;
	//打印指针变量的值，跟打印普通变量没有区别
	cout << "p=" << p << endl;
	cout << "&a=" << &a << endl;
	//取指针指向得变量的值
	cout << "*p=" << *p << endl;
	//打印指针的地址
	cout << "&p=" << &p << endl;

	p = &b;
	cout << endl;
	cout << "p=&b时" << endl;
	cout << "p=" << p << endl;
	cout << "&b=" << &b << endl;
	cout << "*p=" << *p << endl;
	cout << "&p=" << &p << endl;
 	return 0;
}