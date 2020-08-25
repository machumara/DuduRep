#pragma once

#include <vector>
#include <string>
#include "Player.h"
#include "Point.h"


using namespace std;

class Level
{
public:
	Level();
	void load(string levelFileName);
	void print(Player player);

	//getters
	Point getSize() { return _size; }
	char getTile(Point pos);

	
	
private:
	vector <string> _levelData;
	Point _size;
};

