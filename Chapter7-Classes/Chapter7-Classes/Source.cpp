#include <iostream>
#include <string>
#include "Cup.h"

using namespace std;

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