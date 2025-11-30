#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe
	cout << "output in unsigned int type:" << testUnint << endl;//<<oct;
	cout << "out in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned iut type:" << hex << testUnint << endl;
	cout << "output in Oct unsigned int type:" <<  oct << testUnint << endl;
	double realNumber = 3;
	cout << "real number:" <<realNumber<< "cast to int:" << static_cast<int> (realNumber)<< endl;
	cout << "convert to int:" << static_cast<int>(realNumber) << endl;
	system("pause");
	return 0;
}