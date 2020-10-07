#pragma once

class Bottle
{
public:
	// constructor - job is to set default values
	Bottle()
	{
		capacityInMililiters = 0;
		currentVolumeInMililiters = 0;
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

private:
	int capacityInMililiters;
	int currentVolumeInMililiters;

};