#include "Game.h"
#include <iostream>
#include <conio.h>


using namespace std;

Game::Game()
{
	_level.load("level1.txt");

	_levelWidth = _level._levelData[0].size();
	_levelHight = _level._levelData.size();

	gameOver = false;
}

void Game::play()
{
	while (!gameOver)
	{
		system("CLS");

		_level.print(_player);
		getPlayerInput();
		_player.move(_levelWidth, _levelHight);
		
	}
}

void Game::getPlayerInput()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w'://UP
		case 'W':
			_player.setDir(0, -1);
			break;

		case 's'://DOWN
		case 'S':
			_player.setDir(0, 1);
			break;

		case 'a'://LEFT
		case 'A':
			_player.setDir(-1, 0);
			break;

		case 'd'://RIGHT
		case 'D':
			_player.setDir(1, 0);
			break;

		case 'q'://Exit
		case 'Q':
			gameOver = true;
			break;
		}
	}
}