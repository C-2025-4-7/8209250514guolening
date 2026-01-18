#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
	double volume;
public:
	void inputSize()
	{
		cout << "请输入长";
		cin >> length;
		cout << "请输入宽";
		cin >> width;
		cout << "请输入高";
		cin >> height;
	}
	void calculate()
	{
		volume = length * width * height;
	}
	void showResult()
	{
		cout << "这个长方柱的体积是" << volume << endl;
	}
};
int main()
{
	Cuboid box1;
	Cuboid box2;
	Cuboid box3;

	cout << "\n第一个长方柱的数据" << endl;
	box1.inputSize();
	box1.calculate();
	box1.showResult();

	cout << "\n第二个长方柱的数据" << endl;
	box2.inputSize();
	box2.calculate();
	box2.showResult();

	cout << "\n第三个长方柱的数据" << endl;
	box3.inputSize();
	box3.calculate();
	box3.showResult();

	return 0;
}