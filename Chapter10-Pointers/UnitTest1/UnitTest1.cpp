#include "pch.h"
#include "CppUnitTest.h"
#include "..\Chapter10-Pointers\Book.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodGetTotalPages)
		{
			// AAA

			// Arrange
			int expectedTotalPages = 42;

			// Act
			Book book(expectedTotalPages);
			int actualTotalPages = book.getTotalPages();

			// Assert
			Assert::AreEqual(expectedTotalPages, actualTotalPages);
		}

		TEST_METHOD(TestMethodGetTurnPage)
		{
			// AAA

			// Arrange
			int totalPages = 1;
			int expectedCurrentPage = 1;
			Book book(totalPages);

			// Act
			bool firstTurnPage = book.turnPage();
			bool secondTurnPage = book.turnPage();
			int actualCurrentPage = book.getCurrentPage();

			// Assert
			Assert::AreEqual(expectedCurrentPage, actualCurrentPage);
			Assert::IsTrue(firstTurnPage);
			Assert::IsFalse(secondTurnPage);
		}

		TEST_METHOD(TestMethodGoBackPage)
		{
			// AAA

			// Arrange
			int totalPages = 1;
			int expectedCurrentPage = 0;
			Book book(totalPages);

			// Act
			bool firstTurnPage = book.turnPage();
			bool firstGoBackPage = book.goBackPage();
			bool secondGoBackPage = book.goBackPage();
			int actualCurrentPage = book.getCurrentPage();

			// Assert
			Assert::AreEqual(expectedCurrentPage, actualCurrentPage);
			Assert::IsTrue(firstTurnPage);
			Assert::IsTrue(firstGoBackPage);
			Assert::IsFalse(secondGoBackPage);
		}
	};
}
