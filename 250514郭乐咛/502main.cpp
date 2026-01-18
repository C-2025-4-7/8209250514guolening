#include<iostream>
#include"student.h"
int main()
{
	Student stud1, stud2, stud3;
	stud1.set_value(1, "赵钱", 'M');
	stud1.display();
	stud2.set_value(2, "孙李", 'M');
	stud2.display();
	stud3.set_value(3, "周吴", 'F');
	stud3.display();
	std::cout << "\n修改学生1的信息" << std::endl;
	stud1.set_value(4, "郑王", 'F');
	stud1.display();
	return 0;
}