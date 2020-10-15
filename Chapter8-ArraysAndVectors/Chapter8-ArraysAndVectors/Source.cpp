#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

struct Grade
{
	string name;
	double score;
};

void print_lotto_numbers(string message, int numbers[], int size)
{
	cout << message;

	for (int index= 0; index< size; index++)
	{
		cout << numbers[index] << " ";
	}

	cout << endl;
}

int check_winning(int winning_numbers[], int other_numbers[], int size)
{
	// this checks if they start at the same memory address
	if (winning_numbers == other_numbers)
	{
		return 5000;
	}

	for (int index = 0; index < size; index++)
	{
		if (winning_numbers[index] != other_numbers[index])
		{
			return 0;
		}
	}

	// if we get here, it means they all matched
	return 5000;
		
}

int main()
{
	srand(time(0));

	int const SIZE_OF_NUMBERS = 4;

	int winning_lotto_numbers[SIZE_OF_NUMBERS];

	for (int index = 0; index < SIZE_OF_NUMBERS; index++)
	{
		winning_lotto_numbers[index] = rand() % 10;
	}

	cout << "Enter your lotto picks: ";

	int user_numbers[SIZE_OF_NUMBERS];

	cin >> user_numbers[0] >> user_numbers[1] >>
		user_numbers[2] >> user_numbers[3];

	int user_number_1 = 1;
	int user_number_2 = 2;
	int user_number_3 = 3;
	int user_number_4 = 4;

	// initialize with values
	int example_lotto_numbers[] = { user_number_1, user_number_2, 
		user_number_3, user_number_4 };
		
	print_lotto_numbers("Winning numbers: ", winning_lotto_numbers, SIZE_OF_NUMBERS);
	print_lotto_numbers("Your numbers: ", user_numbers, SIZE_OF_NUMBERS);
	print_lotto_numbers("Example numbers: ", example_lotto_numbers, SIZE_OF_NUMBERS);


	cout << "You won: $" << 
		check_winning(winning_lotto_numbers, user_numbers, SIZE_OF_NUMBERS) 
		<< endl;

	cout << "You won: $" <<
		check_winning(example_lotto_numbers, user_numbers, SIZE_OF_NUMBERS)
		<< endl;


	// do this instead of parallel arrays
	Grade grades[10];

	// think of row and column
	int twoDimensional[5][10];


	// telling it how big is optional!
	vector<int> vector_lotto_numbers;
	vector_lotto_numbers.push_back(9);
	vector_lotto_numbers.push_back(8);
	vector_lotto_numbers.push_back(7);
	vector_lotto_numbers.push_back(6);

	vector<int> another_vector_of_lotto_numbers{ 9, 8, 7, 6 };

	for (int number : vector_lotto_numbers)
	{
		cout << number << " ";
	}
	cout << endl;

	for (int index = 0; index < vector_lotto_numbers.size(); index++)
	{
		cout << vector_lotto_numbers.at(index) << " ";
	}
	cout << endl;

	vector<vector<char>> twoDVector;

	for (int row = 0; row < 8; row++)
	{
		// adds an empty vector as the row
		twoDVector.push_back(vector<char>());
		for (int column = 0; column < 8; column++)
		{
			if ((column % 2 == 0  && row % 2 == 0) 
				|| ( column % 2 == 1 && row % 2 == 1 ))
			{
				// adding to the row vector
				twoDVector.at(row).push_back(' ');
			}
			else
			{
				twoDVector.at(row).push_back('X');
			}
			
		}
	}

	for (vector<char> row : twoDVector)
	{
		for (char space : row)
		{
			cout << space;
		}
		cout << endl;
	}

	string exampleMaze =
		" X X XXX "
		" X    XX "
		"  bX     "
		"XXXXXXXX "
		"E        ";


	return 0;
}