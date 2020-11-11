#pragma once

#include <vector>
#include <string>

using namespace std;

class Maze
{
private:
	vector<vector<char>> map;
	int playerRowIndex;
	int playerColumnIndex;
	bool reachedEnd;

public:
	
	const static char START = 'S';
	const static char END = 'E';
	const static char WALL = 'X';
	const static char SPACE = ' ';
	const static char PLAYER = 'P';
	

	Maze(vector<vector<char>> map) 
	{
		this->map = map;
		for (int rowIndex = 0; rowIndex < map.size(); rowIndex++)
		{
			for (int columnIndex = 0;
				columnIndex < map.at(rowIndex).size(); columnIndex++)
			{
				if (map.at(rowIndex).at(columnIndex) == START)
				{
					playerColumnIndex = columnIndex;
					playerRowIndex = rowIndex;
				}
			}
		}
		reachedEnd = false;
	}

	bool hasReachedEnd()
	{
		return reachedEnd;
	}

	bool goUp()
	{
		// there is no row to move "up" to or there is wall above us
		if (playerRowIndex == 0 || 
			map.at(playerRowIndex - 1).at(playerColumnIndex) == WALL)
		{
			return false;
		}
		reachedEnd = map.at(playerRowIndex - 1).at(playerColumnIndex) == END;
		map.at(playerRowIndex).at(playerColumnIndex) = SPACE;
		playerRowIndex--;
		map.at(playerRowIndex).at(playerColumnIndex) = PLAYER;
		
		return true;
	}

	bool goDown()
	{
		// there is no row to move "down" to or there is wall there
		if (playerRowIndex == map.size() - 1 ||
			map.at(playerRowIndex + 1).at(playerColumnIndex) == WALL)
		{
			return false;
		}
		reachedEnd = map.at(playerRowIndex + 1).at(playerColumnIndex) == END;
		map.at(playerRowIndex).at(playerColumnIndex) = SPACE;
		playerRowIndex++;
		map.at(playerRowIndex).at(playerColumnIndex) = PLAYER;
		return true;
	}

	bool goLeft()
	{
		// there is no row to move "left" to or there is wall there
		if (playerColumnIndex == 0 ||
			map.at(playerRowIndex).at(playerColumnIndex - 1) == WALL)
		{
			return false;
		}
		reachedEnd = map.at(playerRowIndex).at(playerColumnIndex - 1) == END;
		map.at(playerRowIndex).at(playerColumnIndex) = SPACE;
		playerColumnIndex--;
		map.at(playerRowIndex).at(playerColumnIndex) = PLAYER;
		return true;
	}

	bool goRight()
	{
		// there is no row to move "right" to or there is wall there
		if (playerColumnIndex == map.at(playerRowIndex).size() - 1 ||
			map.at(playerRowIndex).at(playerColumnIndex + 1) == WALL)
		{
			return false;
		}
		reachedEnd = map.at(playerRowIndex).at(playerColumnIndex + 1) == END;
		map.at(playerRowIndex).at(playerColumnIndex) = SPACE;
		playerColumnIndex++;
		map.at(playerRowIndex).at(playerColumnIndex) = PLAYER;
		return true;
	}

	string toString()
	{
		string mapString = "";
		for (vector<char> row : map)
		{
			for (char value : row)
			{
				mapString += value;
			}
			mapString += "\n";
		}
		return mapString;
	}

	int getPlayerCurrentRowIndex()
	{
		return playerRowIndex;
	}

	int getPlayerCurrentColumnIndex()
	{
		return playerColumnIndex;
	}

};