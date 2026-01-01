#include<iostream>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int i = 0;
	while (hexString[i] != '\0')
	{
		char c = hexString[i];
		int digit;
		if (c >= '0' && c <= '9')
		{
			digit = c - '0';
		}
		else if(c>='A'&&c<='F')
		{
			digit = 10 + (c - 'F');
		}
		else if(c>='a'&&c<='f')
		{
			digit = 10 + (c - 'a');
		}
		else
		{
			return 0;
		}
		result = result * 16 + digit;
		i++;
	}
	return result;
}
int main()
{
	char hexStr[100];
	cout << "请输入一个十六进制字符";
	cin >> hexStr;
	int decimal = parseHex(hexStr);
	cout << "其十进制为" << decimal << endl;
	return 0;
}