#pragma once

#include <vector>
#include <string>
#include "Player.h"


using namespace std;

class Level
{
public:
	Level();
	void load(string levelFileName);
	void print(Player player);

	vector <string> _levelData;
	
private:
	
};

