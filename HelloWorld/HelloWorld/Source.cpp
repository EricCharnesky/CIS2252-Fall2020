#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	const double PI_APROXIMATE = 3.1415;
	
	/*
		comment block, no thank you!
		oh maybe?
	*/
	
	cout << "Hello world!" << endl;

	bool areYouBoredYet = false;

	cout << "Enter your name human..." << endl;
	string name;
	cin >> name;

	cout << "Hello there " << name << endl;

	int favoriteNumber = 2;
	//favoriteNumber = favoriteNumber + 40;
	favoriteNumber += 40;

	auto someNumber = favoriteNumber + 20;

	int negativeNumber = -1;
	int someValue = negativeNumber + favoriteNumber;
	int anotherValue = favoriteNumber > 10 ? favoriteNumber : 10;

	// same as ternary above
	// int anotherValue;
	if (favoriteNumber > 10)
	{
		anotherValue = favoriteNumber;
	}
	else
	{
		anotherValue = 10;
	}

	int modResult = favoriteNumber % 10;

	double integerDivisionMistake = (double)2 / 4;

	cout << integerDivisionMistake << endl;

	cout << "Enter your weight and height and I "
		<< "will calculate your BMI" << endl;
	double weight;
	double height;
	cin >> weight >> height;
	
	cout << "Some formula for BMI goes here>>" << 
		height << " " << weight << endl;

	cout << "Please Excuse (My Dear) (Aunt Sally)" << endl;
	cout << 7 / 2 * 3 << endl;

	cout << "7 squared: " << pow(7, 2) << endl;
	
	cout << "The size of an int is: " << sizeof(int) << endl;
	int bigInt = 2147483647;
	cout << "My big int: " << bigInt << endl;
	// overflow, bad stuff!!!
	bigInt++;
	cout << "My big int: " << bigInt << endl;

	cout << "Enter your full name please:" << endl;
	getline(cin, name);
	getline(cin, name);
	cout << name << endl;

	cout << "There are: " << name.length() << " letters in your name!" << endl;

	srand(time(0));

	// mod by max value minus min - then add the min value
	someNumber = rand() % 100 + 1;
	cout << someNumber << endl;

	return 0;
}