#include <iostream>
using namespace std;

/*将str2指向的字符数组每个元素赋值给str1指向的字符数组，从而实现拷贝*/
void copyStr(char* str1, char* str2) 
{	//指针没到结束标识继续循环赋值
	for (;*str2 != '\0'; str1++,str2++)
	{
		*str1 = *str2;
	}
	//添加结束标识符
	*str1 = '\0';
}

void main_07()
{
	int c[3] = {1,10,100};
	char a[10];
	char b[4] = "abc";
	copyStr(a,b);
	//打印字符数组
	cout << "a====" << a << endl; //a====abc 可见打印字符数组输出的不是地址，而是字符串

	cout << "c====" << c << endl; //c====008FF828
}


