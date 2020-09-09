#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// to get different random numbers every run
	srand(time(0));

	int secretNumber = rand() % 100 + 1;
	int guess;
	bool stillGuessing = true;

	// first guess
	cout << "Guess a number 1-100: " << endl;
	cin >> guess;

	if (guess == secretNumber)
	{
		cout << "You guessed it!" << endl;
		stillGuessing = false;
	}
	else if (guess < secretNumber)
	{
		cout << "You guessed too low!" << endl;
	}
	else if (guess > secretNumber)
	{
		cout << "You guessed too high!" << endl;
	}

	if (stillGuessing)
	{
		cout << "Guess a number 1-100: " << endl;
		cin >> guess;
	}


	// second guess
	if (guess == secretNumber && stillGuessing)
	{
		cout << "You guessed it!" << endl;
		stillGuessing = false;
	}
	else if (guess < secretNumber)
	{
		cout << "You guessed too low!" << endl;
	}
	else if (guess > secretNumber)
	{
		cout << "You guessed too high!" << endl;
	}

	if (stillGuessing)
	{
		cout << "Guess a number 1-100: " << endl;
		cin >> guess;
	}


	// third guess
	if (guess == secretNumber && stillGuessing)
	{
		cout << "You guessed it!" << endl;
		stillGuessing = false;
	}
	else if (guess < secretNumber)
	{
		cout << "You guessed too low!" << endl;
	}
	else if (guess > secretNumber)
	{
		cout << "You guessed too high!" << endl;
	}

	if (stillGuessing)
	{
		cout << "Guess a number 1-100: " << endl;
		cin >> guess;
	}


	// fourth guess
	if (guess == secretNumber && stillGuessing)
	{
		cout << "You guessed it!" << endl;
		stillGuessing = false;
	}
	else if (guess < secretNumber)
	{
		cout << "You guessed too low!" << endl;
	}
	else if (guess > secretNumber)
	{
		cout << "You guessed too high!" << endl;
	}

	if (stillGuessing)
	{
		cout << "Guess a number 1-100: " << endl;
		cin >> guess;
	}


	// fifth guess
	if (guess == secretNumber && stillGuessing)
	{
		cout << "You guessed it!" << endl;
		stillGuessing = false;
	}
	else if (guess < secretNumber)
	{
		cout << "You guessed too low!" << endl;
	}
	else if (guess > secretNumber)
	{
		cout << "You guessed too high!" << endl;
	}

	if (stillGuessing)
	{
		cout << "You lose, the number was: " << secretNumber << endl;
	}


	return 0;
}