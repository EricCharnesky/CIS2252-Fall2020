#pragma once

#include <string>

using namespace std;

class Person
{
private:
	static int personNumber;
	string firstName;
	string lastName;
	int idNumber;
public:
	Person() : Person("","")
	{
		
	}

	Person(string firstName, string lastName) : firstName(firstName), lastName(lastName)
	{
		this->firstName = firstName;
		setFirstName(firstName);
		idNumber = personNumber++;
	}

	Person(const Person& person)
	{
		firstName = person.firstName;
		lastName = person.lastName;
		idNumber = person.idNumber;
	}

	Person& operator= (const Person& person)
	{
		firstName = person.firstName;
		lastName = person.lastName;
		idNumber = person.idNumber;
		return *this;
	}

	string getFirstName()
	{
		return firstName;
	}

	string getLastName()
	{
		return lastName;
	}

	// virtual indicates that it is allowed to be overridden
	virtual int getIDNumber()
	{
		return idNumber;
	}

	void setFirstName(string firstName)
	{
		this->firstName = firstName;
	}

	void setLastName(string lastName)
	{
		this->lastName = lastName;
	}
};

int Person::personNumber = 0;


class Parent
{
private:
	// when using dynamic memory, you should have destructor, copy constructor and assignment operator
	Person* children;
	int numberOfChildren;
public:
	Parent(int numberOfChildren)
	{
		children = new Person[numberOfChildren];
		this->numberOfChildren = numberOfChildren;
	}

	Parent(const Parent& parent)
	{
		children = new Person[parent.numberOfChildren];
		numberOfChildren = parent.numberOfChildren;

		for (int index = 0; index < numberOfChildren; index++)
		{
			children[index] = parent.children[index];
		}
	}

	~Parent()
	{
		delete[] children;
	}

	Parent& operator= (const Parent& parent)
	{
		delete[] children;
		children = new Person[parent.numberOfChildren];
		numberOfChildren = parent.numberOfChildren;

		for (int index = 0; index < numberOfChildren; index++)
		{
			children[index] = parent.children[index];
		}
		return *this;
	}
	
	Person& operator[] (int index)
	{
		if (index >= 0 && index < numberOfChildren)
		{
			return children[index];
		}
		
		// this causes an exception and will crash the program if we don't handle it
		//    we haven't talked about how to handle it yet
		throw invalid_argument("invalid index");
	}

	int getNumberOfChildren()
	{
		return numberOfChildren;
	}
};



class Circle
{
public:
	static double getCircumferenceAproximate(double radius)
	{
		return radius * 3.14159;
	}

	static double getDiameter(double radius)
	{
		return radius * 2;
	}

	static double getAreaAproximate(double radius)
	{
		return radius * radius * 3.14159;
	}
};

// sub class / child class / derived class - is-a - super class / parent class / case class
class Student : public Person
{
private:
	double totalCreditHours;
	double earnedGradePoints;
	string major;

public:
	Student() : Student("", "", "")
	{
		
	}

	Student(string firstName, string lastName, string major) : Person(firstName, lastName)
	{
		this->major = major;
		totalCreditHours = 0;
		earnedGradePoints = 0;
	}

	// this overrides the parent class behavior
	int getIDNumber()
	{
		return 1000 + Person::getIDNumber();
	}

	void earnGradePoints(double earnedPoints, double creditHours)
	{
		this->totalCreditHours += creditHours;
		earnedGradePoints += earnedPoints;
	}

	double getGPA()
	{
		return earnedGradePoints / totalCreditHours;
	}

	string getMajor()
	{
		return major;
	}

	void setMajor(string major)
	{
		this->major = major;
	}
};