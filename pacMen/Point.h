#pragma once

class Point
{
public:
	Point();

	Point(int x, int y);

	int x;
	int y;

	Point operator + (Point point);
	void operator += (Point point);
	bool operator != (Point point);
	

};

