#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Person
{
	char name[30];
	int age;
};

int main()
{
	/*fstream fileStream;
	fileStream.open("sample.dat", ios::binary | ios::out);
	
	int numbers[5] = { 1, 2, 4, 8, 16 };
	fileStream.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
	fileStream.close();

	int numbers[5];
	fstream fileStream;
	fileStream.open("sample.dat", ios::binary | ios::in);
	fileStream.read(reinterpret_cast<char*>(numbers), sizeof(numbers));
	fileStream.close();

	for (int number : numbers)
	{
		cout << number << endl;
	}*/

	//string name = "Eric";

	//Person eric;
	//strcpy_s(eric.name, name.c_str());
	//eric.age = 33;

	//fstream binaryDataFile;
	//binaryDataFile.open("eric.dat", ios::binary | ios::out );
	//binaryDataFile.write(reinterpret_cast<char*>(&eric), sizeof(eric));
	//binaryDataFile.close();

	//Person ericFromFile;
	//fstream binaryDataFile;
	//binaryDataFile.open("eric.dat", ios::binary | ios::in);
	//binaryDataFile.read(reinterpret_cast<char*>(&ericFromFile), sizeof(ericFromFile));
	//binaryDataFile.close();

	//cout << ericFromFile.name << " : " << ericFromFile.age << endl;

	Person people[10];

	int numberOfPeople = 0;
	/*string name;

	cout << "Enter a name or QUIT to stop" << endl;
	cin >> name;
	int age;

	while (numberOfPeople < 10 && name != "QUIT")
	{
		cout << "Enter the age of " << name << endl;
		cin >> age;
		
		strcpy_s(people[numberOfPeople].name, name.c_str());
		people[numberOfPeople].age = age;
		numberOfPeople++;

		cout << "Enter a name or QUIT to stop" << endl;
		cin >> name;
	}

	fstream binaryArrayData;
	binaryArrayData.open("people.dat", ios::binary | ios::out);
	binaryArrayData.write(reinterpret_cast<char*>(&numberOfPeople), sizeof(numberOfPeople));
	binaryArrayData.write(reinterpret_cast<char*>(people), sizeof(people));
	binaryArrayData.close();*/

	fstream binaryArrayDataToRead;
	binaryArrayDataToRead.open("people.dat", ios::binary | ios::in);
	binaryArrayDataToRead.read(reinterpret_cast<char*>(&numberOfPeople), sizeof(numberOfPeople));
	binaryArrayDataToRead.read(reinterpret_cast<char*>(people), sizeof(Person) * numberOfPeople);
	binaryArrayDataToRead.close();

	for (int index = 0; index < numberOfPeople; index++ )
	{
		cout << people[index].name << " : " << people[index].age << endl;
	}

	return 0;
}