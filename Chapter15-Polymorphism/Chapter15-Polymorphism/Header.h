#pragma once

#include <string>

using namespace std;

class Animal
{
private:
	int numberOfLegs;
	string name;
public:
	Animal(int numberOfLegs, string name)
	{
		this->numberOfLegs = numberOfLegs;
		this->name = name;
	}

	// setting it = 0 marks it as a pure virtual function
	// you can't create an instance of this class anymore
	virtual string makeNoise() = 0;

	string getName() final
	{
		return name;
	}
};

class Sheep : public Animal
{
private:
	string color;
public:
	Sheep(string color) : Animal(4, "sheep")
	{
		this->color = color;
	}

	string makeNoise()
	{
		return "Bahhhhh";
	}

	void eatGrass()
	{

	}
};