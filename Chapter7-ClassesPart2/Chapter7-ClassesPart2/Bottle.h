#pragma once

#include <ctime>
#include <cstdlib>

class Bottle
{
public:
	// constructor - job is to set default values

	// default constuctor -  no arguments - calls the parameterized constructor
	Bottle() : Bottle(time(0))
	{

	}

	Bottle(int seed)
	{
		capacityInMililiters = 0;
		currentVolumeInMililiters = 0;
		srand(seed);
	}

	void setCapacityInMililiters(int capacityInMililiters)
	{
		if (capacityInMililiters < 0)
		{
			this->capacityInMililiters = 0;
		}
		else
		{
			this->capacityInMililiters = capacityInMililiters;
		}
	}
	int getCapacityInMililiters()
	{
		return capacityInMililiters;
	}

	int getCurrentVolumeOfSomethingInMililiters()
	{
		return currentVolumeInMililiters;
	}

	bool addMililitersOfSomething(int mililitersToAdd)
	{
		currentVolumeInMililiters += mililitersToAdd;
		
		if (currentVolumeInMililiters > capacityInMililiters)
		{
			currentVolumeInMililiters = capacityInMililiters;
			return false;
		}
		else
		{
			return true;
		}
	}

	bool removeMililitersOfSOmething(int mililitersToRemove)
	{
		currentVolumeInMililiters -= mililitersToRemove;
		
		if (currentVolumeInMililiters < 0)
		{
			currentVolumeInMililiters = 0;
			return false;
		}
		else
		{
			return true;
		}
	}

	void removeRandomAmount()
	{
		// gives between 1 and 100
		int mililitersToRemove = rand() % 100 + 1;
		removeMililitersOfSOmething(mililitersToRemove);
	}

private:
	int capacityInMililiters;
	int currentVolumeInMililiters;

};