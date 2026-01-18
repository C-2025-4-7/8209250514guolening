#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 60;
		y = 80;
		cout << "坐标初始化(" << x << "," << y << ")";
	}
		void setPoint(int i, int j)
		{
			x = 60 + i;
			y = 80 + j;
			cout << "坐标变为(" << x << "," << y << ")";
		}
		void display()
		{
			cout << "当前坐标为(" << x << "," << y << ")"<<endl;
		}
};
int main()
{
	Point p;
	cout << "\n显示初始坐标";
	p.display();
	cout << "\n调用函数" << endl;
	p.setPoint(10, 20);
	p.display();
	return 0;
}