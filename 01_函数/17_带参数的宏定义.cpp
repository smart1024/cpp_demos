#include <iostream>
using namespace std;
//�궨�岻����䲻��;�Ž�β

//���������궨��
#define PI 3.14

//���в����궨��
#define Area(r) PI*r*r

int	main17()
{	
	float x, area;
	cout << "������뾶:";
	cin >> x;
	area = Area(x);
	cout << "x=" << x << "��area=" << area << endl;
	return 0;
}