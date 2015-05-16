#include "Point.h"


Point::Point(double x, double y): _x(x), _y(y), pointID(++_freeID) {
	#ifndef NDEBUG
	//type here sth
	#endif
	return;
};
Point::Point (const Point& aPoint) : _x(aPoint.x()), _y(aPoint.y()), pointID(++_freeID) {
	#ifndef NDEBUG

	#endif
	return;
};
Point::~Point() {};

Point& Point:: operator=(const Point& aPoint) 
{
	_x = aPoint.x();
	_y = aPoint.y();
	return *this;
}

	double& Point:: x()
	{
		return _x;
	}

	double& Point:: y()
	{
		return _y;
	}
	const double& Point:: x() const
	{
		return _x;
	}

	const double& Point:: y() const
	{
		return _y;
	}
	const int Point:: getID() const
	{
		return pointID;
	}
	
	int Point::amount()
	{
		return _freeID;
	}

ostream& operator<<(ostream& os, const Point& aPoint)
{
	os<<'('<<aPoint.x()<<','<<aPoint.y()<<')';
	return os;
}

const Point& operator+(const Point& point1, const Point& point2)
{
	return Point(point1.x() + point2.x(), point1.y() + point2.y());
}

Point& operator+=( Point& point1, const Point& point2)
{
	point1.x() += point2.x();
	point1.y() += point2.y();
	return point1;
}

bool operator==(const Point& point1, const Point& point2)
{
	return (point1.x() == point2.x(), point1.y() == point2.y());
}

bool operator!=(const Point& point1, const Point& point2)
{
	return (point1.x() != point2.x(), point1.y() != point2.y());
}

