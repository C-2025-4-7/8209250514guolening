#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	while (cin.get(c) && c != '\n')
	{
		if (c >= 'a' && c <= 'z')letters++;
		else if (c >= 'A' && c <= 'Z')letters++;
		else if (c == ' ')spaces++;
		else if (c >= '0' && c <= '9')digits++;
		else others++;
	}
	cout << "字母:" << letters<<"空格" << spaces;
	cout << "数字：" << digits<< "其他：" << others << endl;

}
