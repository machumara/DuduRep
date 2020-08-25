#include "Player.h"

Player::Player()
{
	_pos.x = 6;
	_pos.y = 12;
	_turns = 1;
	_scores = 0;
	_dir.x = 0;
	_dir.y = 0;
}

void Player::move(Point levelSize)
{
	_prevPos = _pos;

	if (_pos.x + _dir.x > 0 && _pos.x + _dir.x < levelSize.x-1 && _pos.y + _dir.y > 0 && _pos.y + _dir.y < levelSize.y-1)
	{
		_pos += _dir;
	}
}

Point Player::getNextMove()
{
	return _pos + _dir;
}

void Player::setPos(Point pos)
{
	_pos = pos;
}

void Player::setPrevPos(Point prevPos)
{
	_prevPos = prevPos;
}

void Player::setDir(Point dir)
{
	_dir = dir;
}

