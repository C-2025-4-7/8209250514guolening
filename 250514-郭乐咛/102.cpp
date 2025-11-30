#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.14159;
	float r, h, V;
	cin >> r>>h;
	V = PI * r * r * h / 3;
	cout << V << endl;

}