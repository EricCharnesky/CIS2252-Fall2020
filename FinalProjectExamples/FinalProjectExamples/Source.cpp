#include <iostream>
#include <fstream>
#include <string>

#include "Header.h"

using namespace std;

int main()
{
	Student students[10];
	
	int numberOfStudents = 0;
	/*
	string name;
	cout << "Enter a name or QUIT to stop" << endl;
	cin >> name;
	int age;
	while (numberOfPeople < 10 && name != "QUIT")
	{
		strcpy_s(students[numberOfPeople].name, name.c_str());
		students[numberOfPeople].id = numberOfPeople;
		numberOfPeople++;
		cout << "Enter a name or QUIT to stop" << endl;
		cin >> name;
	}
	fstream binaryArrayData;
	binaryArrayData.open("people.dat", ios::binary | ios::out);
	binaryArrayData.write(reinterpret_cast<char*>(&numberOfPeople), sizeof(numberOfPeople));
	binaryArrayData.write(reinterpret_cast<char*>(students), sizeof(students));
	binaryArrayData.close();
	*/

	/*
	fstream binaryArrayDataToRead;
	binaryArrayDataToRead.open("people.dat", ios::binary | ios::in);
	binaryArrayDataToRead.read(reinterpret_cast<char*>(&numberOfStudents), sizeof(numberOfStudents));
	binaryArrayDataToRead.read(reinterpret_cast<char*>(students), sizeof(Student) * numberOfStudents);
	binaryArrayDataToRead.close();

	for (int index = 0; index < numberOfStudents; index++)
	{
		cout << students[index].id << " : " << students[index].name << endl;
	}
	*/

	int id;
	cout << "Enter an ID to read:" << endl;
	cin >> id;

	fstream binaryArrayDataToRead;
	binaryArrayDataToRead.open("people.dat", ios::binary | ios::in);
	binaryArrayDataToRead.seekg(id * sizeof(Student) + sizeof(int));
	Student student;
	binaryArrayDataToRead.read(reinterpret_cast<char*>(&student), sizeof(Student));
	cout << student.id << " : " << student.name << endl;
	binaryArrayDataToRead.close();

	string name;
	cout << "Enter a new name:" << endl;
	cin >> name;
	strcpy_s(student.name, name.c_str());
	fstream binaryArrayData;
	binaryArrayData.open("people.dat", ios::binary | ios::out);
	binaryArrayData.seekp(id * sizeof(Student) + sizeof(int));
	binaryArrayData.write(reinterpret_cast<char*>(&student), sizeof(Student));
	binaryArrayData.close();


	return 0;
}