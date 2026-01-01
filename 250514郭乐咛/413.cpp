#include<iostream>
using namespace std;
int main()
{
	bool lockers[100] = { false };
	for (int student = 1;student <= 100;student++)
	{
		for (int num = student = student;num <= 100;num += student)
		{
			lockers[num - 1] = !lockers[num - 1];
		}
	}
	for (int i = 0;i < 100;i++)
	{
		if (lockers[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}