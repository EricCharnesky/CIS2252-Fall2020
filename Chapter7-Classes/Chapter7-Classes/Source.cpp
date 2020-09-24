#include <iostream>
#include <string>
#include "Cup.h"
#include "Circle.h"

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

	// poor man's method who doesn't have visual studio
	// AAA format test
	// arrange, act, assert

	// arranging all the variables and expected outputs
	Circle smallCircle;
	double radius = 5;
	double expectedDiameter = radius * 2;
	double expectedCircumference = radius * 2 * 3.14159;
	double expectedArea = radius * radius * 3.14159;

	// act - call some code
	smallCircle.setRadius(5);
	double actualDiameter = smallCircle.getDiameter();
	double actualCircumference = smallCircle.getCircumference();
	double actualArea = smallCircle.getArea();
	
	// assert
	if (actualDiameter != expectedDiameter)
	{
		cout << "Expected Diameter: " << expectedDiameter << " actual was: " << actualDiameter << endl;
	}

	if (actualCircumference != expectedCircumference)
	{
		cout << "Expected Circumference: " << expectedCircumference << " actual was: " << actualCircumference << endl;
	}

	if (actualArea != expectedArea)
	{
		cout << "Expected Area: " << expectedArea << " actual was: " << actualArea << endl;
	}

	return 0;
}