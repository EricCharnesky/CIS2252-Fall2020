// sourced from https://raw.githubusercontent.com/EricCharnesky/CIS2252-Fall2020/master/Chapter4Examples/Chapter4Examples/Source.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int number = 1;

	// don't try this at home!
	/*
	while (number > 0)
	{
		//cout << number++ << endl;
		number++;
	}
	*/
	
	// to get different random numbers every run
	srand(time(0));

	char playAgain = 'y';

	// tolower makes it so I don't need to check against upper case Y
	while (tolower(playAgain) == 'y')
	{
		cout << "How high of a number do you want to guess up to?" << endl;
		int maxNumber;
		cin >> maxNumber;

		int secretNumber = rand() % maxNumber + 1;
		int guess;
		bool stillGuessing = true;
		int numberOfGuesses = 0;

		while (stillGuessing)
		{
			numberOfGuesses++;
			cout << "Guess a number 1-" << maxNumber << ": " << endl;
			cin >> guess;

			if (guess == secretNumber)
			{
				cout << "You guessed it!" << endl;
				cout << "It took you " << numberOfGuesses << " guesses!" << endl;
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
		}

		cout << "Do you want to play again? y/n" << endl;
		cin >> playAgain;
	}

	return 0;
}