#include<iostream>
#include<cstring>

using namespace std;

/*
����ָ��ĺ���
*/
char* max(char* x,char* y) {//�β��ַ�ָ�룬����ֵ�ַ�ָ��
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
	cout << "�������ַ���1��";
	cin >> c1;

	cout << "�������ַ���2��";
	cin >> c2;

	cout << "�����ַ����нϴ���ǣ�";
	cout << max(s1, s2) << endl;
}