#include <iostream>
using namespace std;

int main() 
{
#ifdef PI
	cout << "PI=" << PI << endl;
#else
#define PI 3.14
#endif // PI

	cout << "PI=" << PI << endl;
	//�����궨��
#undef PI
	return 0;
}