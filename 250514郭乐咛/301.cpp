#include<iostream>
using namespace std;
void computer(int a, int b, int& Max, int& Min)
{
	int a0 = a, b0 = b;
	while (b != 0)
	{
		int linShi = a % b;
		a = b;
		b = linShi;
	}
	Max = a;
	Min = a0 * b0 / Max;
}
int main()
{
	int m, n;
	cout << "输入两个自然数";
	cin >> m >> n;
	int Max, Min;
	computer(m, n, Max, Min);
	cout << "最大公因数是" << Max << endl;
	cout << "最小公倍数是" << Min << endl;
	return 0;
}