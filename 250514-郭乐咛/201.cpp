#include<iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z') 
	{
		c = c - 32;
		cout << c << endl;
	}
	else
	{
		int ascii = c + 1;
	cout << ascii<< endl;
	}
}