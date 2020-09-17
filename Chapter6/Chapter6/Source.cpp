#include <iostream>
#include <string>

using namespace std;

void printHelloInLotsOfLanguages();
int calculateMagicNumber(int number);
int askUserForANumber(string message);
double calculateAverage(int first, int second, int third);
bool isFirstLargerThanSecond(int first, int second);
void squareTheValue(int& number);
string createDateString(int day, int month, int year, char format);
string createDateString(string day, string month, string year, char format);
void printWithNewLines(string message, bool extraNewLine);
void printWithNewLines(string message);

int main()
{
	printHelloInLotsOfLanguages();

	int number = askUserForANumber("Enter a number between 1 - 10");
	cout << calculateMagicNumber(number) << endl;
	cout << "Your number was: " << number << endl;

	cout << "Pick another one, I bet it adds up to 9..." << endl;

	cout << calculateMagicNumber(askUserForANumber(
		"Enter a number between 1 - 10")) << endl;

	cout << "The average of 51, 70, 24 is: " << 
		calculateAverage(51, 70, 24) << endl;

	int two = 2;
	for (int timesToBeSquared = 0; timesToBeSquared < 16; timesToBeSquared++)
	{
		cout << two << endl;
		squareTheValue(two);
	}

	cout << two << endl;

	return 0;
}


// here's a function to print hello in lots of langauges
void printHelloInLotsOfLanguages()
{
	cout << "Hello!" << endl;
	cout << "Hola!" << endl;
	cout << "Bonjour!" << endl;
	cout << "Gutten Tag!" << endl;
	cout << "Privette!" << endl;
	cout << "Annyeonghaseyo!" << endl;
	cout << "Ciao!" << endl;
}

int calculateMagicNumber(int number)
{
	// number = number * 9; same as below
	number *= 9;

	int tensPlace = number / 10;
	int onesPlace = number % 10;

	return tensPlace + onesPlace;
}

int askUserForANumber(string message)
{
	cout << message << endl;
	int number;
	cin >> number;
	return number;
}

// this is a bad example of a default, third might actually be 0
double calculateAverage(int first, int second, int third = 0)
{
	double numberOfValues = 2;
	if (third != 0)
	{
		numberOfValues++;
	}
	return (first + second + third) / 3.0;
}

bool isFirstLargerThanSecond(int first, int second)
{
	if (first > second)
	{
		return true;
	}
	else
	{
		return false;
	}
	// eric's pet peeve - this is the same thing!
	return first > second;
}

void squareTheValue(int& number)
{
	number *= number;
}

// please don't do this in real life - this is only an example
string createDateString(int day, int month, int year, char format = 'U' )
{
	// found to_string on https://www.educba.com/c-plus-plus-int-to-string/
	if (format == 'U') // US format
	{
		return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
	}
	else if (format == 'E')
	{
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}
	else if (format == 'I')
	{
		return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
	}
}

string createDateString(string day, string month, string year, char format = 'U')
{
	return createDateString(stoi(day), stoi(month), stoi(year), format);
}

// overloaded functions - same name, different signature
void printWithNewLines(string message, bool extraNewLine)
{
	cout << message << endl;
	if (extraNewLine)
	{
		cout << endl;
	}
}

void printWithNewLines(string message)
{
	printWithNewLines(message, false);
}
