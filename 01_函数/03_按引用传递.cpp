//1�������ô��ݣ�������
//2�����ã������ı���,�Ա����ķ��ʾ��ǶԱ�������
//3�����ô��ݵ��ص����ββ��ٷֱ��ڴ�ռ䣬�βκ�ʵ��Ϊͬһ���ڴ�
#include<iostream>
using namespace std;
void swap(float &x,float &y) 
{
    cout << "swap()����ǰ:x=" << x << "\ty=" << y << '\n'; //���xy����ǰ��ֵ
    float t = x;
    x = y;
    y = t;
    cout << "swap()������:x=" << x << "\ty=" << y << '\n'; //���xy����ǰ��ֵ
}

int main() 
{
    float a = 40,b = 70;
    cout << "main()��������ǰa=" << a << "\tb=" << b << '\n'; //���a��b��ֵ
    swap(a, b);
    cout << "main()�������ú�a=" << a << "\tb=" << b << '\n'; //���a��b��ֵ
    return 0;
}
