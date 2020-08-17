#include "Level.h"
#include <fstream>
#include <iostream>

using namespace std;

Level::Level()
{
}

//load level from file to vector _levelData
void Level::load(string levelFileName)
{
	ifstream file;

	file.open(levelFileName);

	string line;
	while (getline(file, line))
	{
		_levelData.push_back(line);
	}
}

// print level and set the player 
void Level::print(Player player)
{
	//set player pos
	_levelData[player.getY()][player.getX()] = '@';

	//remove prev player pos
	if (player.getX() != player.getPrevX() || player.getY() != player.getPrevY())
	{
		_levelData[player.getPrevY()][player.getPrevX()] = ' ';
	}
	//print the level
	for (int i = 0; i < _levelData.size(); i++)
	{
		cout << _levelData[i] << endl;
	}
}

