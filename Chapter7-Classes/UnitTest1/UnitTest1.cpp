#include "pch.h"
#include "CppUnitTest.h"
#include "..\Chapter7-Classes\Circle.h"
#include "..\Chapter7-Classes\Car.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodCircleDiameter)
		{
			// AAA
			// Arrange
			Circle smallCircle;
			double radius = 5;
			double expectedDiameter = radius * 2;
			
			// act - call some code
			smallCircle.setRadius(5);
			double actualDiameter = smallCircle.getDiameter();

			// Assert
			Assert::AreEqual(expectedDiameter, actualDiameter);
		}

		TEST_METHOD(TestMethodCircleCircumference)
		{
			// AAA
			// Arrange
			Circle smallCircle;
			double radius = 5;
			double expectedCircumference = radius * 2 * 3.14159;

			// act - call some code
			smallCircle.setRadius(5);
			double actualCircumference = smallCircle.getCircumference();

			// Assert
			Assert::AreEqual(expectedCircumference, actualCircumference);
		}

		TEST_METHOD(TestMethodCircleArea)
		{
			// AAA
			// Arrange
			Circle smallCircle;
			double radius = 5;
			double expectedArea = radius * radius * 3.14159;

			// act - call some code
			smallCircle.setRadius(5);
			double actualArea = smallCircle.getArea();

			// Assert
			Assert::AreEqual(expectedArea, actualArea);
		}

		TEST_METHOD(TestMethodCarAddGas)
		{
			// AAA
			// Arrange
			Car car;
			double expectedGasInTankInLiters = 10;
			car.setGasTankCapacityInLiters(expectedGasInTankInLiters);

			// act - call some code
			car.addGas(expectedGasInTankInLiters);
			double actualGasInTankInLiters = car.getGasInTankInLiters();

			// Assert
			Assert::AreEqual(expectedGasInTankInLiters, actualGasInTankInLiters);
			
		}

		TEST_METHOD(TestMethodCarAddDrive)
		{
			// Arrange
			Car car;
			double expectedGasInTankInLiters = 9;
			double kilometersPerLiter = 10;
			car.setGasTankCapacityInLiters(expectedGasInTankInLiters);
			car.addGas(10);
			car.setKilometersPerLiter(kilometersPerLiter);

			// act - call some code
			car.drive(10);
			double actualGasInTankInLiters = car.getGasInTankInLiters();

			// Assert
			Assert::AreEqual(expectedGasInTankInLiters, actualGasInTankInLiters);

		}
	};
}
