#include<iostream>
using namespace std;
int main()
{
	int a,b,k;
	cin >> a >> k >> b;
	switch (k)
	{
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'/':
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
		{
			cout << "除数不能为0" << endl;
		}
		break;
	default:
		cout << "非法运算符" << endl;
		break;
	}
	return 0;
}