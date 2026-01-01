#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3}
	int *p, i;
	p = a;
	for (i = 0;i < 3;i++)
	{
		cout << a[i] << ",";
		cout << p[i] << ",";
		cout << *(p + i) << ",";
		cout << *(a + i) << ",";
	}
}