#include<iostream>
#include<cstring>

using namespace std;

/*
返回指针的函数
*/
char* max(char* x,char* y) {//形参字符指针，返回值字符指针
	if (strcmp(x,y)>0)
	{
		return x;
	}
	else {
	
		return y;
	}
}

void main_10() {

	char c1[10], c2[10];
	char* s1 = c1, * s2 = c2;
	cout << "请输入字符串1：";
	cin >> c1;

	cout << "请输入字符串2：";
	cin >> c2;

	cout << "两个字符串中较大的是：";
	cout << max(s1, s2) << endl;
}