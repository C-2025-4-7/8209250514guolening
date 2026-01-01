#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0;i < 26;i++)
	{
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0')
	{
		char c = s[i];
		if (c >= 'A' && c <= 'z')
		{
			counts[c - 'a']++;
		}
		i++;
	}
}
int main()
{
	char str[100];
	int letterCount[26];
	cout << "Enter a string:";
	cin.getline(str, 100);
	count(str, letterCount);
	for (int i = 0;i < 26;i++)
	{
		if (letterCount[i] > 0)
		{
			char letter = 'a' + i;
			cout << letter << ":" << letterCount[i] << "times" << endl;
		}
	}
	return 0;
}