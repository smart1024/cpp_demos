#include<iostream>
using namespace std;
#include<cmath> //����mathͷ�ļ�

//�ж��ǲ�������������1����Ȼ��������1��������������������������
int prime(int m) 
{
	for (int i = 2; i <= sqrt(m); i++)
	if (m % i == 0) return 0;
	return 1;
}

int main()
{
	int m;
	cout << "������һ��������:";
	cin >> m;
	if (prime(m))
	{
		cout << m << "������\n";
	}
	else 
	{
		cout << m << "��������\n";
	}
	return 0;
}
