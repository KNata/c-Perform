#ifndef _SEGMENT_H_
#define _SEGMENT_H_

#include <ostream>
#include <iostream>

#include "Point.h"

class Segment
{
private:
	Point _start;
	Point _end;

	const int _myID;

public:
	int _freeID;

	Segment(double x1 = 0, double y1 = 0, double x2 = 0, double y2 = 0);
	Segment(const Point& start, const Point& end);
	Segment(const Segment& segment);
	~Segment();

	Segment& operator=(const Segment& segment);
	const Point& start() const;
	const Point& end() const;

	Point& start();
	Point& end();

	const double& startX() const;
	const double& startY() const;
	const double& endX() const;
	const double& endY() const;

	double& startX();
	double& startY();
	double& endX();
	double& endY();

	double length() const;
	double distance(const Point& aPoint) const;

	const int getID();
};

ostream& operator<<(ostream& os, const Segment& aSegment);

#endif