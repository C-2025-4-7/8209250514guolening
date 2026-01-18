#include<iostream>
#include<cstring>
#include"student.h"
Student::Student()
{
	num = 0;
	strcpy(name, "");
	sex = ' ';
}
void Student::display()
{
	std::cout << "num:" << num << std::endl;
	std::cout << "name:" << name << std::endl;
	std::cout << "sex:" << sex << std::endl;
}
void Student::set_value(int n, const char* nm, char s)
{
	num = n;
	strcpy(name, nm);
	sex = s;
}