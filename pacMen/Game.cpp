#include "Game.h"
#include <iostream>
#include <conio.h>


using namespace std;

Game::Game()
{
	_level.load("level1.txt");
	gameOver = false;
}

void Game::play()
{
	while (!gameOver)
	{
		system("CLS");

		_level.print(_player);
		getPlayerInput();
		_player.move();
		checkMove();

		//cout << endl << "Y = " << _player.getY() << endl;

		//system("PAUSE");
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
			_player.setDirUp();
			break;

		case 's'://DOWN
		case 'S':
			_player.setDirDown();
			break;

		case 'a'://LEFT
		case 'A':
			_player.setDirLeft();
			break;

		case 'd'://RIGHT
		case 'D':
			_player.setDirRight();
			break;

		case 'q'://Exit
		case 'Q':
			gameOver = true;
			break;
		}
	}
}

void Game::checkMove()
{
	if (_player.getY() == 0)
	{
		_player.setY(_player.getY() + 1);
		_player.setDirStop();
	}
	else if (_player.getY() == _level._levelData.size() - 1)
	{
		_player.setY(_player.getY() - 1);
		_player.setDirStop();
	}
	else if (_player.getX() == 0)
	{
		_player.setX(_player.getX() + 1);
		_player.setDirStop();
	}
	else if (_player.getX() == _level._levelData[0].size() -1)
	{
		_player.setX(_player.getX() - 1);
		_player.setDirStop();
	}
}
