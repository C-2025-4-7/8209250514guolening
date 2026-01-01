#include<iostream>;
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius Fahrenheit|Fahrenheit Celsius\n";
	int cel = 40;
	int fah = 120;
	for ( int i=0;i<10;i++)
	{
		double f = celsius_to_fah(cel);
		double c = fahrenheit_to_cels(fah);
		cout << cel << f << fah << c << "\n";
		cel--;
		fah -= 10;
	}
	return 0;
}
