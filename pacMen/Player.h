#pragma once
class Player
{
public:
	Player();

	void move(int levelWidth, int levelHight);

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
	void setDir(int dirX, int dirY);
	

private:
	int _posX;
	int _posY;
	int _prevPosX;
	int _prevPosY;
	int _turns;
	int _scores;
	int _dirX;
	int _dirY;
};

