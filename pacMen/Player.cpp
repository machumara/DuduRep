#include "Player.h"

Player::Player()
{
	_posX = 6;
	_posY = 12;
	_turns = 1;
	_scores = 0;
	_dirX = 0;
	_dirY = 0;
}

void Player::move(int levelWidth, int levelHight)
{
	_prevPosX = _posX;
	_prevPosY = _posY;

	if (_posX + _dirX > 0 && _posX + _dirX < levelWidth-1 && _posY + _dirY > 0 && _posY + _dirY < levelHight-1)
	{
		_posX += _dirX;
		_posY += _dirY;
	}
}

void Player::setDir(int dirX, int dirY)
{
	_dirX = dirX;
	_dirY = dirY;

}

