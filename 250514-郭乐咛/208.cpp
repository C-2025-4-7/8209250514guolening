#include<iostream>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double x = a;
	double newx;
	while (true)
	{
		newx = 0.5 * (x + a / x);
		if (newx > x)
		{
			if (newx - x < 0.00001)break;
		}
		else
		{
			if (x - newx < 0.00001)break;
		}
		x = newx;
	}
	cout << newx << endl;
	return 0;
}