#include <iostream>
#include <string>

using namespace std;

class Cup
{
public:
	// constructor - it's job is to set instance attributes to default values
	Cup()
	{
		color = "";
		sizeInMilliliters = 0;
		currentAmountOfFluidInMilliliters = 0;
	}

	string getColor()
	{
		return color;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	int getSizeInMilliliters()
	{
		return sizeInMilliliters;
	}
	void setSizeInMilliliters(int sizeInMilliliters)
	{
		if (sizeInMilliliters < 0)
		{
			this->sizeInMilliliters = 0;
		}
		else
		{
			this->sizeInMilliliters = sizeInMilliliters;
		}
	}

	int getCurrentAmountOfFluidInMilliliters()
	{
		return currentAmountOfFluidInMilliliters;
	}

	void addFluid(int numberOfMillilitersToAdd)
	{
		currentAmountOfFluidInMilliliters += numberOfMillilitersToAdd;
		if (currentAmountOfFluidInMilliliters > sizeInMilliliters)
		{
			currentAmountOfFluidInMilliliters = sizeInMilliliters;
			cout << "You spilled the fluid!!! Your cup over runneth!" << endl;
		}
	}

	void drinkFluid(int numberOfMillilitersToDrink)
	{
		currentAmountOfFluidInMilliliters -= numberOfMillilitersToDrink;
		if (currentAmountOfFluidInMilliliters <= 0)
		{
			currentAmountOfFluidInMilliliters = 0;
			cout << "You drank it all!" << endl;
		}
	}
	

private:
	string color;
	int sizeInMilliliters;
	int currentAmountOfFluidInMilliliters;
};

int main()
{
	Cup ericsCoffeeCup;
	Cup ericsWaterCup;
	Cup ericsPopCan;

	ericsCoffeeCup.setSizeInMilliliters(709);
	ericsWaterCup.setSizeInMilliliters(500);
	ericsPopCan.setSizeInMilliliters(354);

	ericsCoffeeCup.addFluid(709);
	ericsWaterCup.addFluid(500);
	ericsPopCan.addFluid(354);

	ericsCoffeeCup.drinkFluid(250);
	ericsWaterCup.drinkFluid(250);
	ericsPopCan.drinkFluid(250);

	return 0;
}