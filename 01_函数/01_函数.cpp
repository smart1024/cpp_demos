// 01_函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//演示函数参数按值传递
//1、形参和实参占用不同内存空间
//2、值传递特点修改形参实参值不变
void swap(float x, float y) 
{
    cout << "swap()交换前:x=" << x << "\ty=" << y << '\n'; //输出xy交换前的值
    float t = x;
    x = y;
    y = t;
    cout << "swap()交换后:x=" << x << "\ty=" << y << '\n'; //输出xy交换前的值
}
/*

可见函数中的参数是按值传递，超出左右域值不会变，因为没有修改内存
main()函数调用前a=40    b=70
swap()交换前:x=40       y=70
swap()交换后:x=70       y=40
main()函数调用后a=40    b=70
*/
int main0()
{
    float a = 40, b = 70;
    cout << "main()函数调用前a=" << a << "\tb=" << b << '\n'; //输出a和b的值
    swap(a,b);
    cout << "main()函数调用后a=" << a << "\tb=" << b << '\n'; //输出a和b的值
    return 0;
}
