#pragma once

#include <string>
#include <stdexcept>

using namespace std;

class Person
{
private:
	double ageInYears;
	string name;
public:
	double getAgeInYears()
	{
		return ageInYears;
	}

	void setAgeInYears(double ageInYears)
	{
		if (ageInYears <= 0)
		{
			throw invalid_argument("Age cannot be less than 0");
		}
		// no else needed, because throwing an exception stops the code
		this->ageInYears = ageInYears;
	}

	string getName()
	{
		return name;
	}

	void setName(string name)
	{
		this->name = name;
	}

};

template <typename T>
class Pair
{
private:
	T value;
	int key;
public:
	Pair(int key, T value)
	{
		this->key = key;
		this->value = value;
	}

	T getValue()
	{
		return value;
	}

	int getKey()
	{
		return key;
	}
};