#pragma once
class Player
{
public:
	Player();

	void move();

	//getters
	int getX() { return _posX;}
	int getY() { return _posY;}
	int getPrevX() { return _prevPosX;}
	int getPrevY() { return _prevPosY;}

	//setters
	void setX(int x) {_posX = x;}
	void setY(int y) {_posY = y;}
	void setPrevX(int x) {_prevPosX = x;}
	void setPrevY(int y) {_prevPosY = y;}

#define UP 0;
#define DOWN 1;
#define LEFT 2;
#define RIGHT 3;
#define STOP 4;

	void setDirUp() { _direction = UP; }
	void setDirDown() { _direction = DOWN; }
	void setDirLeft() { _direction = LEFT; }
	void setDirRight() { _direction = RIGHT; }
	void setDirStop() { _direction = STOP; }

private:
	int _posX;
	int _posY;
	int _prevPosX;
	int _prevPosY;
	int _turns;
	int _scores;
	int _direction;
};

