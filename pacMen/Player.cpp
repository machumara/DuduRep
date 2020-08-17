#include "Player.h"

Player::Player()
{
	_posX = 6;
	_posY = 12;
	_turns = 1;
	_scores = 0;
	_direction = STOP;
}

void Player::move()
{
	_prevPosX = _posX;
	_prevPosY = _posY;

	switch (_direction)
	{
	case 0:
		_posY--;
		break;
	case 1:
		_posY++;
		break;
	case 2:
		_posX--;
		break;
	case 3:
		_posX++;
		break;
	}
}

