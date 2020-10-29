#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	
	Student student("eric", "charnesky", "CIS");
	student.earnGradePoints(16, 4);
	cout << "GPA for " << student.getFirstName() << " :" << student.getGPA() << endl;
	cout << "ID Number for student: " << student.getIDNumber() << endl;
	Person eric("Eric", "Charnesky");
	cout << eric.getIDNumber() << endl;

	// pointer to person is student reference
	Person* ericStudent = &student;

	// when using a pointer to a type of base class that is actually a derived class
	// methods marked as virtual will run the overridden behavior
	cout << "Pointer to student as a person getid: " << ericStudent->getIDNumber() << endl;

	Person blowfish("Blowfish", "Fugu");
	cout << blowfish.getIDNumber() << endl;

	// copy constructor
	Person blowfish2(blowfish);

	Person* blowfish3 = new Person();
	*blowfish3 = blowfish;

	Parent parent(2);
	parent[0].setFirstName("Eric");
	parent[0].setLastName("Charnesky");

	parent[1].setFirstName("Blowfish");
	parent[1].setLastName("Fugu");

	for (int index = 0; index < parent.getNumberOfChildren(); index++)
	{
		cout << parent[index].getFirstName() << " "
			<< parent[index].getLastName() << " "
			<< parent[index].getIDNumber() << endl;
	}


	Parent spouse = parent;
	Parent otherSpouse(parent);

	parent[0].setFirstName("Jeric");

	cout << "The aproximate area of a cirlce with a radius of 4.2 is: " 
		<< Circle::getAreaAproximate(4.2) << endl;



	

	return 0;
}