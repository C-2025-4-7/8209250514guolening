#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		int K = a + b + c;
		cout << K << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形。" << endl;
		}
		else
		{
			cout << "这个三角形不是等腰三角形。" << endl;
		}
	}
	else
	{
		cout << "这三条边不能构成三角形" << endl;
	}
	return 0;
}