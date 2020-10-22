#include <iostream>
#include <vector>
#include "Book.h"

using namespace std;

class Gradebook
{
private:
	int* scores;
	int numberOfStudents;
public:
	Gradebook(int numberOfStudents)
	{
		this->numberOfStudents = numberOfStudents;
		// WARNING - allocating memory on the heap!
		scores = new int[numberOfStudents];
	}

	// destructor - opposite of a constructor - frees up memory!
	~Gradebook()
	{
		delete[] scores;
	}

	int getNumberOfStudents()
	{
		return numberOfStudents;
	}

	int getScoreForStudentNumber(int studentNumber)
	{
		if (studentNumber >= numberOfStudents || studentNumber < 0)
		{
			return 0;
		}
		return scores[studentNumber];
	}

	void setScoreForStudentNumber(int studentNumber, int score)
	{
		if (studentNumber >= numberOfStudents || studentNumber < 0)
		{
			return;
		}
		scores[studentNumber] = score;
	}
};


int remainderDividedByTen(int number, int& quotient)
{
	cout << "number: " << number << endl;
	cout << "&number: " << &number << endl;

	cout << "quotient: " << quotient << endl;
	cout << "&quotient: " << &quotient << endl;

	quotient = number / 10;
	int remainder = number % 10;
	number += 100;
	return remainder;
}

int addTenWithPointer(int* number)
{
	cout << "number: " << number << endl;
	cout << "*number: " << *number << endl;
	cout << "&number: " << &number << endl;

	cout << "enter a new number: " << endl;
	int newNumber;
	cin >> newNumber;
	
	// once you reassign the pointer to a new address, you aren't modifying 
	//      the original pointed at value
	number = &newNumber;
	*number += 10;

	cout << "number: " << number << endl;
	cout << "*number: " << *number << endl;
	cout << "&number: " << &number << endl;

	return *number;
}


