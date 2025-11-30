#include<iostream>
using namespace std;
int main()
{
	int a = 2, total = 0, d = 0;
	while (total + a <= 100)
	{
		total += a;
		d++;
		a *= 2;
	}
	double average = total * 0.8 / d;
	
	cout << "Æ½¾ù£º" << average << "Ôª" << endl;
	return 0;
}