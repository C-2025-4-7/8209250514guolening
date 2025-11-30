#include<iostream>
using namespace std;
int main()
{
	double F, C;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È";
	cin >> F;
	C = (F - 32) / 1.8;
	cout.precision(2);
	cout << "ÉãÊÏÎÂ¶È£º" << fixed << C << endl;
	return 0;
}