#include <iostream>
using namespace std;

//pָ��һ�����飺����ָ��
int* find(int(*p)[2],int num) //����1:����ָ�� ����2��Ҫ���ҵ����
{
	int* point;
	//numÿ�α任p��ָ��һ��2��Ԫ�ص�һά���飬����Ȼ��ÿ����2�еĶ�ά�������ָ��
	point = *(p + num);  //��ȡ��num�е�һά����
	return point;
}

void main_11() 
{
	int value[3][2] = { {70,80},{80,90},{90,100} };
	int* p;
	int num, i;
	cout << "������Ҫ���ʵ���ţ�" << endl; //ע�ⲻҪԽ��
	cin >> num;
	p = find(value, num);

	cout << "���" << num << "�ĳɼ��ֱ��ǣ�" << endl;

	for (i = 0; i < 2; i++)
	{
		cout << *(p + i) << endl;
	}
}