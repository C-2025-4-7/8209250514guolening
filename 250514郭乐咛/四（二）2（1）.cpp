#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int i = 0;
	while (s2[i])
	{
		int j = 0;
		while (s1[j] && s1[j] == s2[i + j])
		{
			j++;
		}
		if (!s1[j])return i;
		i++;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "输入s1";
	cin.getline(s1, 100);
	cout << "输入s2";
	cin.getline(s2, 100);
	int result = indexof(s1, s2);
	if (result >= 0)
	{
		cout << "在第" << result << "个位置找到" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
	return 0;
}