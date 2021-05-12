#include <iostream>
#include <cmath>
using namespace std;

/*«Û∆Ω∑Ω*/
double powers(int n)
{
	double s = n * n;
	return s;
}

double sum(int n)
{
	double z = 0;
	for (int i = 1; i <= n; i++)
	{
		z += (6.0 / powers(i));
	}
	return z;
}

int main() 
{
	int i = 1000;
	double k = 0;
	k = sqrt(sum(i));
	cout << "i = " << i << " ¶–=" << k << endl;
	return 0;
}
