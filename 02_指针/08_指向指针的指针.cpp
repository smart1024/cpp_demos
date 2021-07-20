#include<iostream>
using namespace std;

/*
* 
指向指针的指针
变量p指向一个char类型指针
*/
void main_08() {
	//定义常字符指针数组
	const char* arr[] = {"abc","12345","language"};
	const char** p;
	int i;
	for ( i = 0; i < 3; i++)
	{
		p = arr + i;
		cout << *p << endl; //输出数组中的每个字符串
	}
}