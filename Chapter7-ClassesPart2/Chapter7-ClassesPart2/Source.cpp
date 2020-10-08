#include <iostream>
#include "Bottle.h"
#include "GradeBook.h"
#include "Assignment.h"

using namespace std;

void drinkBottle(Bottle& bottle)
{
	int drinkInMililiters;
	cout << "How much do you want to drink?" << endl;
	cin >> drinkInMililiters;
	bottle.removeMililitersOfSOmething(drinkInMililiters);
	cout << "bottle now has: " << bottle.getCurrentVolumeOfSomethingInMililiters()
		<< " mililiters" << endl;
}

void printAssignment(Assignment assignment)
{
	cout << "Name: " << assignment.name << endl;
	cout << "Possible Points: " << assignment.possiblePoints << endl;
	cout << "Earned Points: " << assignment.earnedPoints << endl;
}

int main()
{
	Bottle bottle;
	bottle.setCapacityInMililiters(500);
	bottle.addMililitersOfSomething(500);
	char again = 'y';
	do
	{
		drinkBottle(bottle);
		cout << "drink again? y/n" << endl;
		cin >> again;

	} while (tolower(again) == 'y');

	GradeBook gradeBook("CIS 2252", "Blowfishfugu", "Facesizzle");

	gradeBook.setGrade(95, 97);

	cout << gradeBook.gradeBookString() << endl;

	cout << "Enter the name of an assignment: " << endl;
	string assignmentName;
	// consider getline to handle spaces?
	cin >> assignmentName;

	cout << "enter the total possible points: " << endl;
	int possiblePoints;
	cin >> possiblePoints;

	cout << "enter the points earned: " << endl;
	int earnedPoints;
	cin >> earnedPoints;

	// long way ( usual way )
	Assignment assignment;
	assignment.name = assignmentName;
	assignment.possiblePoints = possiblePoints;
	assignment.earnedPoints = earnedPoints;

	// short way
	Assignment otherAssignment = { assignmentName, possiblePoints, earnedPoints };

	printAssignment(assignment);
	printAssignment(otherAssignment);

	// TODO - read some about enums on your own?

	return 0;
}