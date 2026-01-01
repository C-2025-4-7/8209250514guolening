#include<iostream>
using namespace std;
int main()
{
	int n1;
	cin >> n1;
	int a[80];
	for (int i = 0;i < n1;i++)
		cin >> a[i];

	int n2;
	cin >> n2;
	int b[80];
	for (int i = 0;i < n2;i++)
		cin >> b[i];

	int c[160];
	int i = 0, j = 0, k = 0;

	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while (i < n1)c[k++] = a[i++];
	while (j < n2)c[k++] = b[j++];
	for (int i = 0;i < n1 + n2;i++)
	{
		cout << c[i] << " ";
	}
	return 0;
}