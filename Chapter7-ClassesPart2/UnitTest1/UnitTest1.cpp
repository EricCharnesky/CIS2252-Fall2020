#include "pch.h"
#include "CppUnitTest.h"
#include "..\Chapter7-ClassesPart2\Bottle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodCapacity)
		{
			// AAA - Arrange, Act, Assert
			
			// Arrange
			Bottle bottle;
			int expectedCapacity = 355;

			// Act
			bottle.setCapacityInMililiters(expectedCapacity);
			int actualCapacity = bottle.getCapacityInMililiters();

			// Assert
			Assert::AreEqual(expectedCapacity, actualCapacity);
		}

		TEST_METHOD(TestMethodVolume)
		{
			// AAA - Arrange, Act, Assert

			// Arrange
			Bottle bottle;
			int expectedCapacity = 355;
			int expectedVolume = 300;

			// Act
			bottle.setCapacityInMililiters(expectedCapacity);
			bottle.addMililitersOfSomething(expectedVolume);
			int actualVolume = bottle.getCurrentVolumeOfSomethingInMililiters();

			// Assert
			Assert::AreEqual(expectedVolume, actualVolume);
		}

		TEST_METHOD(TestMethodRandomRemoval)
		{
			// AAA - Arrange, Act, Assert

			// Arrange
			Bottle bottle(42);
			int expectedCapacity = 355;
			int expectedVolume = 279;

			// Act
			bottle.setCapacityInMililiters(expectedCapacity);
			bottle.addMililitersOfSomething(expectedCapacity);
			bottle.removeRandomAmount();
			int actualVolume = bottle.getCurrentVolumeOfSomethingInMililiters();

			// Assert
			Assert::AreEqual(expectedVolume, actualVolume);
		}

		TEST_METHOD(TestMethodRandomRemovalIsLess)
		{
			// AAA - Arrange, Act, Assert

			// Arrange
			Bottle bottle;
			int expectedCapacity = 355;

			// Act
			bottle.setCapacityInMililiters(expectedCapacity);
			bottle.addMililitersOfSomething(expectedCapacity);
			bottle.removeRandomAmount();
			int actualVolume = bottle.getCurrentVolumeOfSomethingInMililiters();

			// Assert
			Assert::IsTrue(actualVolume < expectedCapacity);
		}
	};
}
