#include<iostream>
using namespace std;
class Student {
private:
	int id;
	float score;
public:
	void setData(int I, float S)
	{
		id=I;
		score=S;
	}
	float getScore()
	{
		return score;
	}
	int getId()
	{
		return id;
	}
};
void findMaxScore(Student*students, int count)
{
	float maxScore = students[0].getScore();
	int maxId = students[0].getId();
	for (int i = 1;i < count;i++)
	{
		if (students[i].getScore() > maxScore) 
		{
			maxScore = students[i].getScore();
			maxId = students[i].getId();
		}
	}
	cout << "最高成绩的学生信息" << endl;
	cout << "学号" <<maxId<< endl;
	cout << "成绩" <<maxScore<< endl;
}
int main()
{
	Student stu[5];
	stu[0].setData(1, 88.5);
	stu[1].setData(2, 98.8);
	stu[2].setData(3, 72.5);
	stu[3].setData(4, 95.6);
	stu[4].setData(5, 88.5);
	findMaxScore(stu, 5);
	return 0;
}