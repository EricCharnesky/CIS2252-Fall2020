#pragma once

#include <string>

using namespace std;

struct Assignment
{
//public: - it is public by default
	string name;
	int possiblePoints;
	int earnedPoints;

	// default constructor - gives default values
	Assignment() : Assignment("", 0, 0)
	{

	}

	Assignment(string name, int possiblePoints, int earnedPoints)
	{
		this->name = name;
		this->possiblePoints = possiblePoints;
		this->earnedPoints = earnedPoints;
	}
};