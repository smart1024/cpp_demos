#include <iostream>
using namespace std;

/*��str2ָ����ַ�����ÿ��Ԫ�ظ�ֵ��str1ָ����ַ����飬�Ӷ�ʵ�ֿ���*/
void copyStr(char* str1, char* str2) 
{	//ָ��û��������ʶ����ѭ����ֵ
	for (;*str2 != '\0'; str1++,str2++)
	{
		*str1 = *str2;
	}
	//��ӽ�����ʶ��
	*str1 = '\0';
}

void main_07()
{
	int c[3] = {1,10,100};
	char a[10];
	char b[4] = "abc";
	copyStr(a,b);
	//��ӡ�ַ�����
	cout << "a====" << a << endl; //a====abc �ɼ���ӡ�ַ���������Ĳ��ǵ�ַ�������ַ���

	cout << "c====" << c << endl; //c====008FF828
}


