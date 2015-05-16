#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

using namespace std;


class Point
{
private:
	double _x;
	double _y;
	const int pointID;

public:
	int _freeID;
	Point(double x = 0, double y = 0);
	Point(const Point& aPoint);
	~Point();

	Point& operator=(const Point& aPoint);

	double& x();
	double& y();
	const double& x() const;
	const double& y() const;
	const int getID() const;
	int amount();
};

ostream& operator<<(ostream& os, const Point& aPoint);
const Point& operator+(const Point& point1, const Point& point2);

Point& operator+=( Point& point1, const Point& point2);
bool operator==(const Point& point1, const Point& point2);
bool operator!=(const Point& point1, const Point& point2);

#endif