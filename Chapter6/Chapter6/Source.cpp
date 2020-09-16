#include <iostream>

using namespace std;

void printHelloInLotsOfLanguages();
int calculateMagicNumber(int number);
int askUserForANumber(string message);
double calculateAverage(int first, int second, int third);

int main()
{
	printHelloInLotsOfLanguages();

	cout << calculateMagicNumber(askUserForANumber(
		"Enter a number between 1 - 10")) << endl;

	cout << "Pick another one, I bet it adds up to 9..." << endl;

	cout << calculateMagicNumber(askUserForANumber(
		"Enter a number between 1 - 10")) << endl;

	cout << "The average of 51, 70, 24 is: " << 
		calculateAverage(51, 70, 24) << endl;

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

double calculateAverage(int first, int second, int third)
{
	return (first + second + third) / 3.0;
}
