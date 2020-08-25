#pragma once
#include "Point.h"
class Player
{
public:
	Player();

	void move(Point levelSize);

	//getters
	Point getPos() { return _pos; }
	Point getPrevPos() { return _prevPos; }
	Point getDir() { return _dir; }
	

	//setters
	void setPos(Point pos);
	void setPrevPos(Point prevPos);
	void setDir(Point dir);
	

private:
	Point _pos;
	Point _prevPos;
	Point _dir;
	int _turns;
	int _scores;
	
};

