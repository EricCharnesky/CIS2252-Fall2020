#pragma once

#include <string>
#include "Student.h"

using namespace std;

class GradeBook
{
public:
	GradeBook(string className, string firstStudentName, string secondStudentName)
	{
		this->className = className;
		firstStudent = Student(firstStudentName);
		secondStudent = Student(secondStudentName);
	}

	// this is bad, but we don't have arrayrs or vectors yet....
	void setGrade(double firstStudentGrade, double secondStudentGrade)
	{
		firstStudent.setGradePercentage(firstStudentGrade);
		secondStudent.setGradePercentage(secondStudentGrade);
	}

	double getFirstStudentGrade()
	{
		return firstStudent.getGradePercentage();
	}

	double getSecondStudentGrade()
	{
		return secondStudent.getGradePercentage();
	}

	string gradeBookString()
	{
		string gradeBook = "Student: " + firstStudent.getName() + 
			" - Score: " + to_string(firstStudent.getGradePercentage()) + "\n"
			+ "Student: " + secondStudent.getName() + 
			" - Score: " + to_string(secondStudent.getGradePercentage());

		return gradeBook;
	}

private:
	string className;
	Student firstStudent;
	Student secondStudent;
};