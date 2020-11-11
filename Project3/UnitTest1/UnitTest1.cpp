#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project3\Maze.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodUpWontGoOutOfBounds)
		{
			// Arrange
			vector<vector<char>> map = { {'S', ' ', ' '},
										 {' ', ' ', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 0;
			int expectedPlayerColumnIndex = 0;

			// Act
			bool actualGoUpResult = maze.goUp();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodUpWontGoOnWall)
		{
			// Arrange
			vector<vector<char>> map = { {' ', 'X', ' '},
										 {' ', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goUp();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodUp)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 0;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goUp();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();

			// Assert
			Assert::IsTrue(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodDownWontGoOutOfBounds)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', ' ', ' '},
										 {'S', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 2;
			int expectedPlayerColumnIndex = 0;

			// Act
			bool actualGoUpResult = maze.goDown();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodDownWontGoOnWall)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', ' '},
										 {' ', 'X', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goDown();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodDown)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 2;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goDown();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();

			// Assert
			Assert::IsTrue(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodLeftWontGoOutOfBounds)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', ' ', ' '},
										 {'S', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 2;
			int expectedPlayerColumnIndex = 0;

			// Act
			bool actualGoUpResult = maze.goLeft();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodLeftWontGoOnWall)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {'X', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goLeft();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodLeft)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 0;

			// Act
			bool actualGoUpResult = maze.goLeft();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();

			// Assert
			Assert::IsTrue(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodRightWontGoOutOfBounds)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', ' ', ' '},
										 {' ', ' ', 'S'} };
			Maze maze(map);
			int expectedPlayerRowIndex = 2;
			int expectedPlayerColumnIndex = 2;

			// Act
			bool actualGoUpResult = maze.goRight();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodRightWontGoOnWall)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', 'X'},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 1;

			// Act
			bool actualGoUpResult = maze.goRight();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();


			// Assert
			Assert::IsFalse(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}

		TEST_METHOD(TestMethodRight)
		{
			// Arrange
			vector<vector<char>> map = { {' ', ' ', ' '},
										 {' ', 'S', ' '},
										 {' ', ' ', ' '} };
			Maze maze(map);
			int expectedPlayerRowIndex = 1;
			int expectedPlayerColumnIndex = 2;

			// Act
			bool actualGoUpResult = maze.goRight();
			int actualPlayerRowIndex = maze.getPlayerCurrentRowIndex();
			int actualPlayerColumnIndex = maze.getPlayerCurrentColumnIndex();

			// Assert
			Assert::IsTrue(actualGoUpResult);
			Assert::AreEqual(expectedPlayerRowIndex, actualPlayerRowIndex);
			Assert::AreEqual(expectedPlayerColumnIndex, actualPlayerColumnIndex);

		}
	};
}
