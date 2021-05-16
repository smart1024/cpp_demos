#include <iostream>
using namespace std;
//宏定义不是语句不以;号结尾

//不带参数宏定义
#define PI 3.14

//带有参数宏定义
#define Area(r) PI*r*r

int	main17()
{	
	float x, area;
	cout << "请输入半径:";
	cin >> x;
	area = Area(x);
	cout << "x=" << x << "，area=" << area << endl;
	return 0;
}