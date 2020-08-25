#include "Game.h"
#include <iostream>
#include <conio.h>


using namespace std;

Game::Game()
{
	_level.load("level1.txt");

	_gameOver = false;
}

void Game::play()
{
	while (!_gameOver)
	{
		system("CLS");

		_level.print(_player);
		getPlayerInput();

		cout << "x dir =" << _player.getDir().x << endl;
		cout << "y dir =" << _player.getDir().y << endl;
 
		checkMove();
		_player.move(_level.getSize());
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
			_player.setDir(Point(0, -1));
			break;

		case 's'://DOWN
		case 'S':
			_player.setDir(Point(0, 1));
			break;

		case 'a'://LEFT
		case 'A':
			_player.setDir(Point(-1, 0));
			break;

		case 'd'://RIGHT
		case 'D':
			_player.setDir(Point(1, 0));
			break;

		case 'q'://Exit
		case 'Q':
			_gameOver = true;
			break;
		}
	}
}

void Game::checkMove()
{
	switch (_level.getTile(Point(_player.getPos().x + _player.getDir().x, _player.getPos().y + _player.getDir().y)))
	{
	case '|':
	case '-':
		_player.setDir(Point(0, 0));
		break;
	}
}
