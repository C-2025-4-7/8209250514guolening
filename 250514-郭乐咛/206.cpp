#include<iostream>
using namespace std;
int main()
{
	int a, b, g, l;cin >> a >> b;
    int m = a < b ? a : b; 
    for (g = m; g >= 1; g--)
        if (a % g == 0 && b % g == 0) break;
    l = a * b / g; 
    cout << "最大公约数为" << g << endl;
    cout << "最小公倍数为" << l << endl;
    return 0;
}