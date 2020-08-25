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
	//init level size
	_size.x = _levelData[0].size();
	_size.y = _levelData.size();
}

// print level and set the player pos
void Level::print(Player player)
{
	//set player pos
	setTile(player.getPos(), '@');

	//remove prev player pos
	if (player.getPos() != player.getPrevPos())
	{
		setTile(player.getPrevPos(), ' ');
	}

	//print the level
	for (int i = 0; i < _levelData.size(); i++)
	{
		cout << _levelData[i] << endl;
	}
}

char Level::getTile(Point pos)
{
	return _levelData[pos.y][pos.x];
}

void Level::setTile(Point point, char symb)
{
	_levelData[point.y][point.x] = symb;
}

