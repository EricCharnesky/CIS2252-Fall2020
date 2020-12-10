#include <iostream>
#include <string>
#include <vector>

#include "Header.h"

using namespace std;

template<typename T>
void printMe(T thingy)
{
	cout << thingy << endl;
}

int main()
{
	vector<int> numbers;
	numbers.push_back(1);

	printMe(10);
	printMe("ten");
	printMe(10.1);

	string input;
	int number;
	bool failed = true;

	do {
		cout << "Enter a number" << endl;
		cin >> input;

		try
		{
			number = stoi(input);
			failed = false;
		}
		catch (invalid_argument)
		{
			cout << "Could not convert " << input << " to a number, try again" << endl;
		}

	} while (failed);

	cout << "Your number was: " << number << endl;

	cout << "Enter your name: " << endl;
	string name;
	cin >> name;

	

	Person you;
	you.setName(name);
	failed = true;
	do
	{
		try
		{
			cout << "Enter your age in years: " << endl;
			double age;
			cin >> age;
			you.setAgeInYears(age);
			failed = false;
		}
		catch (invalid_argument ex)
		{
			cout << ex.what() << endl;
		}
	} while (failed);


	Pair<Person> student(1, you);



	return 0;
}