#include <iostream>
#include <vector>
#include "Maze.h"
using namespace std;

int main()
{
	vector<vector<char>> map;

	int rows;
	int columns;

	cout << "how many rows are in your maze?" << endl;
	cin >> rows;

	cout << "how many columns are in your maze?" << endl;
	cin >> columns;

	string line;
	// remove the endline from cin on columns
	getline(cin, line);
	for (int rowIndex = 0; rowIndex < rows; rowIndex++)
	{
		cout << "Enter the row, X for walls, S for start, E for end, spaces for coridors" << endl;
		getline(cin, line);
		vector<char> row;
		for (int charIndex = 0; charIndex < line.size(); charIndex++)
		{
			row.push_back(line.at(charIndex));
		}
		map.push_back(row);
	}

	Maze maze(map);

	string direction;
	
	while (!maze.hasReachedEnd())
	{
		cout << maze.toString() << endl;
		cout << "Go up, down, left or right?" << endl;
		cin >> direction;

		if (direction == "up")
		{
			if (!maze.goUp())
			{
				cout << "Can't go up!" << endl;
			}
		}
		else if (direction == "down")
		{
			if (!maze.goDown())
			{
				cout << "Can't go down!" << endl;
			}
		}
		else if (direction == "left")
		{
			if (!maze.goLeft())
			{
				cout << "Can't go left!" << endl;
			}
		}
		else if (direction == "right")
		{
			if (!maze.goRight())
			{
				cout << "Can't go right!" << endl;
			}
		}
	}

	cout << maze.toString() << endl;
	cout << "You made it out of the maze!!!" << endl;

	return 0;
}