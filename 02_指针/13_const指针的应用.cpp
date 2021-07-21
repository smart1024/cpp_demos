#include<iostream>
using namespace std;

void main_13() 
{
	int a = 1;
	int b = 2;
	int c = 3;

	//const修饰指针指向的内容：内容为常量
	const int* p1 = 0;
	//p1是指针变量，指向内容不可变
	p1 = &a;
	a = 0; 

	//*p1 = 0; 指针指向的内容是常量不允许修改


	//const修饰指针p2，指针的指向不能改变，指向的内容可变
	int* const p2 = &b;
	*p2 = 0;

	//p2 = &c;  p2是指针常量，指向不可变
}