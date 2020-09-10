// sourced from https://raw.githubusercontent.com/EricCharnesky/CIS2252-Fall2020/master/Chapter4Examples/Chapter4Examples/Source.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int number = 1;

	while (number > 0)
	{
		//cout << number++ << endl;
		number++;
	}
	
	/*
	// to get different random numbers every run
	srand(time(0));

	int secretNumber = rand() % 100 + 1;
	int guess;
	bool stillGuessing = true;

	while (stillGuessing)
	{
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
	}

	*/
	return 0;
}