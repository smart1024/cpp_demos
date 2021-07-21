#include <iostream>
#include <cstring>
using namespace std;

//形参1：数组指针，指向二维数组，二维数组每行最多为10列的一维数组，形参2:输入字符串数目
char* fun(char(*a)[10],int num)  
{
	char* p = a[0]; //p指向第0行的首地址
	int i;
	for ( i = 0; i < num; i++)
	{
		if (strlen(a[i])>strlen(p)) 
		{
			p = a[i]; //p指向第i行的首地址
		}
	}
	return p;
}

/*
1、要在函数外部改变变量值必须传地址或者引用，值传递作用域在函数内部，无法改变实参
2、不能使用max = &p；因为会改变指针指向，无法传回实参
*/
void fun1(char(*a)[10], int num,char**max ) 
{
	char* p = a[0];
	int i;

	for ( i = 0; i < num; i++)
	{
		if (strlen(p) < strlen(a[i])) {
			p = a[i];
		}
	}
	*max = p; //改变实参的值
}

void main_14() {
	char s[5][10], * ps;
	int  i = 0;
	cout << "请输入字符串" << endl;
	cin >> s[i];

	while (!strcmp(s[i],"**")==0) //输入**就跳出循环，第5次输入**才行，否则循环不停访问非法地址
	{
		i++;
		cin >> s[i];
	}

	//ps = fun(s, i); //ps指向最长字符串

	fun1(s,i,&ps); //必须把变量的地址传过去，因为函数形参作用域在函数内部，外部无法访问

	cout << "最长的字符串是" << ps <<endl;
}


