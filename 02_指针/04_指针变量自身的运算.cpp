#include <iostream>

using namespace std;

int main04()
{
	int* p1, * p2, a = 1, b = 10;
	p1 = &a;
	p2 = &b;
	cout << "p1=" << p1 << endl;
	cout << "p2=" << p2 << endl;
	cout << "p1指向变量的值是" << *p1 << endl;
	cout << "p2指向变量的值是" << *p2 << endl;
	//p1-1指向的变量不定 很可能是垃圾数据
	cout << "p1-1指向变量的值是" << *(p1 - 1) << endl;
	cout << "p1指向变量的值-1是" << *p1 - 1 << endl;
	return 0;
}