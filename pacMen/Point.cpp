#include "Point.h"

Point::Point()
{
}

Point::Point(int pointX, int pointY)
{
	x = pointX;
	y = pointY;
}

Point Point::operator+(Point point)
{
	Point newPoint;

	newPoint.x = x + point.x;
	newPoint.y = y + point.y;

	return newPoint;
}

void Point::operator+=(Point point)
{
	x += point.x;
	y += point.y;
}

bool Point::operator!=(Point point)
{
		return x != point.x || y != point.y;
}
