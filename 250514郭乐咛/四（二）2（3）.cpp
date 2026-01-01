#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* p = new int[n];
	cout << "输入数字";
	for (int i = 0;i < n;i++)
	{
		cin >> p[i];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (p[i] < p[j])
			{
				int t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
	cout << "结果是";
	for (int i = 0;i < n;i++)
	{
		cout << p[i] << " ";
	}
	delete[]p;
	return 0;
}