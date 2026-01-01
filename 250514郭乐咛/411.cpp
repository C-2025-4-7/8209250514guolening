#include<iostream>
using namespace std;
int main()
{
	int numbers[10];
	int distinct[10];
	int distinctCount = 0;
	cout << "输入十个数";
	for (int i = 0;i < 10;i++)
	{
		cin >> numbers[i];
		bool isNew = true;
		for (int j = 0;j < distinctCount;j++)
		{
			if (numbers[i] == distinct[j])
			{
				isNew = false;
				break;
			}
		}
		if (isNew)
		{
			distinct[distinctCount] = numbers[i];
			distinctCount++;
		}
	}
	cout << "不同的数字是：";
	for (int i = 0;i < distinctCount;i++)
	{
		cout << distinct[i] << " ";
	}
	cout << endl;
	return 0;
}