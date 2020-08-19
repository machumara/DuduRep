#pragma once
#include "Level.h"
#include "Player.h"

class Game
{
public:
	bool gameOver;
	Game();
	void play();
	void getPlayerInput();

private:
	Level _level;
	Player _player;

	int _levelWidth;
	int _levelHight;
};

