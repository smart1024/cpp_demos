#include <iostream>
#include <cstring>
using namespace std;

//�β�1������ָ�룬ָ���ά���飬��ά����ÿ�����Ϊ10�е�һά���飬�β�2:�����ַ�����Ŀ
char* fun(char(*a)[10],int num)  
{
	char* p = a[0]; //pָ���0�е��׵�ַ
	int i;
	for ( i = 0; i < num; i++)
	{
		if (strlen(a[i])>strlen(p)) 
		{
			p = a[i]; //pָ���i�е��׵�ַ
		}
	}
	return p;
}

/*
1��Ҫ�ں����ⲿ�ı����ֵ���봫��ַ�������ã�ֵ�����������ں����ڲ����޷��ı�ʵ��
2������ʹ��max = &p����Ϊ��ı�ָ��ָ���޷�����ʵ��
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
	*max = p; //�ı�ʵ�ε�ֵ
}

void main_14() {
	char s[5][10], * ps;
	int  i = 0;
	cout << "�������ַ���" << endl;
	cin >> s[i];

	while (!strcmp(s[i],"**")==0) //����**������ѭ������5������**���У�����ѭ����ͣ���ʷǷ���ַ
	{
		i++;
		cin >> s[i];
	}

	//ps = fun(s, i); //psָ����ַ���

	fun1(s,i,&ps); //����ѱ����ĵ�ַ����ȥ����Ϊ�����β��������ں����ڲ����ⲿ�޷�����

	cout << "����ַ�����" << ps <<endl;
}


