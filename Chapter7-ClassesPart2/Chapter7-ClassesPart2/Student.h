#pragma once

#include <string>

using namespace std;

class Student
{
public:
	Student() : Student("")
	{

	}

	Student(string name)
	{
		this->name = name;
		setGradePercentage(0);
	}

	string getName()
	{
		return name;
	}

	double getGradePercentage()
	{
		return gradePercentage;
	}

	void setGradePercentage(double gradePercentage)
	{
		if (gradePercentage >= 0 && gradePercentage <= 100)
		{
			this->gradePercentage = gradePercentage;
		}
		else
		{
			gradePercentage = 0;
		}
		
	}

private:
	string name;
	double gradePercentage;
};