int main()
{
	// AAA

	// Arrange
	int expectedTotalPages = 42;
	Book book(expectedTotalPages);

	// Act
	int actualTotalPages = book.getTotalPages();

	// Assert
	if (expectedTotalPages != actualTotalPages)
	{
		cout << "ERROR, expected pages didn't match actual" << endl;
		cout << "Expected: " << expectedTotalPages;
		cout << " Actual: " << actualTotalPages;
	}





	// just delays so I can see the process monitoring in VS which is slow to start
	int junk;
	cin >> junk;

	

	int* secondSmartNumbersPtr = new int[10];

	shared_ptr<int> smartNumbers(secondSmartNumbersPtr);


	Gradebook* gradebook = new Gradebook(10);

	// when using heap objects, you must indirectly reference
	cout << "(*gradebook).getNumberOfStudents() number of students: " << (*gradebook).getNumberOfStudents() << endl;

	// -> automatically indirectly references the thing the pointer points at - see above
	cout << "gradebook->getNumberOfStudents() number of students: " << gradebook->getNumberOfStudents() << endl;

	for (int gradeBookNumber = 0; gradeBookNumber < 100000; gradeBookNumber++)
	{
		gradebook = new Gradebook(10);
		delete gradebook;

		// when it goes out of scope, it is freed ( deleted ) for you
		unique_ptr<Gradebook> gradebookPtr(new Gradebook(10));
	}

	int lotsONumbers[100000];

	int* moreNumbers = new int[100000];

	cin >> junk;
	// use the [] in delete to delete the whole array
	delete[] moreNumbers;
	double* numberWithDecimalPlaces = new double;
	for (int numberToAllocate = 0; numberToAllocate < 10000; numberToAllocate++)
	{
		// THIS IS A MEMORY LEAK - don't try this at home?
		numberWithDecimalPlaces = new double;
		if (numberToAllocate % 1000 == 0)
		{
			cout << numberToAllocate << endl;
		}

		// this here is how to prevent a leak - flex tape for memory?
		delete numberWithDecimalPlaces;

		//cout << "numberWithDecimalPlaces: " << numberWithDecimalPlaces << endl;
		//cout << "*numberWithDecimalPlaces: " << *numberWithDecimalPlaces << endl;
		//cout << "&numberWithDecimalPlaces: " << &numberWithDecimalPlaces << endl;
	}

	// this is trying to write to a freed up memory location - bad news bears!
	// *numberWithDecimalPlaces = 4.2;



	

	int magicNumber = 42;
	int quotient = 0;

	cout << "magicNmber: " << magicNumber << endl;
	cout << "&magicNumber: " << &magicNumber << endl;

	cout << "quotient: " << quotient << endl;
	cout << "&quotient: " << &quotient << endl;

	int remainder = remainderDividedByTen(magicNumber, quotient);

	cout << "The quotient is: " << quotient << endl;
	cout << "The reminder is: " << remainder << endl;


	int* numberPtr = &magicNumber;

	cout << "numberPtr: " << numberPtr << endl;
	cout << "*numberPtr: " << *numberPtr << endl;
	cout << "&numberPtr: " << &numberPtr << endl;

	*numberPtr = 1337;

	cout << "magicNmber: " << magicNumber << endl;
	cout << "&magicNumber: " << &magicNumber << endl;

	cout << "numberPtr: " << numberPtr << endl;
	cout << "*numberPtr: " << *numberPtr << endl;
	cout << "&numberPtr: " << &numberPtr << endl;

	cout << "sizeof(int): " << sizeof(int) << endl;

	int lottoNumbers[] = { 1, 3, 5, 7 };
	cout << "lottoNumbers: " << lottoNumbers << endl;
	cout << "lottoNumbers[0]: " << lottoNumbers[0] << endl;
	cout << "*lottoNumbers: " << *lottoNumbers << endl;

	cout << "(lottoNumbers+1): " << (lottoNumbers + 1) << endl;
	cout << "lottoNumbers[1]: " << lottoNumbers[1] << endl;
	cout << "*(lottoNumbers+1): " << *(lottoNumbers + 1) << endl;

	cout << "(lottoNumbers+2): " << (lottoNumbers + 2) << endl;
	cout << "lottoNumbers[2]: " << lottoNumbers[2] << endl;
	cout << "*(lottoNumbers+2): " << *(lottoNumbers + 2) << endl;

	cout << "(lottoNumbers+3): " << (lottoNumbers + 3) << endl;
	cout << "lottoNumbers[3]: " << lottoNumbers[3] << endl;
	cout << "*(lottoNumbers+3): " << *(lottoNumbers + 3) << endl;

	// you will get garbage if you try and go too far an index
	cout << "(lottoNumbers+4): " << (lottoNumbers + 4) << endl;
	cout << "lottoNumbers[4]: " << lottoNumbers[4] << endl;
	cout << "*(lottoNumbers+4): " << *(lottoNumbers + 4) << endl;

	int* lottoPtr = lottoNumbers;

	for (int index = 0; index < 4; index++)
	{
		cout << "lottoNumbers at index: "<< index << ": " 
			<< *lottoPtr++ << endl;
	}

	// it's hard to use a null pointer - because it points at nothing
	int* usersNumberPtr = NULL;

	cout << "enter a number: " << endl;

	int someNumber;
	cin >> someNumber;
	usersNumberPtr = &someNumber;

	cout << "(usersNumberPtr == numberPtr): " << (*usersNumberPtr == *numberPtr) << endl;
	cout << "(*usersNumberPtr == *numberPtr): " << (usersNumberPtr == numberPtr) << endl;

	cout << "usersNumberPtr: " << usersNumberPtr << endl;
	cout << "*usersNumberPtr: " << *usersNumberPtr << endl;
	cout << "&usersNumberPtr: " << &usersNumberPtr << endl;


	cout << "value returned by addTenWithPointer(usersNumberPtr): " << addTenWithPointer(usersNumberPtr) << endl;

	cout << "usersNumberPtr: " << usersNumberPtr << endl;
	cout << "*usersNumberPtr: " << *usersNumberPtr << endl;
	cout << "&usersNumberPtr: " << &usersNumberPtr << endl;

	// explicity pass an address which is essentially a pointer
	addTenWithPointer(&someNumber);




	return 0;
}