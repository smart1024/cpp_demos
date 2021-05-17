#include <iostream>
using namespace std;

int main18() 
{
#ifdef PI
	cout << "PI=" << PI << endl;
#else
#define PI 3.14
#endif // PI

	cout << "PI=" << PI << endl;
	//³·Ïúºê¶¨Òå
#undef PI
	return 0;
}