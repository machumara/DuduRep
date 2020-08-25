#pragma once
#include "Level.h"
#include "Player.h"

class Game
{
public:
	
	Game();
	void play();
	void getPlayerInput();
	void checkMove();

private:
	Level _level;
	Player _player;
	bool _gameOver;
};

