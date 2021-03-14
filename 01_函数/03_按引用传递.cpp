//1、按引用传递：传引用
//2、引用：变量的别名,对别名的访问就是对变量访问
//3、引用传递的特点是形参不再分别内存空间，形参和实参为同一块内存
#include<iostream>
using namespace std;
void swap(float &x,float &y) 
{
    cout << "swap()交换前:x=" << x << "\ty=" << y << '\n'; //输出xy交换前的值
    float t = x;
    x = y;
    y = t;
    cout << "swap()交换后:x=" << x << "\ty=" << y << '\n'; //输出xy交换前的值
}

int main() 
{
    float a = 40,b = 70;
    cout << "main()函数调用前a=" << a << "\tb=" << b << '\n'; //输出a和b的值
    swap(a, b);
    cout << "main()函数调用后a=" << a << "\tb=" << b << '\n'; //输出a和b的值
    return 0;
}
