#include <iostream>
using namespace std;

//p指向一个数组：数组指针
int* find(int(*p)[2],int num) //参数1:数组指针 参数2：要查找的序号
{
	int* point;
	//num每次变换p都指向一个2个元素的一维数组，很显然是每行有2列的二维数组的行指针
	point = *(p + num);  //获取第num行的一维数组
	return point;
}

void main_11() 
{
	int value[3][2] = { {70,80},{80,90},{90,100} };
	int* p;
	int num, i;
	cout << "请输入要访问的序号：" << endl; //注意不要越界
	cin >> num;
	p = find(value, num);

	cout << "序号" << num << "的成绩分别是：" << endl;

	for (i = 0; i < 2; i++)
	{
		cout << *(p + i) << endl;
	}
}